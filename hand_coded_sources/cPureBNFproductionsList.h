//---------------------------------------------------------------------------*
//                                                                           *
//  Pure BNF production rules list                                           *                                                               *
//                                                                           *
//  Copyright (C) 1999-2002 Pierre Molinaro.                                 *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
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

#include "linked_lists/TC_FIFO.h"
#include "bdd/C_BDD_Set1.h"
#include "utilities/C_String.h"
#include "utilities/TF_Swap.h"

//---------------------------------------------------------------------------*

class cVocabulary ;
class C_TextFileWrite ;

//---------------------------------------------------------------------------*

class cProduction {
  public : C_String mSourceFileName ;
  public : sint32 aLigneDefinition ;
  public : sint32 aColonneDefinition ;
  public : sint32 aNumeroNonTerminalGauche ;
  public : TC_UniqueArray <sint16> aDerivation ;
  public : C_BDD_Set1 aPremierDeProduction ;

//--- Constructor
  public : cProduction (void) ;

//--- Generate a C++ call instruction of this production
  public : void engendrerAppelProduction (const sint16 nombreDeParametres,
                                          const cVocabulary & inVocabulary,
                                          const C_String & inAltName,
                                          const bool inReturnsEntityInstance,
                                          AC_OutputStream & fichierCPP) const ;

//--- No copy
  private : cProduction (const cProduction &) ;
  private : void operator = (const cProduction &) ;

  friend void swap (cProduction & ioProduction1, cProduction & ioProduction2) ;
} ;


//---------------------------------------------------------------------------*

class cPureBNFproductionsList : public TC_FIFO <cProduction> {
   public : TC_UniqueArray <sint32> tableauIndicePremiereProduction ;
   public : TC_UniqueArray <sint32> tableauIndiceDerniereProduction ;
   public : TC_UniqueArray <sint32> tableauIndirectionProduction ;

   public : TC_UniqueArray <sint32> mFirstProductionIndex ;
   public : TC_UniqueArray <sint32> mLastProductionIndex ;
   public : TC_UniqueArray <sint32> mProductionIndex ;

   public : void buildProductionsArray (const sint32 inTerminalSymbolsCount,
                                        const sint32 inNonTerminalSymbolsCount) ;
} ;

//---------------------------------------------------------------------------*

#endif
