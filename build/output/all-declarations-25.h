#ifndef all_2D_declarations_2D__32__35__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__35__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-24.h"

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
