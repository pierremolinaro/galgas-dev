#ifndef class_2D_inputParameterVariable_1_DEFINED
#define class_2D_inputParameterVariable_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractInputParameter.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @inputParameterVariable class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputParameterVariable : public GALGAS_abstractInputParameter {
//--- Constructor
  public : GALGAS_inputParameterVariable (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputParameterVariable constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputParameterVariable * ptr (void) const { return (const cPtr_inputParameterVariable *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputParameterVariable (const cPtr_inputParameterVariable * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputParameterVariable extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputParameterVariable constructor_new (const class GALGAS_lstring & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputParameterVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mActualParameterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterVariable class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterVariable ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

