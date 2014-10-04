#ifndef class_2D_predefinedTypeAST_DEFINED
#define class_2D_predefinedTypeAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-predefinedTypeAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "enum-predefinedTypeKindEnum.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @predefinedTypeAST class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_predefinedTypeAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_string mAttribute_mPredefinedTypeName ;
  public : GALGAS_predefinedTypeKindEnum mAttribute_mKind ;

//--- Constructor
  public : cPtr_predefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                   const GALGAS_string & in_mPredefinedTypeName,
                                   const GALGAS_predefinedTypeKindEnum & in_mKind
                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mPredefinedTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_predefinedTypeKindEnum reader_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

