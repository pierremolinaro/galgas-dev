#ifndef class_2D_inputJokerParameterForGeneration_1_DEFINED
#define class_2D_inputJokerParameterForGeneration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-actualParameterForGeneration.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @inputJokerParameterForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputJokerParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--- Constructor
  public : GALGAS_inputJokerParameterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputJokerParameterForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputJokerParameterForGeneration * ptr (void) const { return (const cPtr_inputJokerParameterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputJokerParameterForGeneration (const cPtr_inputJokerParameterForGeneration * inSourcePtr) ;

//--- Insulate
  public : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;


//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputJokerParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputJokerParameterForGeneration constructor_new (const class GALGAS_unifiedTypeMapProxy & inOperand0,
                                                                           const class GALGAS_string & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputJokerParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mInputActualCppName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputJokerParameterForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

