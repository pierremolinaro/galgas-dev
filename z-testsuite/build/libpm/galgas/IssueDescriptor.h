//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2017, ..., 2025 Pierre Molinaro.
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
                           const int32_t inIndex,
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
  private: int32_t mStartLocation ;
  private: int32_t mLine ;
  private: int32_t mStartColumn ;
  private: int32_t mEndColumn ;
  private: String mMessage ;
} ;

//--------------------------------------------------------------------------------------------------
