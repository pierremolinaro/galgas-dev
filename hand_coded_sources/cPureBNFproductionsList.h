//--------------------------------------------------------------------------------------------------
//
//  Pure BNF production rules list                                                               
//
//  Copyright (C) 1999, ..., 2023 Pierre Molinaro.
//                                           
//  MIT License
//                                           
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//                                           
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include "BinaryDecisionDiagramRelation.h"
#include "String-class.h"
#include "TF_Swap.h"

//--------------------------------------------------------------------------------------------------

class GrammarVocabulary ;

//--------------------------------------------------------------------------------------------------

class cProduction {
  private: String mSourceFileName ;
  private: int32_t mLineDefinition ;
  private: int32_t mColumnDefinition ;
  private: int32_t mLeftNonTerminalIndex ;
  private: TC_UniqueArray <int32_t> mDerivation ;
  public: BinaryDecisionDiagramRelation mDerivationFirst ;
  private: uint32_t mProductionIndex ;

//--- Constructor
  public: cProduction (void) ;
  public: cProduction (const String & inSourceFileName,
                        const int32_t inDefinitionLine,
                        const int32_t inColumnDefinition,
                        const int32_t inLeftNonTerminalIndex,
                        TC_UniqueArray <int32_t> & ioDerivation, // Swap
                        const uint32_t inProductionIndex) ;
  public: cProduction (const String & inSourceFileName,
                        const int32_t inDefinitionLine,
                        const int32_t inColumnDefinition,
                        const int32_t inLeftNonTerminalIndex) ;

//--- Accessors
  public: inline String sourceFileName (void) const { return mSourceFileName ; }
  public: inline int32_t lineDefinition (void) const { return mLineDefinition ; }
  public: inline int32_t columnDefinition (void) const { return mColumnDefinition ; }
  public: inline int32_t leftNonTerminalIndex (void) const { return mLeftNonTerminalIndex ; }
  public: inline uint32_t productionIndex (void) const { return mProductionIndex ; }
  public: inline BinaryDecisionDiagramRelation derivationFirst (void) const {
    return mDerivationFirst ;
  }

  public: inline int32_t derivationLength (void) const { return mDerivation.count () ; }
  public: inline int32_t derivationAtIndex (const int32_t inIndex COMMA_LOCATION_ARGS) const { return mDerivation (inIndex COMMA_THERE) ; }

//--- Generate a C++ call instruction of this production
  public: void engendrerAppelProduction (const int16_t nombreDeParametres,
                                          const GrammarVocabulary & inVocabulary,
                                          const String & inAltName,
                                          AbstractOutputStream & fichierCPP,
                                          const String & inSyntaxDirectedTranslationVarName) const ;

//--- No copy
  private: cProduction (const cProduction &) ;
  private: cProduction & operator = (const cProduction &) ;


  friend void swap (cProduction & ioProduction1, cProduction & ioProduction2) ;
} ;


//--------------------------------------------------------------------------------------------------

class cPureBNFproductionsList final {
  public: TC_UniqueArray <cProduction> mProductionArray ;
  public: TC_UniqueArray <int32_t> tableauIndicePremiereProduction ;
  public: TC_UniqueArray <int32_t> tableauIndiceDerniereProduction ;
  public: TC_UniqueArray <int32_t> tableauIndirectionProduction ;

  public: TC_UniqueArray <int32_t> mFirstProductionIndex ;
  public: TC_UniqueArray <int32_t> mLastProductionIndex ;
  public: TC_UniqueArray <int32_t> mProductionIndex ;

  public: void buildProductionsArray (const int32_t inTerminalSymbolsCount,
                                      const int32_t inNonTerminalSymbolsCount) ;

  public: cPureBNFproductionsList (void) ;
} ;

//--------------------------------------------------------------------------------------------------
