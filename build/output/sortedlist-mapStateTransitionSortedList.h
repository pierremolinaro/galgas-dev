//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  File 'sortedlist-mapStateTransitionSortedList.h'                                   *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'35"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef sortedlist_2D_mapStateTransitionSortedList_1_DEFINED
#define sortedlist_2D_mapStateTransitionSortedList_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @mapStateTransitionSortedList sorted list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapStateTransitionSortedList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_mapStateTransitionSortedList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapStateTransitionSortedList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapStateTransitionSortedList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static GALGAS_mapStateTransitionSortedList constructor_sortedListWithValue (const class GALGAS_uint & inOperand0,
                                                                                       const class GALGAS_string & inOperand1,
                                                                                       const class GALGAS_uint & inOperand2,
                                                                                       const class GALGAS_string & inOperand3,
                                                                                       const class GALGAS_mapAutomatonMessageKind & inOperand4,
                                                                                       const class GALGAS_string & inOperand5
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_mapStateTransitionSortedList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_mapAutomatonMessageKind & inOperand4,
                                                      const class GALGAS_string & inOperand5
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateTransitionSortedList operator_concat (const GALGAS_mapStateTransitionSortedList & inOperand
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_popGreatest (class GALGAS_uint & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_uint & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_mapAutomatonMessageKind & outArgument4,
                                                       class GALGAS_string & outArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popSmallest (class GALGAS_uint & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_uint & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_mapAutomatonMessageKind & outArgument4,
                                                       class GALGAS_string & outArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_mapAutomatonMessageKind & outArgument4,
                                                  class GALGAS_string & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_uint & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_mapAutomatonMessageKind & outArgument4,
                                                  class GALGAS_string & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mapStateTransitionSortedList ;
 
} ; // End of GALGAS_mapStateTransitionSortedList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_mapStateTransitionSortedList : public cGenericAbstractEnumerator {
  public : cEnumerator_mapStateTransitionSortedList (const GALGAS_mapStateTransitionSortedList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_uint current_mActionIndex (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mActionName (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mTargetStateIndex (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTargetStateName (LOCATION_ARGS) const ;
  public : class GALGAS_mapAutomatonMessageKind current_mTransitionMessageKind (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTransitionMessage (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_mapStateTransitionSortedList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapStateTransitionSortedList ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

