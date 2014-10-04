#ifndef class_2D_outputInputActualParameterAST_DEFINED
#define class_2D_outputInputActualParameterAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-outputInputActualParameterAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @outputInputActualParameterAST class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_outputInputActualParameterAST : public cPtr_actualParameterAST {
//--- Attributes
  public : GALGAS_lstring mAttribute_mActualSelector ;
  public : GALGAS_lstring mAttribute_mOutputInputActualParameterName ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;

//--- Constructor
  public : cPtr_outputInputActualParameterAST (const GALGAS_location & in_mQualifierLocation,
                                               const GALGAS_lstring & in_mActualSelector,
                                               const GALGAS_lstring & in_mOutputInputActualParameterName,
                                               const GALGAS_lstringlist & in_mStructAttributeList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mActualSelector (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mOutputInputActualParameterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mStructAttributeList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

