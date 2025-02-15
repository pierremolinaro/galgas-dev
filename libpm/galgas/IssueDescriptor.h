//--------------------------------------------------------------------------------------------------
//
//  'IssueDescriptor'                                                                           
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2017, ..., 2025 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "String-class.h"

//--------------------------------------------------------------------------------------------------
//         IssueDescriptor
//--------------------------------------------------------------------------------------------------

class IssueDescriptor final {
//--- Default constructor
  public: IssueDescriptor (void) ;

//--- Constructor
  public: IssueDescriptor (const bool inIsError,
                           const String & inFile,
                           const int32_t inLine,
                           const int32_t inStartColumn,
                           const int32_t inEndColumn,
                           const String & inMessage) ;

//--- Append issue to JSON string
  public: void appendToJSONstring (String & ioJSONstring, const bool inIsFirstIssue) const ;

//--- Get JSON description string (for Swift App IDE)
  public: String jsonDescriptionString (const String & inMessage,
                                        const class IssueWithFixIt & inFixit) const ;

//--- Properties
  private: bool mIsError ; // false: warning
  private: String mFile ;
  private: int32_t mLine ;
  private: int32_t mStartColumn ;
  private: int32_t mEndColumn ;
  private: String mMessage ;
} ;

//--------------------------------------------------------------------------------------------------
