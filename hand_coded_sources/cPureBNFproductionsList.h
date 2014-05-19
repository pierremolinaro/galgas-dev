//-----------------------------------------------------------------------------*
//                                                                             *
//  Pure BNF production rules list                                           *
//                                                                             *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
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
#include "bdd/C_BDD_Set1.h"
#include "strings/C_String.h"
#include "utilities/TF_Swap.h"

//-----------------------------------------------------------------------------*

class cVocabulary ;
class C_TextFileWrite ;

//-----------------------------------------------------------------------------*

class cProduction {
  public : C_String mSourceFileName ;
  public : int32_t aLigneDefinition ;
  public : int32_t aColonneDefinition ;
  public : int32_t aNumeroNonTerminalGauche ;
  public : TC_UniqueArray <int16_t> aDerivation ;
  public : C_BDD_Set1 aPremierDeProduction ;
  public : uint32_t mProductionIndex ;

//--- Constructor
  public : cProduction (void) ;

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
