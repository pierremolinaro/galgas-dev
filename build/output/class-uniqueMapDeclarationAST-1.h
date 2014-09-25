#ifndef class_2D_uniqueMapDeclarationAST_1_DEFINED
#define class_2D_uniqueMapDeclarationAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-semanticDeclarationAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @uniqueMapDeclarationAST class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uniqueMapDeclarationAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_uniqueMapDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_uniqueMapDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_uniqueMapDeclarationAST * ptr (void) const { return (const cPtr_uniqueMapDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_uniqueMapDeclarationAST (const cPtr_uniqueMapDeclarationAST * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_uniqueMapDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_uniqueMapDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_attributeInCollectionListAST & inOperand2,
                                                                  const class GALGAS_insertMethodListAST & inOperand3,
                                                                  const class GALGAS_mapSearchMethodListAST & inOperand4,
                                                                  const class GALGAS_mapStateList & inOperand5,
                                                                  const class GALGAS_mapOverrideBlockListAST & inOperand6
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_uniqueMapDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_attributeInCollectionListAST reader_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST reader_mInsertMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideBlockListAST reader_mMapOverrideBlockListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateList reader_mMapStateList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMapTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST reader_mSearchMethodList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_uniqueMapDeclarationAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uniqueMapDeclarationAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

