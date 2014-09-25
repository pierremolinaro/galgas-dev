#ifndef map_2D_categoryMethodMapForGlobalCheckings_1_DEFINED
#define map_2D_categoryMethodMapForGlobalCheckings_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @categoryMethodMapForGlobalCheckings map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_categoryMethodMapForGlobalCheckings ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryMethodMapForGlobalCheckings : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_categoryMethodMapForGlobalCheckings (void) ;

//--------------------------------- Handle copy
  public : GALGAS_categoryMethodMapForGlobalCheckings (const GALGAS_categoryMethodMapForGlobalCheckings & inSource) ;
  public : GALGAS_categoryMethodMapForGlobalCheckings & operator = (const GALGAS_categoryMethodMapForGlobalCheckings & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryMethodMapForGlobalCheckings extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryMethodMapForGlobalCheckings constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_categoryMethodMapForGlobalCheckings constructor_mapWithMapToOverride (const class GALGAS_categoryMethodMapForGlobalCheckings & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_categoryMethodMapForGlobalCheckings reader_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_categoryMethodMapForGlobalCheckings * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_categoryMethodMapForGlobalCheckings ;
 
} ; // End of GALGAS_categoryMethodMapForGlobalCheckings class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_categoryMethodMapForGlobalCheckings : public cGenericAbstractEnumerator {
  public : cEnumerator_categoryMethodMapForGlobalCheckings (const GALGAS_categoryMethodMapForGlobalCheckings & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_categoryMethodMapForGlobalCheckings_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryMethodMapForGlobalCheckings ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

