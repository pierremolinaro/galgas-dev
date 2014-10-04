#ifndef class_2D_enumDeclarationAST_DEFINED
#define class_2D_enumDeclarationAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-enumDeclarationAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-enumConstantList.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @enumDeclarationAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumDeclarationAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mEnumTypeName ;
  public : GALGAS_enumConstantList mAttribute_mConstantList ;

//--- Constructor
  public : cPtr_enumDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                    const GALGAS_lstring & in_mEnumTypeName,
                                    const GALGAS_enumConstantList & in_mConstantList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mEnumTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_enumConstantList reader_mConstantList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

