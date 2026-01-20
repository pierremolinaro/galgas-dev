#ifndef class_2D_inherited_2B_class_2B_for_2B_type_2B_cast_2B_in_2B_setter_2B_call_DEFINED
#define class_2D_inherited_2B_class_2B_for_2B_type_2B_cast_2B_in_2B_setter_2B_call_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-inherited+class+for+type+cast+in+setter+call-1.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inheritedClassForTypeCastInSetterCall class
//--------------------------------------------------------------------------------------------------

class cPtr_inheritedClassForTypeCastInSetterCall : public cPtr_baseClassForTypeCastInSetterCall {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inheritedClassForTypeCastInSetterCall_init (Compiler * inCompiler) ;


//--- Extension method unSetter
  public: virtual void method_unSetter (Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties



//--- Constructor
  public: cPtr_inheritedClassForTypeCastInSetterCall (Compiler * inCompiler
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

