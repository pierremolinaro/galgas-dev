//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  File 'class-templateLiteralSIntExpressionAST.h'                                    *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_templateLiteralSIntExpressionAST_DEFINED
#define class_2D_templateLiteralSIntExpressionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-templateLiteralSIntExpressionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @templateLiteralSIntExpressionAST class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_templateLiteralSIntExpressionAST : public cPtr_templateExpressionAST {
//--- Attributes
  public : GALGAS_lsint mAttribute_mLiteralInt ;

//--- Constructor
  public : cPtr_templateLiteralSIntExpressionAST (const GALGAS_lsint & in_mLiteralInt
                                                  COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lsint reader_mLiteralInt (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

