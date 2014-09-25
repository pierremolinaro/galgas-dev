#ifndef class_2D_boolPredefinedTypeAST_1_DEFINED
#define class_2D_boolPredefinedTypeAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-predefinedTypeAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @boolPredefinedTypeAST class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_boolPredefinedTypeAST : public GALGAS_predefinedTypeAST {
//--- Constructor
  public : GALGAS_boolPredefinedTypeAST (void) ;

//---
  public : inline const class cPtr_boolPredefinedTypeAST * ptr (void) const { return (const cPtr_boolPredefinedTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_boolPredefinedTypeAST (const cPtr_boolPredefinedTypeAST * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_boolPredefinedTypeAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_boolPredefinedTypeAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                const class GALGAS_string & inOperand1,
                                                                const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_boolPredefinedTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolPredefinedTypeAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

