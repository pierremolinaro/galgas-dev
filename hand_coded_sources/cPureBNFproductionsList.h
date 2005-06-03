//---------------------------------------------------------------------------*
//                                                                           *
//  Pure BNF production rules list                                           *                                                               *
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#ifndef PURE_BNF_PRODUCTIONS_LIST_CLASS_DEFINED
#define PURE_BNF_PRODUCTIONS_LIST_CLASS_DEFINED

//---------------------------------------------------------------------------*

#include "linked_lists/TC_fifo.h"
#include "bdd/C_bdd_set1.h"
#include "utilities/C_string.h"
#include "utilities/swap.h"

//---------------------------------------------------------------------------*

class cVocabulary ;
class C_text_file_write ;

//---------------------------------------------------------------------------*

class cProduction {
  public : C_string mSourceFileName ;
  public : sint32 aLigneDefinition ;
  public : sint32 aColonneDefinition ;
  public : sint32 aNumeroNonTerminalGauche ;
  public : TCUniqueArray <sint16> aDerivation ;
  public : C_bdd_set1 aPremierDeProduction ;

//--- Constructor
  public : cProduction (void) ;

//--- Generate a C++ call instruction of this production
  public : void engendrerAppelProduction (const sint16 nombreDeParametres,
                                          const cVocabulary & inVocabulary,
                                          const C_string & inAltName,
                                          AC_output_stream & fichierCPP) const ;

//--- No copy
  private : cProduction (const cProduction &) ;
  private : void operator = (const cProduction &) ;

  friend void swap (cProduction & ioProduction1, cProduction & ioProduction2) ;
} ;


//---------------------------------------------------------------------------*

class cPureBNFproductionsList : public TC_fifo <cProduction> {
   public : TCUniqueArray <sint32> tableauIndicePremiereProduction ;
   public : TCUniqueArray <sint32> tableauIndiceDerniereProduction ;
   public : TCUniqueArray <sint32> tableauIndirectionProduction ;

   public : TCUniqueArray <sint32> mFirstProductionIndex ;
   public : TCUniqueArray <sint32> mLastProductionIndex ;
   public : TCUniqueArray <sint32> mProductionIndex ;

   public : void buildProductionsArray (const sint32 inTerminalSymbolsCount,
                                        const sint32 inNonTerminalSymbolsCount) ;
} ;

//---------------------------------------------------------------------------*

#endif
