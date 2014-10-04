#ifndef class_2D_uintPredefinedTypeAST_1_DEFINED
#define class_2D_uintPredefinedTypeAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-predefinedTypeAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @uintPredefinedTypeAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uintPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_uintPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_uintPredefinedTypeAST * ptr (void) const { return (const cPtr_uintPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_uintPredefinedTypeAST (const cPtr_uintPredefinedTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_uintPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_uintPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                const class GALGAS_string & inOperand1,
                                                                const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_uintPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_uintPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

