#ifndef class_2D_classe_2B_i_DEFINED
#define class_2D_classe_2B_i_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "class-classe+i-1.h"

//----------------------------------------------------------------------------------------------------------------------

#include "weak-reference-classe+h-2Eweak.h"
//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classeI class
//--------------------------------------------------------------------------------------------------

class cPtr_classeI : public cPtr_classeC {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classeI_init_21_ (const class GGS_uint & inOperand0,
                                 Compiler * inCompiler) ;


//--- Properties
  public: GGS_uint mProperty_y ;
  public: GGS_classeH_2E_weak mProperty_z ;


//--- Default constructor
  public: cPtr_classeI (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classeI (const GGS_uint & in_y,
                        Compiler * inCompiler
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

