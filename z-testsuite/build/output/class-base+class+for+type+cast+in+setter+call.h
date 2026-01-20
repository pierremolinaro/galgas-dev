#ifndef class_2D_base_2B_class_2B_for_2B_type_2B_cast_2B_in_2B_setter_2B_call_DEFINED
#define class_2D_base_2B_class_2B_for_2B_type_2B_cast_2B_in_2B_setter_2B_call_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-base+class+for+type+cast+in+setter+call-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseClassForTypeCastInSetterCall class
//--------------------------------------------------------------------------------------------------

class cPtr_baseClassForTypeCastInSetterCall : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseClassForTypeCastInSetterCall_init (Compiler * inCompiler) ;


//--- Properties



//--- Constructor
  public: cPtr_baseClassForTypeCastInSetterCall (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;


//----------------------------------------------------------------------------------------------------------------------

#endif

