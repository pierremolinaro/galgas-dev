//-----------------------------------------------------------------------------*
//                                                                             *
//  Pure BNF production rules list                                             *
//                                                                             *
//  Copyright (C) 1999-2014 Pierre Molinaro.                                   *
//                                                                             *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                      *
//                                                                             *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes  *
//  ECN, École Centrale de Nantes (France)                                     *
//                                                                             *
//  This program is free software; you can redistribute it and/or modify it    *
//  under the terms of the GNU General Public License as published by the      *
//  Free Software Foundation.                                                  *
//                                                                             *
//  This program is distributed in the hope it will be useful, but WITHOUT     *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or      *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   *
//  more details.                                                              *
//                                                                             *
//-----------------------------------------------------------------------------*

#ifndef PURE_BNF_PRODUCTIONS_LIST_CLASS_DEFINED
#define PURE_BNF_PRODUCTIONS_LIST_CLASS_DEFINED

//-----------------------------------------------------------------------------*

#include "collections/TC_FIFO.h"
#include "bdd/C_Relation.h"
#include "strings/C_String.h"
#include "utilities/TF_Swap.h"

//-----------------------------------------------------------------------------*

class cVocabulary ;
class C_TextFileWrite ;

//-----------------------------------------------------------------------------*

class cProduction {
  private : C_String mSourceFileName ;
  private : int32_t mLineDefinition ;
  private : int32_t mColumnDefinition ;
  private : int32_t mLeftNonTerminalIndex ;
  private : TC_UniqueArray <int16_t> mDerivation ;
  public : C_Relation mDerivationFirst ;
  private : uint32_t mProductionIndex ;

//--- Constructor
  public : cProduction (void) ;
  public : cProduction (const C_String & inSourceFileName,
                        const int32_t inDefinitionLine,
                        const int32_t inColumnDefinition,
                        const int32_t inLeftNonTerminalIndex,
                        TC_UniqueArray <int16_t> & ioDerivation, // Swap
                        const uint32_t inProductionIndex) ;
  public : cProduction (const C_String & inSourceFileName,
                        const int32_t inDefinitionLine,
                        const int32_t inColumnDefinition,
                        const int32_t inLeftNonTerminalIndex) ;

//--- Accessors
  public : inline C_String sourceFileName (void) const { return mSourceFileName ; }
  public : inline int32_t lineDefinition (void) const { return mLineDefinition ; }
  public : inline int32_t columnDefinition (void) const { return mColumnDefinition ; }
  public : inline int32_t leftNonTerminalIndex (void) const { return mLeftNonTerminalIndex ; }
  public : inline uint32_t productionIndex (void) const { return mProductionIndex ; }
  public : inline C_Relation derivationFirst (void) const {
    return mDerivationFirst ;
  }

  public : inline int32_t derivationLength (void) const { return mDerivation.count () ; }
  public : inline int16_t derivationAtIndex (const int32_t inIndex COMMA_LOCATION_ARGS) const { return mDerivation (inIndex COMMA_THERE) ; }

//--- Generate a C++ call instruction of this production
  public : void engendrerAppelProduction (const int16_t nombreDeParametres,
                                          const cVocabulary & inVocabulary,
                                          const C_String & inAltName,
                                          AC_OutputStream & fichierCPP) const ;

//--- No copy
  private : cProduction (const cProduction &) ;
  private : cProduction & operator = (const cProduction &) ;


  friend void swap (cProduction & ioProduction1, cProduction & ioProduction2) ;
} ;


//-----------------------------------------------------------------------------*

class cPureBNFproductionsList : public TC_FIFO <cProduction> {
  public : TC_UniqueArray <int32_t> tableauIndicePremiereProduction ;
  public : TC_UniqueArray <int32_t> tableauIndiceDerniereProduction ;
  public : TC_UniqueArray <int32_t> tableauIndirectionProduction ;

  public : TC_UniqueArray <int32_t> mFirstProductionIndex ;
  public : TC_UniqueArray <int32_t> mLastProductionIndex ;
  public : TC_UniqueArray <int32_t> mProductionIndex ;

  public : void buildProductionsArray (const int32_t inTerminalSymbolsCount,
                                       const int32_t inNonTerminalSymbolsCount) ;
  public : cPureBNFproductionsList (void) ;
} ;

//-----------------------------------------------------------------------------*

#endif
