#ifndef class_2D_overridingAbstractCategoryMethodAST_1_DEFINED
#define class_2D_overridingAbstractCategoryMethodAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticDeclarationAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @overridingAbstractCategoryMethodAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_overridingAbstractCategoryMethodAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingAbstractCategoryMethodAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingAbstractCategoryMethodAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingAbstractCategoryMethodAST * ptr (void) const { return (const cPtr_overridingAbstractCategoryMethodAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingAbstractCategoryMethodAST (const cPtr_overridingAbstractCategoryMethodAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingAbstractCategoryMethodAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_overridingAbstractCategoryMethodAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_lstring & inOperand2,
                                                                              const class GALGAS_formalParameterListAST & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingAbstractCategoryMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mOverridingCategoryMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOverridingCategoryMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractCategoryMethodAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

