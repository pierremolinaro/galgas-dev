#ifndef struct_2D_branchBehaviourSortedListForMapOverride_2D_element_1_DEFINED
#define struct_2D_branchBehaviourSortedListForMapOverride_2D_element_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-mapAutomatonMessageKind.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @branchBehaviourSortedListForMapOverride_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_branchBehaviourSortedListForMapOverride_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mStartStateIndex ;
  public : GALGAS_string mAttribute_mStartStateName ;
  public : GALGAS_uint mAttribute_mCurrentStateIndex ;
  public : GALGAS_string mAttribute_mCurrentStateName ;
  public : GALGAS_uint mAttribute_mFinalStateIndex ;
  public : GALGAS_string mAttribute_mFinalStateName ;
  public : GALGAS_mapAutomatonMessageKind mAttribute_mBehaviourMessageKind ;
  public : GALGAS_string mAttribute_mBehaviourMessage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_branchBehaviourSortedListForMapOverride_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_branchBehaviourSortedListForMapOverride_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_branchBehaviourSortedListForMapOverride_2D_element (const GALGAS_uint & in_mStartStateIndex,
                                                                      const GALGAS_string & in_mStartStateName,
                                                                      const GALGAS_uint & in_mCurrentStateIndex,
                                                                      const GALGAS_string & in_mCurrentStateName,
                                                                      const GALGAS_uint & in_mFinalStateIndex,
                                                                      const GALGAS_string & in_mFinalStateName,
                                                                      const GALGAS_mapAutomatonMessageKind & in_mBehaviourMessageKind,
                                                                      const GALGAS_string & in_mBehaviourMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_branchBehaviourSortedListForMapOverride_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_branchBehaviourSortedListForMapOverride_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                                             const class GALGAS_string & inOperand1,
                                                                                             const class GALGAS_uint & inOperand2,
                                                                                             const class GALGAS_string & inOperand3,
                                                                                             const class GALGAS_uint & inOperand4,
                                                                                             const class GALGAS_string & inOperand5,
                                                                                             const class GALGAS_mapAutomatonMessageKind & inOperand6,
                                                                                             const class GALGAS_string & inOperand7
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_branchBehaviourSortedListForMapOverride_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBehaviourMessage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonMessageKind reader_mBehaviourMessageKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mCurrentStateIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCurrentStateName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mFinalStateIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFinalStateName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mStartStateIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mStartStateName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_branchBehaviourSortedListForMapOverride_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchBehaviourSortedListForMapOverride_2D_element ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

