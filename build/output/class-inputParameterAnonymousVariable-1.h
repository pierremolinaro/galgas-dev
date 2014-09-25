#ifndef class_2D_inputParameterAnonymousVariable_1_DEFINED
#define class_2D_inputParameterAnonymousVariable_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractInputParameter.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @inputParameterAnonymousVariable class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_inputParameterAnonymousVariable : public GALGAS_abstractInputParameter {
//--- Constructor
  public : GALGAS_inputParameterAnonymousVariable (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputParameterAnonymousVariable constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputParameterAnonymousVariable * ptr (void) const { return (const cPtr_inputParameterAnonymousVariable *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputParameterAnonymousVariable (const cPtr_inputParameterAnonymousVariable * inSourcePtr) ;



//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputParameterAnonymousVariable extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_inputParameterAnonymousVariable constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputParameterAnonymousVariable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterAnonymousVariable class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

