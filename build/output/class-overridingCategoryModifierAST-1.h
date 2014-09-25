#ifndef class_2D_overridingCategoryModifierAST_1_DEFINED
#define class_2D_overridingCategoryModifierAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticDeclarationAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @overridingCategoryModifierAST class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_overridingCategoryModifierAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_overridingCategoryModifierAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingCategoryModifierAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingCategoryModifierAST * ptr (void) const { return (const cPtr_overridingCategoryModifierAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingCategoryModifierAST (const cPtr_overridingCategoryModifierAST * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingCategoryModifierAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_overridingCategoryModifierAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_formalParameterListAST & inOperand3,
                                                                        const class GALGAS_semanticInstructionListAST & inOperand4,
                                                                        const class GALGAS_location & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingCategoryModifierAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfModifierLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST reader_mOverridingCategoryModifierFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST reader_mOverridingCategoryModifierInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mOverridingCategoryModifierName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingCategoryModifierAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingCategoryModifierAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

