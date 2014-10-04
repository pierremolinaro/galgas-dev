#ifndef class_2D_mapTypeForGeneration_1_DEFINED
#define class_2D_mapTypeForGeneration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticTypeForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @mapTypeForGeneration class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_mapTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_mapTypeForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_mapTypeForGeneration * ptr (void) const { return (const cPtr_mapTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_mapTypeForGeneration (const cPtr_mapTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMapProxy & inOperand0,
                                                               const class GALGAS_unifiedTypeMapProxy & inOperand1,
                                                               const class GALGAS_lstring & inOperand2,
                                                               const class GALGAS_typedAttributeList & inOperand3,
                                                               const class GALGAS_insertMethodListAST & inOperand4,
                                                               const class GALGAS_mapSearchMethodListAST & inOperand5,
                                                               const class GALGAS_mapRemoveMethodListAST & inOperand6,
                                                               const class GALGAS_bool & inOperand7
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxy reader_mElementTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasInsertOrReplaceModifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST reader_mInsertMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMapTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapRemoveMethodListAST reader_mRemoveMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST reader_mSearchMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedAttributeList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapTypeForGeneration ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

