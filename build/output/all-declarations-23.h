#ifndef all_2D_declarations_2D__32__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-22.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @addExpressionForGeneration class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_addExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_addExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_addExpressionForGeneration * ptr (void) const { return (const cPtr_addExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_addExpressionForGeneration (const cPtr_addExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_addExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_addExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                     const class GALGAS_location & inOperand1,
                                                                     const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                     const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_addExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @addExpressionForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_addExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_addExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                            const GALGAS_location & in_mLocation,
                                            const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                            const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @addExpressionNoOverflowForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_addExpressionNoOverflowForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_addExpressionNoOverflowForGeneration (void) ;

//---
  public : inline const class cPtr_addExpressionNoOverflowForGeneration * ptr (void) const { return (const cPtr_addExpressionNoOverflowForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_addExpressionNoOverflowForGeneration (const cPtr_addExpressionNoOverflowForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_addExpressionNoOverflowForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_addExpressionNoOverflowForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_addExpressionNoOverflowForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addExpressionNoOverflowForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @addExpressionNoOverflowForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_addExpressionNoOverflowForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_addExpressionNoOverflowForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                      const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @andExpressionForGeneration class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_andExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_andExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_andExpressionForGeneration * ptr (void) const { return (const cPtr_andExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_andExpressionForGeneration (const cPtr_andExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_andExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_andExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                     const class GALGAS_location & inOperand1,
                                                                     const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                     const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @andExpressionForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_andExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_andExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                            const GALGAS_location & in_mLocation,
                                            const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                            const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @andShortExpressionForGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_andShortExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_andShortExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_andShortExpressionForGeneration * ptr (void) const { return (const cPtr_andShortExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_andShortExpressionForGeneration (const cPtr_andShortExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_andShortExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_andShortExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andShortExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andShortExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @andShortExpressionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_andShortExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_andShortExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                 const GALGAS_location & in_mLocation,
                                                 const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                 const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @castInExpressionForGeneration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_castInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_castInExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_castInExpressionForGeneration * ptr (void) const { return (const cPtr_castInExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_castInExpressionForGeneration (const cPtr_castInExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_castInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_castInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                        const class GALGAS_location & inOperand1,
                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                        const class GALGAS_string & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_castInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_castInExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @castInExpressionForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_castInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mReceiverExpression ;
  public : GALGAS_string mAttribute_mTypeName ;

//--- Constructor
  public : cPtr_castInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                               const GALGAS_location & in_mLocation,
                                               const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                               const GALGAS_string & in_mTypeName
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @closedSliceExpressionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_closedSliceExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_closedSliceExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_closedSliceExpressionForGeneration * ptr (void) const { return (const cPtr_closedSliceExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_closedSliceExpressionForGeneration (const cPtr_closedSliceExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_closedSliceExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_closedSliceExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_closedSliceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_closedSliceExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @closedSliceExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_closedSliceExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_closedSliceExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                    const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @concatExpressionForGeneration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_concatExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_concatExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_concatExpressionForGeneration * ptr (void) const { return (const cPtr_concatExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_concatExpressionForGeneration (const cPtr_concatExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_concatExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_concatExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                        const class GALGAS_location & inOperand1,
                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_concatExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_concatExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_concatExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @concatExpressionForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_concatExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_concatExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                               const GALGAS_location & in_mLocation,
                                               const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                               const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @constructorExpressionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_constructorExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_constructorExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constructorExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_constructorExpressionForGeneration * ptr (void) const { return (const cPtr_constructorExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_constructorExpressionForGeneration (const cPtr_constructorExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_constructorExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_semanticExpressionListForGeneration & inOperand4,
                                                                             const class GALGAS_bool & inOperand5
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mConstructorName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mConstructorType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration reader_mEffectiveParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasCompilerArgument (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @constructorExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_constructorExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mConstructorType ;
  public : GALGAS_string mAttribute_mConstructorName ;
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mEffectiveParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_constructorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mConstructorType,
                                                    const GALGAS_string & in_mConstructorName,
                                                    const GALGAS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                    const GALGAS_bool & in_mHasCompilerArgument
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mConstructorType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mConstructorName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration reader_mEffectiveParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasCompilerArgument (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @defaultConstructorExpressionForGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_defaultConstructorExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_defaultConstructorExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_defaultConstructorExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_defaultConstructorExpressionForGeneration * ptr (void) const { return (const cPtr_defaultConstructorExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_defaultConstructorExpressionForGeneration (const cPtr_defaultConstructorExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_defaultConstructorExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_defaultConstructorExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                    const class GALGAS_location & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_defaultConstructorExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_defaultConstructorExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @defaultConstructorExpressionForGeneration class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_defaultConstructorExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_defaultConstructorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                           const GALGAS_location & in_mLocation
                                                           COMMA_LOCATION_ARGS) ;

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
//                                       @divisionExpressionForGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_divisionExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_divisionExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_divisionExpressionForGeneration * ptr (void) const { return (const cPtr_divisionExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_divisionExpressionForGeneration (const cPtr_divisionExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_divisionExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_divisionExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_divisionExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divisionExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @divisionExpressionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_divisionExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_divisionExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                 const GALGAS_location & in_mLocation,
                                                 const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                 const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @divisionExpressionNoOverflowForGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_divisionExpressionNoOverflowForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_divisionExpressionNoOverflowForGeneration (void) ;

//---
  public : inline const class cPtr_divisionExpressionNoOverflowForGeneration * ptr (void) const { return (const cPtr_divisionExpressionNoOverflowForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_divisionExpressionNoOverflowForGeneration (const cPtr_divisionExpressionNoOverflowForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_divisionExpressionNoOverflowForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_divisionExpressionNoOverflowForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_divisionExpressionNoOverflowForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divisionExpressionNoOverflowForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @divisionExpressionNoOverflowForGeneration class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_divisionExpressionNoOverflowForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_divisionExpressionNoOverflowForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                           const GALGAS_location & in_mLocation,
                                                           const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                           const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @equalExpressionForGeneration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_equalExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_equalExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_equalExpressionForGeneration * ptr (void) const { return (const cPtr_equalExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_equalExpressionForGeneration (const cPtr_equalExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_equalExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_equalExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                       const class GALGAS_location & inOperand1,
                                                                       const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                       const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_equalExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_equalExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equalExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @equalExpressionForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_equalExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_equalExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                              const GALGAS_location & in_mLocation,
                                              const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                              const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @expressionCollectionForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expressionCollectionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_expressionCollectionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_expressionCollectionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_expressionCollectionForGeneration * ptr (void) const { return (const cPtr_expressionCollectionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expressionCollectionForGeneration (const cPtr_expressionCollectionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expressionCollectionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_expressionCollectionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_collectionValueElementListForGeneration & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expressionCollectionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementListForGeneration reader_mElementList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionCollectionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @expressionCollectionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expressionCollectionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_collectionValueElementListForGeneration mAttribute_mElementList ;

//--- Constructor
  public : cPtr_expressionCollectionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_collectionValueElementListForGeneration & in_mElementList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_collectionValueElementListForGeneration reader_mElementList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @extractObjectInExpressionForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_extractObjectInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_extractObjectInExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_extractObjectInExpressionForGeneration * ptr (void) const { return (const cPtr_extractObjectInExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_extractObjectInExpressionForGeneration (const cPtr_extractObjectInExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extractObjectInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_extractObjectInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                 const class GALGAS_location & inOperand1,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                 const class GALGAS_string & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extractObjectInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mReceiverExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extractObjectInExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @extractObjectInExpressionForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_extractObjectInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mReceiverExpression ;
  public : GALGAS_string mAttribute_mTypeName ;

//--- Constructor
  public : cPtr_extractObjectInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                        const GALGAS_location & in_mLocation,
                                                        const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                        const GALGAS_string & in_mTypeName
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @falseExpressionForGeneration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_falseExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_falseExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_falseExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_falseExpressionForGeneration * ptr (void) const { return (const cPtr_falseExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_falseExpressionForGeneration (const cPtr_falseExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_falseExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_falseExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                       const class GALGAS_location & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_falseExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_falseExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @falseExpressionForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_falseExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_falseExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                              const GALGAS_location & in_mLocation
                                              COMMA_LOCATION_ARGS) ;

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
//                                     @filewrapperInExpressionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_filewrapperInExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperInExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_filewrapperInExpressionForGeneration * ptr (void) const { return (const cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_filewrapperInExpressionForGeneration (const cPtr_filewrapperInExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_string & inOperand2,
                                                                               const class GALGAS_string & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFilewrapperName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFilewrapperPath (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperInExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @filewrapperInExpressionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_filewrapperInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mFilewrapperName ;
  public : GALGAS_string mAttribute_mFilewrapperPath ;

//--- Constructor
  public : cPtr_filewrapperInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_string & in_mFilewrapperName,
                                                      const GALGAS_string & in_mFilewrapperPath
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFilewrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFilewrapperPath (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @filewrapperStaticPathInExpressionForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperStaticPathInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_filewrapperStaticPathInExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperStaticPathInExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_filewrapperStaticPathInExpressionForGeneration * ptr (void) const { return (const cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_filewrapperStaticPathInExpressionForGeneration (const cPtr_filewrapperStaticPathInExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperStaticPathInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperStaticPathInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                         const class GALGAS_location & inOperand1,
                                                                                         const class GALGAS_string & inOperand2,
                                                                                         const class GALGAS_uint & inOperand3,
                                                                                         const class GALGAS_bool & inOperand4
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperStaticPathInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mFilewrapperFileIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFilewrapperName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsTextFile (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperStaticPathInExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @filewrapperStaticPathInExpressionForGeneration class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_filewrapperStaticPathInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mFilewrapperName ;
  public : GALGAS_uint mAttribute_mFilewrapperFileIndex ;
  public : GALGAS_bool mAttribute_mIsTextFile ;

//--- Constructor
  public : cPtr_filewrapperStaticPathInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                const GALGAS_location & in_mLocation,
                                                                const GALGAS_string & in_mFilewrapperName,
                                                                const GALGAS_uint & in_mFilewrapperFileIndex,
                                                                const GALGAS_bool & in_mIsTextFile
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFilewrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mFilewrapperFileIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsTextFile (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @filewrapperTemplateInExpressionForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperTemplateInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_filewrapperTemplateInExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperTemplateInExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_filewrapperTemplateInExpressionForGeneration * ptr (void) const { return (const cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_filewrapperTemplateInExpressionForGeneration (const cPtr_filewrapperTemplateInExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperTemplateInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperTemplateInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                       const class GALGAS_location & inOperand1,
                                                                                       const class GALGAS_string & inOperand2,
                                                                                       const class GALGAS_string & inOperand3,
                                                                                       const class GALGAS_semanticExpressionListForGeneration & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration reader_mActualOutputParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFilewrapperName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFilewrapperTemplateName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperTemplateInExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Pointer class for @filewrapperTemplateInExpressionForGeneration class                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_filewrapperTemplateInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mFilewrapperName ;
  public : GALGAS_string mAttribute_mFilewrapperTemplateName ;
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mActualOutputParameterList ;

//--- Constructor
  public : cPtr_filewrapperTemplateInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                              const GALGAS_location & in_mLocation,
                                                              const GALGAS_string & in_mFilewrapperName,
                                                              const GALGAS_string & in_mFilewrapperTemplateName,
                                                              const GALGAS_semanticExpressionListForGeneration & in_mActualOutputParameterList
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFilewrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration reader_mActualOutputParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @functionCallExpressionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionCallExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_functionCallExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionCallExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_functionCallExpressionForGeneration * ptr (void) const { return (const cPtr_functionCallExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionCallExpressionForGeneration (const cPtr_functionCallExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionCallExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionCallExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                              const class GALGAS_location & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_semanticExpressionListForGeneration & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionCallExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration reader_mExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFunctionName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @functionCallExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionCallExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mFunctionName ;
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mExpressions ;

//--- Constructor
  public : cPtr_functionCallExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_string & in_mFunctionName,
                                                     const GALGAS_semanticExpressionListForGeneration & in_mExpressions
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration reader_mExpressions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @greaterOrEqualExpressionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_greaterOrEqualExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_greaterOrEqualExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_greaterOrEqualExpressionForGeneration * ptr (void) const { return (const cPtr_greaterOrEqualExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_greaterOrEqualExpressionForGeneration (const cPtr_greaterOrEqualExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_greaterOrEqualExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_greaterOrEqualExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_greaterOrEqualExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_greaterOrEqualExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_greaterOrEqualExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @greaterOrEqualExpressionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_greaterOrEqualExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_greaterOrEqualExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                       const GALGAS_location & in_mLocation,
                                                       const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                       const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @hereExpressionForGeneration class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_hereExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_hereExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_hereExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_hereExpressionForGeneration * ptr (void) const { return (const cPtr_hereExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_hereExpressionForGeneration (const cPtr_hereExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_hereExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_hereExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                      const class GALGAS_location & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_hereExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_hereExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_hereExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @hereExpressionForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_hereExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_hereExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                             const GALGAS_location & in_mLocation
                                             COMMA_LOCATION_ARGS) ;

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
//                                          @ifExpressionForGeneration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ifExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_ifExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_ifExpressionForGeneration * ptr (void) const { return (const cPtr_ifExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ifExpressionForGeneration (const cPtr_ifExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ifExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ifExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                    const class GALGAS_location & inOperand1,
                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand4
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ifExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mElseExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mIfExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mThenExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @ifExpressionForGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_ifExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mIfExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mThenExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mElseExpression ;

//--- Constructor
  public : cPtr_ifExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                           const GALGAS_location & in_mLocation,
                                           const GALGAS_semanticExpressionForGeneration & in_mIfExpression,
                                           const GALGAS_semanticExpressionForGeneration & in_mThenExpression,
                                           const GALGAS_semanticExpressionForGeneration & in_mElseExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mIfExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mThenExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mElseExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @leftShiftExpressionForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_leftShiftExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_leftShiftExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_leftShiftExpressionForGeneration * ptr (void) const { return (const cPtr_leftShiftExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_leftShiftExpressionForGeneration (const cPtr_leftShiftExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_leftShiftExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_leftShiftExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                           const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_leftShiftExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_leftShiftExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @leftShiftExpressionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_leftShiftExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_leftShiftExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                  const GALGAS_location & in_mLocation,
                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @lexiqueIntrospectionForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueIntrospectionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_lexiqueIntrospectionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexiqueIntrospectionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexiqueIntrospectionForGeneration * ptr (void) const { return (const cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexiqueIntrospectionForGeneration (const cPtr_lexiqueIntrospectionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueIntrospectionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexiqueIntrospectionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_string & inOperand2,
                                                                            const class GALGAS_string & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueIntrospectionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLexiqueComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLexiqueReaderName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueIntrospectionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @lexiqueIntrospectionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexiqueIntrospectionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mLexiqueComponentName ;
  public : GALGAS_string mAttribute_mLexiqueReaderName ;

//--- Constructor
  public : cPtr_lexiqueIntrospectionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_string & in_mLexiqueComponentName,
                                                   const GALGAS_string & in_mLexiqueReaderName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLexiqueComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLexiqueReaderName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @literalBigIntExpressionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalBigIntExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_literalBigIntExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalBigIntExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalBigIntExpressionForGeneration * ptr (void) const { return (const cPtr_literalBigIntExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalBigIntExpressionForGeneration (const cPtr_literalBigIntExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalBigIntExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalBigIntExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_bigint & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalBigIntExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bigint reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalBigIntExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @literalBigIntExpressionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalBigIntExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_bigint mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalBigIntExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_bigint & in_mValue
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bigint reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @literalCharExpressionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalCharExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_literalCharExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalCharExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalCharExpressionForGeneration * ptr (void) const { return (const cPtr_literalCharExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalCharExpressionForGeneration (const cPtr_literalCharExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalCharExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalCharExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_char & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalCharExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_char reader_mCharacter (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalCharExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @literalCharExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalCharExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_char mAttribute_mCharacter ;

//--- Constructor
  public : cPtr_literalCharExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_char & in_mCharacter
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_char reader_mCharacter (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @literalDoubleExpressionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalDoubleExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_literalDoubleExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalDoubleExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalDoubleExpressionForGeneration * ptr (void) const { return (const cPtr_literalDoubleExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalDoubleExpressionForGeneration (const cPtr_literalDoubleExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalDoubleExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalDoubleExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_double & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalDoubleExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_double reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalDoubleExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @literalDoubleExpressionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalDoubleExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_double mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalDoubleExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_double & in_mValue
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_double reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @literalSInt_36__34_ExpressionForGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalSInt_36__34_ExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_literalSInt_36__34_ExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalSInt_36__34_ExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalSInt_36__34_ExpressionForGeneration * ptr (void) const { return (const cPtr_literalSInt_36__34_ExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalSInt_36__34_ExpressionForGeneration (const cPtr_literalSInt_36__34_ExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalSInt_36__34_ExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalSInt_36__34_ExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     const class GALGAS_sint_36__34_ & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalSInt_36__34_ExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_sint_36__34_ reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSInt_36__34_ExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @literalSInt64ExpressionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalSInt_36__34_ExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_sint_36__34_ mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalSInt_36__34_ExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                            const GALGAS_location & in_mLocation,
                                                            const GALGAS_sint_36__34_ & in_mValue
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_sint_36__34_ reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @literalSIntExpressionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalSIntExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_literalSIntExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalSIntExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalSIntExpressionForGeneration * ptr (void) const { return (const cPtr_literalSIntExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalSIntExpressionForGeneration (const cPtr_literalSIntExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalSIntExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalSIntExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_sint & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalSIntExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_sint reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSIntExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @literalSIntExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalSIntExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_sint mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalSIntExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_sint & in_mValue
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_sint reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @literalStringExpressionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalStringExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_literalStringExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalStringExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalStringExpressionForGeneration * ptr (void) const { return (const cPtr_literalStringExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalStringExpressionForGeneration (const cPtr_literalStringExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalStringExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalStringExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_string & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalStringExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mString (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @literalStringExpressionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalStringExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mString ;

//--- Constructor
  public : cPtr_literalStringExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_string & in_mString
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mString (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @literalTypeInExpressionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalTypeInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_literalTypeInExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalTypeInExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalTypeInExpressionForGeneration * ptr (void) const { return (const cPtr_literalTypeInExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalTypeInExpressionForGeneration (const cPtr_literalTypeInExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalTypeInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalTypeInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_string & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalTypeInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalTypeInExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @literalTypeInExpressionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalTypeInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mTypeName ;

//--- Constructor
  public : cPtr_literalTypeInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_string & in_mTypeName
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @literalUInt_36__34_ExpressionForGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalUInt_36__34_ExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_literalUInt_36__34_ExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalUInt_36__34_ExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalUInt_36__34_ExpressionForGeneration * ptr (void) const { return (const cPtr_literalUInt_36__34_ExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalUInt_36__34_ExpressionForGeneration (const cPtr_literalUInt_36__34_ExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalUInt_36__34_ExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalUInt_36__34_ExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     const class GALGAS_uint_36__34_ & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalUInt_36__34_ExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint_36__34_ reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUInt_36__34_ExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @literalUInt64ExpressionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalUInt_36__34_ExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_uint_36__34_ mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalUInt_36__34_ExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                            const GALGAS_location & in_mLocation,
                                                            const GALGAS_uint_36__34_ & in_mValue
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint_36__34_ reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @literalUIntExpressionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literalUIntExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_literalUIntExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalUIntExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalUIntExpressionForGeneration * ptr (void) const { return (const cPtr_literalUIntExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalUIntExpressionForGeneration (const cPtr_literalUIntExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalUIntExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literalUIntExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_uint & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalUIntExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUIntExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @literalUIntExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_literalUIntExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_uint mAttribute_mValue ;

//--- Constructor
  public : cPtr_literalUIntExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_uint & in_mValue
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @lowerOrEqualExpressionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lowerOrEqualExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_lowerOrEqualExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_lowerOrEqualExpressionForGeneration * ptr (void) const { return (const cPtr_lowerOrEqualExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lowerOrEqualExpressionForGeneration (const cPtr_lowerOrEqualExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lowerOrEqualExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lowerOrEqualExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                              const class GALGAS_location & inOperand1,
                                                                              const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                              const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lowerOrEqualExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lowerOrEqualExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lowerOrEqualExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @lowerOrEqualExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lowerOrEqualExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_lowerOrEqualExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                     const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @moduloExpressionForGeneration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_moduloExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_moduloExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_moduloExpressionForGeneration * ptr (void) const { return (const cPtr_moduloExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_moduloExpressionForGeneration (const cPtr_moduloExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_moduloExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_moduloExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                        const class GALGAS_location & inOperand1,
                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_moduloExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_moduloExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_moduloExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @moduloExpressionForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_moduloExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_moduloExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                               const GALGAS_location & in_mLocation,
                                               const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                               const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @multiplicationExpressionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_multiplicationExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_multiplicationExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_multiplicationExpressionForGeneration * ptr (void) const { return (const cPtr_multiplicationExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_multiplicationExpressionForGeneration (const cPtr_multiplicationExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_multiplicationExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_multiplicationExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multiplicationExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @multiplicationExpressionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_multiplicationExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_multiplicationExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                       const GALGAS_location & in_mLocation,
                                                       const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                       const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @multiplicationExpressionNoOverflowForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_multiplicationExpressionNoOverflowForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_multiplicationExpressionNoOverflowForGeneration (void) ;

//---
  public : inline const class cPtr_multiplicationExpressionNoOverflowForGeneration * ptr (void) const { return (const cPtr_multiplicationExpressionNoOverflowForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_multiplicationExpressionNoOverflowForGeneration (const cPtr_multiplicationExpressionNoOverflowForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_multiplicationExpressionNoOverflowForGeneration extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_multiplicationExpressionNoOverflowForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                          const class GALGAS_location & inOperand1,
                                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionNoOverflowForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multiplicationExpressionNoOverflowForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @multiplicationExpressionNoOverflowForGeneration class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_multiplicationExpressionNoOverflowForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_multiplicationExpressionNoOverflowForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                 const GALGAS_location & in_mLocation,
                                                                 const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                 const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @notEqualExpressionForGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_notEqualExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_notEqualExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_notEqualExpressionForGeneration * ptr (void) const { return (const cPtr_notEqualExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_notEqualExpressionForGeneration (const cPtr_notEqualExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_notEqualExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_notEqualExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_notEqualExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_notEqualExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notEqualExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @notEqualExpressionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_notEqualExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_notEqualExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                 const GALGAS_location & in_mLocation,
                                                 const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                 const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @notExpressionForGeneration class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_notExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_notExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_notExpressionForGeneration * ptr (void) const { return (const cPtr_notExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_notExpressionForGeneration (const cPtr_notExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_notExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_notExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                     const class GALGAS_location & inOperand1,
                                                                     const class GALGAS_semanticExpressionForGeneration & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_notExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_notExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @notExpressionForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_notExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mExpression ;

//--- Constructor
  public : cPtr_notExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                            const GALGAS_location & in_mLocation,
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
//                                      @openedSliceExpressionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_openedSliceExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_openedSliceExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_openedSliceExpressionForGeneration * ptr (void) const { return (const cPtr_openedSliceExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_openedSliceExpressionForGeneration (const cPtr_openedSliceExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_openedSliceExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_openedSliceExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_openedSliceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_openedSliceExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @openedSliceExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_openedSliceExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_openedSliceExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                    const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @optionCharExpressionForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionCharExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_optionCharExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionCharExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_optionCharExpressionForGeneration * ptr (void) const { return (const cPtr_optionCharExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_optionCharExpressionForGeneration (const cPtr_optionCharExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionCharExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionCharExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            const class GALGAS_string & inOperand3,
                                                                            const class GALGAS_string & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionCharExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mOptionComponentIsPredefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOptionEntryName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionCharExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @optionCharExpressionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_optionCharExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mOptionComponentIsPredefined ;
  public : GALGAS_string mAttribute_mOptionComponentName ;
  public : GALGAS_string mAttribute_mOptionEntryName ;

//--- Constructor
  public : cPtr_optionCharExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                   const GALGAS_string & in_mOptionComponentName,
                                                   const GALGAS_string & in_mOptionEntryName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mOptionComponentIsPredefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mOptionEntryName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @optionCommentExpressionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionCommentExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_optionCommentExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionCommentExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_optionCommentExpressionForGeneration * ptr (void) const { return (const cPtr_optionCommentExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_optionCommentExpressionForGeneration (const cPtr_optionCommentExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionCommentExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionCommentExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_bool & inOperand2,
                                                                               const class GALGAS_string & inOperand3,
                                                                               const class GALGAS_string & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionCommentExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mOptionComponentIsPredefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOptionEntryName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionCommentExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @optionCommentExpressionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_optionCommentExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mOptionComponentIsPredefined ;
  public : GALGAS_string mAttribute_mOptionComponentName ;
  public : GALGAS_string mAttribute_mOptionEntryName ;

//--- Constructor
  public : cPtr_optionCommentExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                      const GALGAS_string & in_mOptionComponentName,
                                                      const GALGAS_string & in_mOptionEntryName
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mOptionComponentIsPredefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mOptionEntryName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @optionStringExpressionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionStringExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_optionStringExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionStringExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_optionStringExpressionForGeneration * ptr (void) const { return (const cPtr_optionStringExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_optionStringExpressionForGeneration (const cPtr_optionStringExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionStringExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionStringExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                              const class GALGAS_location & inOperand1,
                                                                              const class GALGAS_bool & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_string & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionStringExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mOptionComponentIsPredefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOptionEntryName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionStringExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @optionStringExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_optionStringExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mOptionComponentIsPredefined ;
  public : GALGAS_string mAttribute_mOptionComponentName ;
  public : GALGAS_string mAttribute_mOptionEntryName ;

//--- Constructor
  public : cPtr_optionStringExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                     const GALGAS_string & in_mOptionComponentName,
                                                     const GALGAS_string & in_mOptionEntryName
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mOptionComponentIsPredefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mOptionEntryName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @optionValueExpressionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionValueExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_optionValueExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionValueExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_optionValueExpressionForGeneration * ptr (void) const { return (const cPtr_optionValueExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_optionValueExpressionForGeneration (const cPtr_optionValueExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionValueExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionValueExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_bool & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_string & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionValueExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mOptionComponentIsPredefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOptionEntryName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionValueExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @optionValueExpressionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_optionValueExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mOptionComponentIsPredefined ;
  public : GALGAS_string mAttribute_mOptionComponentName ;
  public : GALGAS_string mAttribute_mOptionEntryName ;

//--- Constructor
  public : cPtr_optionValueExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                    const GALGAS_string & in_mOptionComponentName,
                                                    const GALGAS_string & in_mOptionEntryName
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mOptionComponentIsPredefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mOptionEntryName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @orExpressionForGeneration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_orExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_orExpressionForGeneration * ptr (void) const { return (const cPtr_orExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_orExpressionForGeneration (const cPtr_orExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_orExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                    const class GALGAS_location & inOperand1,
                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @orExpressionForGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_orExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_orExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                           const GALGAS_location & in_mLocation,
                                           const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                           const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @orShortExpressionForGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orShortExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_orShortExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_orShortExpressionForGeneration * ptr (void) const { return (const cPtr_orShortExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_orShortExpressionForGeneration (const cPtr_orShortExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orShortExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_orShortExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                         const class GALGAS_location & inOperand1,
                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orShortExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orShortExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @orShortExpressionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_orShortExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_orShortExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                const GALGAS_location & in_mLocation,
                                                const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @rightShiftExpressionForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_rightShiftExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_rightShiftExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_rightShiftExpressionForGeneration * ptr (void) const { return (const cPtr_rightShiftExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_rightShiftExpressionForGeneration (const cPtr_rightShiftExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_rightShiftExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_rightShiftExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                            const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_rightShiftExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_rightShiftExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rightShiftExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @rightShiftExpressionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_rightShiftExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mAttribute_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_rightShiftExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                   const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @selfCopyInExpressionForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selfCopyInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_selfCopyInExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selfCopyInExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selfCopyInExpressionForGeneration * ptr (void) const { return (const cPtr_selfCopyInExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfCopyInExpressionForGeneration (const cPtr_selfCopyInExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfCopyInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_selfCopyInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_string & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfCopyInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSelfCppName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfCopyInExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfCopyInExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @selfCopyInExpressionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfCopyInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mSelfCppName ;

//--- Constructor
  public : cPtr_selfCopyInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_string & in_mSelfCppName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mSelfCppName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

#endif
