#ifndef class_2D_templateTrueBoolAST_1_DEFINED
#define class_2D_templateTrueBoolAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateExpressionAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @templateTrueBoolAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_templateTrueBoolAST : public GALGAS_templateExpressionAST {
//--- Constructor
  public : GALGAS_templateTrueBoolAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_templateTrueBoolAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_templateTrueBoolAST * ptr (void) const { return (const cPtr_templateTrueBoolAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateTrueBoolAST (const cPtr_templateTrueBoolAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateTrueBoolAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_templateTrueBoolAST constructor_new (const class GALGAS_location & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateTrueBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateTrueBoolAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateTrueBoolAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

