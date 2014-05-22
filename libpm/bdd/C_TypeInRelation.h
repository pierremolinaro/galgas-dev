//
//  C_TypeInRelation.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 22/05/14.
//  Copyright (c) 2014 IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#ifndef galgas_developer_C_TypeInRelation_h
#define galgas_developer_C_TypeInRelation_h

//-----------------------------------------------------------------------------*

#include "strings/C_String.h"

//-----------------------------------------------------------------------------*

class C_TypeInRelation {
//--- Internal class
  public : class cType ;

//--- Default constructor
  public : inline C_TypeInRelation (void) : mTypePtr (NULL) {}

//--- Constructor with an enumerated type
  public : C_TypeInRelation (const C_String & inTypeName,
                             const TC_UniqueArray <C_String> & inConstantNameArray
                             COMMA_LOCATION_ARGS) ;

//--- Constructor with an unsigned type
  public : C_TypeInRelation (const C_String & inTypeName,
                             const uint32_t inValueCount // [0, inValueCount - 1]
                             COMMA_LOCATION_ARGS) ;

//--- Accessors
  public : C_String typeName (void) const ;
  public : uint32_t BDDBitCount (void) const ;
  public : uint32_t valueCount (void) const ;
  public : C_String nameForValue (const uint32_t inIndex
                                  COMMA_LOCATION_ARGS) const ;

//--- Destructor
  public : virtual ~ C_TypeInRelation (void) ;

//--- Handling copy
  public : C_TypeInRelation (const C_TypeInRelation & inSource) ;
  public : C_TypeInRelation & operator = (const C_TypeInRelation & inSource) ;
  
//--- Attribute
  private : cType * mTypePtr ;
} ;

//-----------------------------------------------------------------------------*

#endif
