//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 1996, ..., 2023 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "Compiler.h"

//--------------------------------------------------------------------------------------------------

class Lexique ;

//--------------------------------------------------------------------------------------------------
//  T E M P L A T E    D E L I M I T E R S     C L A S S
//--------------------------------------------------------------------------------------------------

class TemplateDelimiter final {
  public: const std::initializer_list <utf32> mStartString ;
  public: const int32_t mStartStringLength ;
  public: const std::initializer_list <utf32> mEndString ;
  public: const int32_t mEndStringLength ;
  public: void (* mReplacementFunction) (Lexique & inLexique, const String & inElementString, String & ioTemplateString) ;
  public: const bool mDiscardStartString ;

//--- Constructor
  public: TemplateDelimiter (const std::initializer_list <utf32> & inStartString,
                              const int32_t inStartStringLength,
                              const std::initializer_list <utf32> & inEndString,
                              const int32_t inEndStringLength,
                              void (* inReplacementFunction) (Lexique & inLexique, const String & inElementString, String & ioTemplateString),
                              const bool inDiscardStartString) ;

//--- Copy
  public: TemplateDelimiter (const TemplateDelimiter & inOperand) ;

//--- No assignment
  private: TemplateDelimiter & operator = (const TemplateDelimiter &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
