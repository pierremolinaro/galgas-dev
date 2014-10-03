#ifndef class_2D_optionComponentForGeneration_DEFINED
#define class_2D_optionComponentForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-optionComponentForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "map-commandLineOptionMap.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @optionComponentForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_optionComponentForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsPredefined ;
  public : GALGAS_string mAttribute_mOptionComponentName ;
  public : GALGAS_commandLineOptionMap mAttribute_mBoolOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mUIntOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringOptionMap ;

//--- Constructor
  public : cPtr_optionComponentForGeneration (const GALGAS_bool & in_mHasHeader,
                                              const GALGAS_string & in_mImplementationCppFileName,
                                              const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_string & in_mOptionComponentName,
                                              const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                              const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                              const GALGAS_commandLineOptionMap & in_mStringOptionMap
                                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsPredefined (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mOptionComponentName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionMap reader_mBoolOptionMap (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionMap reader_mUIntOptionMap (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionMap reader_mStringOptionMap (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

