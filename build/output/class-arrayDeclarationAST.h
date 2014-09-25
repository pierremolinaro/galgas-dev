#ifndef class_2D_arrayDeclarationAST_DEFINED
#define class_2D_arrayDeclarationAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-arrayDeclarationAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @arrayDeclarationAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_arrayDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mArrayTypeName ;
  public : GALGAS_lstring mAttribute_mElementTypeName ;
  public : GALGAS_luint mAttribute_mDimension ;

//--- Constructor
  public : cPtr_arrayDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                     const GALGAS_lstring & in_mArrayTypeName,
                                     const GALGAS_lstring & in_mElementTypeName,
                                     const GALGAS_luint & in_mDimension
                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mArrayTypeName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mElementTypeName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mDimension (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

