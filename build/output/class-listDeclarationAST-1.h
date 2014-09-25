#ifndef class_2D_listDeclarationAST_1_DEFINED
#define class_2D_listDeclarationAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticDeclarationAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @listDeclarationAST class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_listDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_listDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_listDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_listDeclarationAST * ptr (void) const { return (const cPtr_listDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_listDeclarationAST (const cPtr_listDeclarationAST * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_listDeclarationAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_listDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                             const class GALGAS_lstring & inOperand1,
                                                             const class GALGAS_attributeInCollectionListAST & inOperand2
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_listDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listDeclarationAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

