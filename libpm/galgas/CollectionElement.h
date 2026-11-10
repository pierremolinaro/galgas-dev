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
class CollectionElementPtr ;

//--------------------------------------------------------------------------------------------------

class CollectionElement final {
//--- Private pointer
  private: CollectionElementPtr * mPtr ;

//--- Default constructor
  public: CollectionElement (void) ;

//--- Destructor
  public: ~ CollectionElement (void) ;

//--- Handle copy
  public: CollectionElement (const CollectionElement & inSource) ;
  public: CollectionElement & operator = (const CollectionElement & inSource) ;

//--- set pointer
  public: void setPointer (CollectionElementPtr * inObjectPointer) ;

//--- Method that checks that all attributes are valid
  public: bool isValid (void) const ;

//--- Method that ensures that pointer object is unique
  public: void insulate (void) ;

//--- Method that release object
  public: void drop (void) ;

//--- Get pointer (for temporary use)
  public: inline CollectionElementPtr * ptr (void) { return mPtr ; }
  public: inline const CollectionElementPtr * ptr (void) const { return mPtr ; }

//--- Method that returns a copy of current object
  public: CollectionElement copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------
