//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           File 'struct-forInstructionEnumeratedObjectListAST-element.h'                             *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef struct_2D_forInstructionEnumeratedObjectListAST_2D_element_1_DEFINED
#define struct_2D_forInstructionEnumeratedObjectListAST_2D_element_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractEnumeratedCollectionAST-1.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @forInstructionEnumeratedObjectListAST_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forInstructionEnumeratedObjectListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_bool mAttribute_mAscending ;
  public : GALGAS_abstractEnumeratedCollectionAST mAttribute_mEnumeratedCollection ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_forInstructionEnumeratedObjectListAST_2D_element (const GALGAS_bool & in_mAscending,
                                                                    const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forInstructionEnumeratedObjectListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_forInstructionEnumeratedObjectListAST_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                           const class GALGAS_abstractEnumeratedCollectionAST & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mAscending (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractEnumeratedCollectionAST reader_mEnumeratedCollection (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionEnumeratedObjectListAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2D_element ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

