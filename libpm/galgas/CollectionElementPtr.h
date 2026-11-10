//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2010, ..., 2026 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "SharedObject.h"
#include "ComparisonResult.h"

//--------------------------------------------------------------------------------------------------

class String ;

//--------------------------------------------------------------------------------------------------

class CollectionElementPtr : public SharedObject {
//--- Default constructor
  public: CollectionElementPtr (LOCATION_ARGS) ;

//--- No copy
  private: CollectionElementPtr (const CollectionElementPtr &) = delete ;
  private: CollectionElementPtr & operator = (const CollectionElementPtr &) = delete ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const = 0 ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) = 0 ;
} ;

//--------------------------------------------------------------------------------------------------
