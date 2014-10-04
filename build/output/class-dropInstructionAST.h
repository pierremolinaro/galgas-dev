#ifndef class_2D_dropInstructionAST_DEFINED
#define class_2D_dropInstructionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-dropInstructionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @dropInstructionAST class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_dropInstructionAST : public cPtr_semanticInstructionAST {
//--- Attributes
  public : GALGAS_lstringlist mAttribute_mDropList ;

//--- Constructor
  public : cPtr_dropInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                    const GALGAS_lstringlist & in_mDropList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mDropList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

