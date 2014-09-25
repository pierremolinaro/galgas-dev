#ifndef list_2D_Xcode_5F_PBXFrameworksBuildPhase_5F_list_1_DEFINED
#define list_2D_Xcode_5F_PBXFrameworksBuildPhase_5F_list_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @Xcode_PBXFrameworksBuildPhase_list list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & in_mBuildPhase
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list constructor_listWithValue (const class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list operator_concat (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list & inOperand
                                                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list add_operation (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list & inOperand,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_Xcode_5F_PBXFrameworksBuildPhase constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_Xcode_5F_PBXFrameworksBuildPhase & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXFrameworksBuildPhase reader_mBuildPhaseAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_Xcode_5F_PBXFrameworksBuildPhase_5F_list ;
 
} ; // End of GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_Xcode_5F_PBXFrameworksBuildPhase_5F_list : public cGenericAbstractEnumerator {
  public : cEnumerator_Xcode_5F_PBXFrameworksBuildPhase_5F_list (const GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list & inEnumeratedObject,
                                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_Xcode_5F_PBXFrameworksBuildPhase current_mBuildPhase (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_Xcode_5F_PBXFrameworksBuildPhase_5F_list ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

