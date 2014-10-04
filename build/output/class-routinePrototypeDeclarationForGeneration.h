#ifndef class_2D_routinePrototypeDeclarationForGeneration_DEFINED
#define class_2D_routinePrototypeDeclarationForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-routinePrototypeDeclarationForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-formalParameterListForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @routinePrototypeDeclarationForGeneration class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_routinePrototypeDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mRoutineName ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mFormalArgumentList ;

//--- Constructor
  public : cPtr_routinePrototypeDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                          const GALGAS_string & in_mImplementationCppFileName,
                                                          const GALGAS_string & in_mRoutineName,
                                                          const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration reader_mFormalArgumentList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

