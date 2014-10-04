#ifndef class_2D_overridingAbstractCategoryReaderAST_DEFINED
#define class_2D_overridingAbstractCategoryReaderAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-overridingAbstractCategoryReaderAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalInputParameterListAST.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @overridingAbstractCategoryReaderAST class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingAbstractCategoryReaderAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mAbstractCategoryReaderName ;
  public : GALGAS_formalInputParameterListAST mAttribute_mAbstractCategoryReaderFormalInputParameterList ;
  public : GALGAS_lstring mAttribute_mAbstractCategoryReaderReturnedTypeName ;

//--- Constructor
  public : cPtr_overridingAbstractCategoryReaderAST (const GALGAS_bool & in_mIsPredefined,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mAbstractCategoryReaderName,
                                                     const GALGAS_formalInputParameterListAST & in_mAbstractCategoryReaderFormalInputParameterList,
                                                     const GALGAS_lstring & in_mAbstractCategoryReaderReturnedTypeName
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAbstractCategoryReaderName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListAST reader_mAbstractCategoryReaderFormalInputParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mAbstractCategoryReaderReturnedTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

