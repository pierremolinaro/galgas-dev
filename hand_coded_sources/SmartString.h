/*
 *  SmartString.h
 *  galgas
 *
 *  Created by Pierre Molinaro on 18/06/09.
 *  Copyright 2009 ECN / IRCCyN. All rights reserved.
 *
 */
//---------------------------------------------------------------------------*

#ifndef SMART_STRING_CLASS_DEFINED
#define SMART_STRING_CLASS_DEFINED

//---------------------------------------------------------------------------*

class cEmbeddedString ;

//---------------------------------------------------------------------------*

class SmartString {
//--- Constructors
  public : SmartString (void) ;
  public : SmartString (const char * inCString, const bool inPerformCopy) ;

//--- Destructor
  public : virtual ~SmartString (void) ;
  
//--- Handling copy
  public : SmartString & operator = (const SmartString & inSource) ;
  public : SmartString (const SmartString & inSource) ;
  
//--- Embedded string
  private : cEmbeddedString * mEmbeddedString ;

//--- Accessing string
  public : const char * cString (void) const ;
} ;

#endif

//---------------------------------------------------------------------------*
