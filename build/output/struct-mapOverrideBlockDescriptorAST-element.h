#ifndef struct_2D_mapOverrideBlockDescriptorAST_2D_element_1_DEFINED
#define struct_2D_mapOverrideBlockDescriptorAST_2D_element_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-mapAutomatonMessageKind.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @mapOverrideBlockDescriptorAST_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapOverrideBlockDescriptorAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mLeftState ;
  public : GALGAS_lstring mAttribute_mRightState ;
  public : GALGAS_lstring mAttribute_mResultingState ;
  public : GALGAS_mapAutomatonMessageKind mAttribute_mMessageKind ;
  public : GALGAS_lstring mAttribute_mTransitionMessage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_mapOverrideBlockDescriptorAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_mapOverrideBlockDescriptorAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_mapOverrideBlockDescriptorAST_2D_element (const GALGAS_lstring & in_mLeftState,
                                                            const GALGAS_lstring & in_mRightState,
                                                            const GALGAS_lstring & in_mResultingState,
                                                            const GALGAS_mapAutomatonMessageKind & in_mMessageKind,
                                                            const GALGAS_lstring & in_mTransitionMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapOverrideBlockDescriptorAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapOverrideBlockDescriptorAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                   const class GALGAS_mapAutomatonMessageKind & inOperand3,
                                                                                   const class GALGAS_lstring & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapOverrideBlockDescriptorAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mLeftState (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonMessageKind reader_mMessageKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mResultingState (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRightState (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTransitionMessage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapOverrideBlockDescriptorAST_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapOverrideBlockDescriptorAST_2D_element ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

