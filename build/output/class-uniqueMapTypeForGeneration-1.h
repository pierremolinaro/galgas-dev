//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    File 'class-uniqueMapTypeForGeneration-1.h'                                      *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_uniqueMapTypeForGeneration_1_DEFINED
#define class_2D_uniqueMapTypeForGeneration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticTypeForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @uniqueMapTypeForGeneration class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uniqueMapTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_uniqueMapTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_uniqueMapTypeForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_uniqueMapTypeForGeneration * ptr (void) const { return (const cPtr_uniqueMapTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_uniqueMapTypeForGeneration (const cPtr_uniqueMapTypeForGeneration * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_uniqueMapTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_uniqueMapTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_typedAttributeList & inOperand2,
                                                                     const class GALGAS_insertMethodListAST & inOperand3,
                                                                     const class GALGAS_mapSearchMethodListAST & inOperand4,
                                                                     const class GALGAS_mapAutomatonStateMap & inOperand5,
                                                                     const class GALGAS_mapAutomatonActionMap & inOperand6,
                                                                     const class GALGAS_mapStateSortedList & inOperand7,
                                                                     const class GALGAS_mapOverrideList & inOperand8
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_uniqueMapTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST reader_mInsertMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonActionMap reader_mMapAutomatonActionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonStateMap reader_mMapAutomatonStateMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideList reader_mMapOverrideList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateSortedList reader_mMapStateSortedList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMapTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST reader_mSearchMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedAttributeList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_uniqueMapTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uniqueMapTypeForGeneration ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

