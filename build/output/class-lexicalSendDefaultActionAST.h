//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     File 'class-lexicalSendDefaultActionAST.h'                                      *
//                                             Generated by version 2.7.0                                              *
//                                           august 8th, 2014, at 20h2'36"                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef class_2D_lexicalSendDefaultActionAST_DEFINED
#define class_2D_lexicalSendDefaultActionAST_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-lexicalSendDefaultActionAST-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @lexicalSendDefaultActionAST class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexicalSendDefaultActionAST : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_lexicalSendDefaultActionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

