//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2010, ..., 2024 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "M_SourceLocation.h"

//--------------------------------------------------------------------------------------------------

#include <set>
#include <algorithm>
#include <map>

//--------------------------------------------------------------------------------------------------

class GGS_string ;
class String ;
class GALGAS_TypeDescriptor ;

//--------------------------------------------------------------------------------------------------
//   SOURCE FILE                                                                                 
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE(file,line) file, line
  #define COMMA_SOURCE_FILE(file,line) , SOURCE_FILE(file,line)
#else
  #define SOURCE_FILE(file,line)
  #define COMMA_SOURCE_FILE(file,line)
#endif

//--------------------------------------------------------------------------------------------------
//   VIRTUAL_IN_DEBUG
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define VIRTUAL_IN_DEBUG virtual
#else
  #define VIRTUAL_IN_DEBUG
#endif

//--------------------------------------------------------------------------------------------------
//   AC_GALGAS_root                                                                              
//--------------------------------------------------------------------------------------------------

class AC_GALGAS_root {
//--- Default constructor
  public: inline AC_GALGAS_root (void) {}

//--- Destructor
  public: inline virtual ~ AC_GALGAS_root (void) {}
  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const = 0 ;
  
  public: virtual void drop (void) = 0 ;

  public: virtual const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const = 0 ;

  public: VIRTUAL_IN_DEBUG void log (const char * inMessage COMMA_LOCATION_ARGS) const ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const = 0 ;

//--- Readers implemented in this class
  public: VIRTUAL_IN_DEBUG GGS_string getter_description (LOCATION_ARGS) const ;

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void checkIsValid (LOCATION_ARGS) const ;
    public: virtual void printNonNullClassInstanceProperties (const char * inPropertyName) const ;
  #endif
} ;

//--------------------------------------------------------------------------------------------------

enum class OptionalState {
  invalid, isNil, valuated
} ;

//--------------------------------------------------------------------------------------------------
