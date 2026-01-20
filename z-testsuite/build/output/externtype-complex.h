#pragma once
//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// Phase 1: @complex extern type
//--------------------------------------------------------------------------------------------------
//  Predeclarations (from GALGAS extern type declaration
//--------------------------------------------------------------------------------------------------

// No Predeclaration

//--------------------------------------------------------------------------------------------------

class GGS_complex : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_complex (void) ;

//---
  public: virtual bool isValid (void) const override ;
  public: virtual void drop (void) override ;

//--- For log instruction
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Code (from GALGAS extern type declaration)
  private : bool mIsValid ;
  private : double mReal ;
  private : double mImaginary ;


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_complex init_21__21_ (const class GGS_double & inOperand0,
                                           const class GGS_double & inOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_complex extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_double getter_imaginary (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_real (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_complex ;


//----------------------------------------------------------------------------------------------------------------------

