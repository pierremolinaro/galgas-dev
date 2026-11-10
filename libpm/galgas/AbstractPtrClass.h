//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2008, ..., 2026 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "SharedObject.h"
#include "ComparisonResult.h"

//--------------------------------------------------------------------------------------------------

class String ;
class GALGAS_TypeDescriptor ;

//--------------------------------------------------------------------------------------------------

class AbstractPtrClass : public SharedObject {
  public: AbstractPtrClass (LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual ComparisonResult dynamicObjectCompare (const AbstractPtrClass * /* inOperandPtr */) const {
    return ComparisonResult::invalid ;
  }

  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const = 0 ;

  public: virtual AbstractPtrClass * duplicate (class Compiler * COMMA_UNUSED_LOCATION_ARGS) const = 0 ;
} ;

//--------------------------------------------------------------------------------------------------
