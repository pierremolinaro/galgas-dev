#ifndef class_2D_stringPredefinedTypeAST_DEFINED
#define class_2D_stringPredefinedTypeAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-stringPredefinedTypeAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @stringPredefinedTypeAST class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_stringPredefinedTypeAST : public cPtr_predefinedTypeAST {
//--- Attributes

//--- Constructor
  public : cPtr_stringPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                         const GALGAS_string & in_mPredefinedTypeName,
                                         const GALGAS_predefinedTypeKindEnum & in_mKind
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

