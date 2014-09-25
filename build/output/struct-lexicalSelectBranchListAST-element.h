#ifndef struct_2D_lexicalSelectBranchListAST_2D_element_1_DEFINED
#define struct_2D_lexicalSelectBranchListAST_2D_element_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-lexicalExpressionAST-1.h"
#include "list-lexicalInstructionListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalSelectBranchListAST_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexicalSelectBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lexicalExpressionAST mAttribute_mSelectExpression ;
  public : GALGAS_lexicalInstructionListAST mAttribute_mSelectInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_lexicalSelectBranchListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_lexicalSelectBranchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_lexicalSelectBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                         const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexicalSelectBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexicalSelectBranchListAST_2D_element constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                                const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexicalSelectBranchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalExpressionAST reader_mSelectExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST reader_mSelectInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSelectBranchListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2D_element ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

