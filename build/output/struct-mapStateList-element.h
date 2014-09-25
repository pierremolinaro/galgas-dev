#ifndef struct_2D_mapStateList_2D_element_1_DEFINED
#define struct_2D_mapStateList_2D_element_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-mapAutomatonMessageKind.h"
#include "list-mapStateTransitionList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @mapStateList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapStateList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mStateName ;
  public : GALGAS_mapAutomatonMessageKind mAttribute_mStateMessageKind ;
  public : GALGAS_lstring mAttribute_mStateMessage ;
  public : GALGAS_mapStateTransitionList mAttribute_mTransitionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_mapStateList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_mapStateList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_mapStateList_2D_element (const GALGAS_lstring & in_mStateName,
                                           const GALGAS_mapAutomatonMessageKind & in_mStateMessageKind,
                                           const GALGAS_lstring & in_mStateMessage,
                                           const GALGAS_mapStateTransitionList & in_mTransitionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapStateList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapStateList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_mapAutomatonMessageKind & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  const class GALGAS_mapStateTransitionList & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapStateList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mStateMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonMessageKind reader_mStateMessageKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mStateName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateTransitionList reader_mTransitionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapStateList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapStateList_2D_element ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

