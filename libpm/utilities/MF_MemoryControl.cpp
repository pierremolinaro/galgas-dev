//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Implementation of routines for handling dynamic allocation checking.       *
//                                                                                                                     *
//  This file is part of libpm library                                         *
//                                                                                                                     *
//  Copyright (C) 1994, ..., 2010 Pierre Molinaro.                             *
//                                                                                                                     *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                                                                       *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes                                          *
//  ECN, École Centrale de Nantes (France)                                                                             *
//                                                                                                                     *
//  This library is free software; you can redistribute it and/or modify it                                            *
//  under the terms of the GNU Lesser General Public License as published                                              *
//  by the Free Software Foundation; either version 2 of the License, or                                               *
//  (at your option) any later version.                                                                                *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT                                             *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or                                              *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for                                           *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/M_machine.h"
#include "utilities/MF_MemoryControl.h"
#include "utilities/basic-allocation.h"

//---------------------------------------------------------------------------------------------------------------------*

#include <stdlib.h>
#include <stdio.h>

//---------------------------------------------------------------------------------------------------------------------*

macroDeclareMutex (gAllocationMutex)

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Enum for describing a pointer                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  typedef enum {
    kAllocatedByMacroMyNew,
    kAllocatedByMacroMyNewArray,
    kAllocatedByMacroMyNewPODArray,
    kUnknownAllocation
  } enumAllocation ;
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static uint32_t gAllocatedPODArrayCount = 0 ;
  static uint32_t gReallocatedPODArrayCount = 0 ;
  static uint32_t gPointerChangedOnPODArrayReallocationCount = 0 ;
  static int32_t gExistingPODArrayCount = 0 ;
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static void
  unregisterPointer (const void * PointeurAretirer,
                     const enumAllocation natureAllocation COMMA_LOCATION_ARGS) ;

  static void registerPointerDescriptor (const void * p,
                               const enumAllocation inAllocation
                               COMMA_LOCATION_ARGS) ;
  static void
  display_pointer (const void * adresse,
                   const int32_t numeroCreation, 
                   const enumAllocation natureObjet, 
                   const int32_t numeroLigneSource, 
                   const char * inSourceFileName) ;
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void * allocAndRegisterPODArray (const size_t inSize COMMA_LOCATION_ARGS) {
    void * ptr = myAllocRoutine (inSize) ;
    registerPointerDescriptor (ptr, kAllocatedByMacroMyNewPODArray COMMA_THERE) ;
    gAllocatedPODArrayCount ++ ;
    gExistingPODArrayCount ++ ;
    return ptr ;
  }
#endif


//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void * reallocAndRegisterPODArray (void * inPointer,
                                     const size_t inSize
                                     COMMA_LOCATION_ARGS) {
    if (inPointer != NULL) {
      macroValidPointerThere (inPointer) ;
      unregisterPointer (inPointer, kAllocatedByMacroMyNewPODArray COMMA_THERE) ;
    }
    void * ptr = realloc (inPointer, inSize) ;
    registerPointerDescriptor (ptr, kAllocatedByMacroMyNewPODArray COMMA_THERE) ;
    gReallocatedPODArrayCount ++ ;
    if (ptr != inPointer) {
      if (inPointer == NULL) {
        gAllocatedPODArrayCount ++ ;
        gExistingPODArrayCount ++ ;
      }else{
        gPointerChangedOnPODArrayReallocationCount ++ ;
      }
    }
    return ptr ;
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void routineFreePODArrayPointer (void * inPointer COMMA_LOCATION_ARGS) {
    if (inPointer != NULL) {
      gExistingPODArrayCount -- ;
      myFreeRoutine (inPointer) ;
      unregisterPointer (inPointer, kAllocatedByMacroMyNewPODArray COMMA_THERE) ;
      #ifdef TRACE_DELETE
        co << "macroMyDeleteStructC -> "
           << inPointer
           << " at line "
           << IN_SOURCE_LINE
           << " of file '"
           << IN_SOURCE_FILE
           << "')\n" ;
      #endif
    }
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Localisation de l'appel du deallocateur 'delete'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void routineFreePointer (const void * inPointer COMMA_LOCATION_ARGS) {
    if (inPointer != NULL) {
      unregisterPointer (inPointer, kAllocatedByMacroMyNew COMMA_THERE) ;
      #ifdef TRACE_DELETE
        co << "macroMyDelete -> "
           << inPointer
           << " at line "
           << IN_SOURCE_LINE
           << " of file '"
           << IN_SOURCE_FILE
           << "')\n" ;
      #endif
    }
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void routineFreeArrayPointer (const void * inPointer COMMA_LOCATION_ARGS) {
    if (inPointer != NULL) {
      unregisterPointer (inPointer, kAllocatedByMacroMyNewArray COMMA_THERE) ;
      #ifdef TRACE_DELETE
        co << "macroMyDeleteArray -> "
           << inPointer
           << " at line "
           << IN_SOURCE_LINE
           << " of file '"
           << IN_SOURCE_FILE
           << "')\n" ;
      #endif
    }
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark -
#endif

//-----------------------------------------------------------------*
//                                                                 *
//            Specification des types de donnees                   *
//               pour l'ioRoot binaire equilibre                    *
//                                                                 *
//-----------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  class cPointerDescriptor {
    public : const void * champPtr ;
 // pour construire une liste sequentielle des pointeurs
    public : cPointerDescriptor * champSuivantDeListeLineaire ;
    public : void enregistrerDansListeLineaire (cPointerDescriptor * & racine) ;
  //-- champs pour la table binaire equilibree permettant de retrouver le pointeur par son adresse
    public : cPointerDescriptor * mInfPtr ;
    public : cPointerDescriptor * mSupPtr ;
    public : const char * mSourceFileName ; // nom du fichier source dans lequel le pointeur a ete cree
    public : int32_t champNumeroCreation ; // numero d'ordre unique
    public : int champNumeroLigneSource ; // ligne source
    public : int16_t mBalance ;    
    public : enumAllocation champNatureObjet ; // indique si le pointeur designe un tableau (new ... [...])
    public : void affichageRecursif (void) const ;
   } ; 
#endif

//-----------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const int32_t TAILLE_TABLE_RACINES = 262145 ;
  static cPointerDescriptor * gPointerDescriptorTreeRoot [TAILLE_TABLE_RACINES] ;
  static int32_t gCreatedPointersCount = 0 ;
  static int32_t gPointersCurrentCount = 0 ;
  static bool gRootInited = false ;
#endif 

//-----------------------------------------------------------------*
//                                                                 *
//                Comparaison de deux clefs                        *
//                                                                 *
//-----------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
   enum enumResultatComparaison {ClefGaucheSup, ClefsEgales, ClefDroiteSup} ; 
#endif

//-----------------------------------------------------------------*
//                     Prototypes                                  *
//-----------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static enumResultatComparaison comparerPointeurs (const void * Pgauche,
                                                    const void * Pdroit) ;
  static void rotationGauche (cPointerDescriptor * & A) ;
  static void rotationDroite (cPointerDescriptor * & A) ;
  static void diminutionBrancheSup (cPointerDescriptor *&A, bool &h) ;
  static void infBranchDecreased (cPointerDescriptor *&A, bool &h) ;
  static void obtenirElementPrecedent (cPointerDescriptor *&arbreEquilibre,
         cPointerDescriptor *&E,
         bool &h) ;
  static void suppressionRecursiveDansArbreBinaireEquilibre (cPointerDescriptor *&arbreEquilibre,
         const void * PointeurAretirer,
         cPointerDescriptor *&PointeurElementSupprime,
         bool &h) ;
  static void executerInsertionRecursiveDansArbreEquilibre (
         cPointerDescriptor *&Arbre,
         const void * NouvelleClef,
         bool & existeDeja,
         cPointerDescriptor *&pointeurNouvelElement,
         bool & ioExtension) ;
#endif

//-----------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static enumResultatComparaison comparerPointeurs (const void * Pgauche,
                                                    const void * Pdroit) {
    if ((intptr_t) Pgauche > (intptr_t) Pdroit) {
      return ClefGaucheSup ;
    }else if ((intptr_t) Pgauche < (intptr_t) Pdroit) {
      return ClefDroiteSup ;
    }else{
      return ClefsEgales ;
    }
  }
#endif 

//-----------------------------------------------------------------*
//     Rotations elementaires de reequilibrage d'un ioRoot binaire  *
//-----------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static void rotationGauche (cPointerDescriptor * & a) {
  //--- faire la rotation 
    cPointerDescriptor * b = a->mSupPtr;
    a->mSupPtr = b->mInfPtr;
    b->mInfPtr = a;
  //--- recalculer l'equilibrage 
    if (b->mBalance >= 0) {
      a->mBalance ++ ;
    }else{
      a->mBalance = (int16_t) (a->mBalance + 1 - b->mBalance) ;
    }
    if (a->mBalance > 0) {
      b->mBalance = (int16_t) (b->mBalance + a->mBalance + 1) ;
    }else{
      b->mBalance ++ ;
    }
    a = b ;
  } 
#endif

//-----------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static void rotationDroite (cPointerDescriptor * & a) {
  //-- faire la rotation 
    cPointerDescriptor * b = a->mInfPtr;
    a->mInfPtr = b->mSupPtr;
    b->mSupPtr = a;
   //--- recalculer l'equilibrage 
    if (b->mBalance > 0) {
      a->mBalance = (int16_t) (a->mBalance - b->mBalance - 1) ;
    }else{
      a->mBalance -- ;
    }
    if (a->mBalance >= 0) {
      b->mBalance -- ;
    }else{
      b->mBalance = (int16_t) (b->mBalance + a->mBalance - 1) ;
    }
    a = b ;
  }
#endif
 
//-----------------------------------------------------------------*
//    Suppression d'un element dans un ioRoot binaire equilibre     *
//-----------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static void diminutionBrancheSup (cPointerDescriptor * & a, bool & h) {
    a->mBalance ++ ;
    switch (a->mBalance) {
    case 0:
      break;
    case 1:
      h = false;
      break;
    case 2:
      switch (a->mInfPtr->mBalance) {
      case -1:
        rotationGauche (a->mInfPtr) ;
        rotationDroite (a) ;
        break;
      case 0:
        rotationDroite (a) ;
        h = false;
        break;
      case 1:
        rotationDroite (a) ;
        break;
      }
      break;
    }
  }
#endif
 
//-----------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static void infBranchDecreased (cPointerDescriptor * & a, bool & h) {
    a->mBalance -- ;
    switch (a->mBalance) {
    case 0:
      break;
    case -1:
      h = false;
      break;
    case -2:
      switch (a->mSupPtr->mBalance) {
      case 1:
        rotationDroite (a->mSupPtr) ;
        rotationGauche (a) ;
        break;
      case 0:
        rotationGauche (a) ;
        h = false;
        break;
      case -1:
        rotationGauche (a) ;
        break;
      }
      break;
    }
  }
#endif

//-----------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static void obtenirElementPrecedent (cPointerDescriptor * & arbreEquilibre,
                                       cPointerDescriptor * & e,
                                       bool & h) {
    if (arbreEquilibre->mSupPtr == NULL) {
      e = arbreEquilibre;
      arbreEquilibre = arbreEquilibre->mInfPtr ;
      h = true;
    }else{
      obtenirElementPrecedent (arbreEquilibre->mSupPtr, e, h) ;
      if (h) {
        diminutionBrancheSup (arbreEquilibre, h);
      }
    }
  }
#endif

//-----------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static void suppressionRecursiveDansArbreBinaireEquilibre
                          (cPointerDescriptor * & arbreEquilibre,
                           const void * pointeurAretirer,
                           cPointerDescriptor * & pointeurElementSupprime,
                           bool & h) {
    if (arbreEquilibre == NULL) {
      pointeurElementSupprime = NULL;
    }else{
      switch (comparerPointeurs(pointeurAretirer, arbreEquilibre->champPtr)) {
      case ClefGaucheSup:
        suppressionRecursiveDansArbreBinaireEquilibre (arbreEquilibre->mSupPtr,
                                                       pointeurAretirer, pointeurElementSupprime, h);
        if (h) {
          diminutionBrancheSup (arbreEquilibre, h) ;
        }
        break;
      case ClefDroiteSup:
        suppressionRecursiveDansArbreBinaireEquilibre (arbreEquilibre->mInfPtr,
                                                       pointeurAretirer, pointeurElementSupprime, h);
        if (h) {
          infBranchDecreased (arbreEquilibre, h);
        }
        break;
      case ClefsEgales:
        pointeurElementSupprime = arbreEquilibre;
        if (pointeurElementSupprime->mInfPtr == NULL) {
          arbreEquilibre = pointeurElementSupprime->mSupPtr;
          pointeurElementSupprime->mSupPtr = NULL;
          h = true;
        }else if (pointeurElementSupprime->mSupPtr == NULL) {
          arbreEquilibre = pointeurElementSupprime->mInfPtr;
          pointeurElementSupprime->mInfPtr = NULL;
          h = true;
        }else{
          obtenirElementPrecedent (pointeurElementSupprime->mInfPtr,
                                   arbreEquilibre, h);
          arbreEquilibre->mSupPtr = pointeurElementSupprime->mSupPtr;
          pointeurElementSupprime->mSupPtr = NULL;
          arbreEquilibre->mInfPtr = pointeurElementSupprime->mInfPtr;
          pointeurElementSupprime->mInfPtr = NULL;
          arbreEquilibre->mBalance = pointeurElementSupprime->mBalance;
          pointeurElementSupprime->mBalance = 0;
          if (h) {
            infBranchDecreased (arbreEquilibre, h);
          }
        }
        break;
      }
    }
  }
#endif

//-----------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static void executerInsertionRecursiveDansArbreEquilibre (
                            cPointerDescriptor *& ioRoot,
                            const void * nouvelleClef,
                            bool & existeDeja,
                            cPointerDescriptor * & pointeurNouvelElement,
                            bool & ioExtension) {
    if (ioRoot == NULL) {
      pointeurNouvelElement = (cPointerDescriptor *) myAllocRoutine (sizeof (cPointerDescriptor)) ;
      if (pointeurNouvelElement != NULL) {
        pointeurNouvelElement->mInfPtr = NULL;
        pointeurNouvelElement->mSupPtr = NULL;
        pointeurNouvelElement->mBalance = 0;
        pointeurNouvelElement->champPtr = nouvelleClef;
        pointeurNouvelElement->champNumeroCreation = gCreatedPointersCount;
        pointeurNouvelElement->mSourceFileName = (char *) NULL ;
        pointeurNouvelElement->champNumeroLigneSource = -1 ;
        ioRoot = pointeurNouvelElement;
        existeDeja = false;
        ioExtension = true;
      }
    }else{
      const enumResultatComparaison ResultatComparaison = comparerPointeurs(nouvelleClef, ioRoot->champPtr);
      switch (ResultatComparaison) {
      case ClefGaucheSup:
        executerInsertionRecursiveDansArbreEquilibre (ioRoot->mSupPtr, nouvelleClef,
                                                      existeDeja, pointeurNouvelElement, ioExtension);
        if (ioExtension) {
          ioRoot->mBalance -- ;
          switch (ioRoot->mBalance) {
          case 0:
            ioExtension = false;
            break;
          case -1:
            break;
          case -2:
            if (ioRoot->mSupPtr->mBalance == 1) {
              rotationDroite (ioRoot->mSupPtr) ;
            }
            rotationGauche (ioRoot) ;
            ioExtension = false;
            break;
          }
        }
        break;
      case ClefsEgales:
        pointeurNouvelElement = ioRoot;
        existeDeja = true;
        ioExtension = false;
        break;
      case ClefDroiteSup:
        executerInsertionRecursiveDansArbreEquilibre (ioRoot->mInfPtr, nouvelleClef,
                                                      existeDeja, pointeurNouvelElement, ioExtension);
        if (ioExtension) {
          ioRoot->mBalance++;
          switch (ioRoot->mBalance) {
          case 0:
            ioExtension = false;
            break;
          case 1:
            break;
          case 2:
            if (ioRoot->mInfPtr->mBalance == -1) {
              rotationGauche (ioRoot->mInfPtr) ;
            }
            rotationDroite (ioRoot) ;
            ioExtension = false;
            break;
          }
        }
        break;
      }
    }
  } //fin executerInsertionRecursiveDansArbreEquilibre 
#endif
 
//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static uint32_t HashCode (const void * Ptr) {
    const uintptr_t v = (uintptr_t) Ptr ;
    return (uint32_t) ((v % TAILLE_TABLE_RACINES) & UINT32_MAX) ;
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static void registerPointerDescriptor (const void * inPointer,
                                         const enumAllocation inAllocation
                                         COMMA_LOCATION_ARGS) {
    // printf ("*** registering pointer %p\n", p) ;
    if (NULL != inPointer) {
      if (! gRootInited) {
        for (int32_t i=0 ; i<TAILLE_TABLE_RACINES ; i ++) {
          gPointerDescriptorTreeRoot [i] = NULL ;
        }
        gRootInited = true ;
      }
      bool existeDeja = false ;
      bool ioExtension = false ;
      cPointerDescriptor * pointeurNouvelElement = NULL ;
      gPointersCurrentCount ++ ;
      gCreatedPointersCount ++ ;
  //    MF_Assert (gCreatedPointersCount != 69068, "gCreatedPointersCount == %lld", gCreatedPointersCount, 0) ;
      executerInsertionRecursiveDansArbreEquilibre (gPointerDescriptorTreeRoot [HashCode(inPointer)], inPointer, existeDeja, pointeurNouvelElement, ioExtension);
      if (existeDeja) {
        runtime_error_routine ("(detectee par " __FILE__ ") Le pointeur existe deja", 0, 0, IN_SOURCE_FILE, IN_SOURCE_LINE) ;
      }
      if (NULL != pointeurNouvelElement) {
        pointeurNouvelElement->mSourceFileName = IN_SOURCE_FILE ;
        pointeurNouvelElement->champNumeroLigneSource = IN_SOURCE_LINE ;
        pointeurNouvelElement->champNatureObjet = inAllocation ;
      }
    }
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void registerPointer (const void * p COMMA_LOCATION_ARGS) {
    registerPointerDescriptor (p, kAllocatedByMacroMyNew COMMA_THERE) ;
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void registerArray (const void * p COMMA_LOCATION_ARGS) {
    registerPointerDescriptor (p, kAllocatedByMacroMyNewArray COMMA_THERE) ;
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static cPointerDescriptor * searchPointerDescriptor (const void * inPointer) {
    cPointerDescriptor * p = NULL ;
    if (inPointer != NULL) {
      p = gPointerDescriptorTreeRoot[HashCode(inPointer)];
      bool PasTrouve = true;
      while (PasTrouve && p != NULL) {
        switch (comparerPointeurs (p->champPtr, inPointer)) {
        case ClefGaucheSup: 
          p = p->mInfPtr;
          break ;
        case ClefsEgales: 
          PasTrouve = false;
          break ;
        case ClefDroiteSup: 
          p = p->mSupPtr;
          break ;
        } //switch
      } //while
    }
    return p ;
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void unregisterPointer (const void * inPointer,
                          const enumAllocation natureAllocation COMMA_LOCATION_ARGS) {
    bool h = false ;
    cPointerDescriptor * pointerToDelete = NULL ;
    suppressionRecursiveDansArbreBinaireEquilibre (gPointerDescriptorTreeRoot [HashCode (inPointer)],
                                                   inPointer, pointerToDelete, h);
    if (pointerToDelete == NULL) {
      runtime_error_routine ("(" __FILE__ ") Pointer (0x%X) is unknown", (intptr_t) inPointer, 0 COMMA_THERE) ;
    }
    if (NULL != pointerToDelete) {
      const int32_t numeroLigneSource = pointerToDelete->champNumeroLigneSource ;
      const char * nomFichierSource = pointerToDelete->mSourceFileName ;
      // printf ("------- %p %d\n", pointerToDelete, pointerToDelete->champNatureObjet) ;
      switch (natureAllocation) {
      case kAllocatedByMacroMyNew :
        if (pointerToDelete->champNatureObjet != kAllocatedByMacroMyNew) {
          runtime_error_routine ("(" __FILE__ ") Appel de 'macroMyDelete' sur un pointeur declare dans '%s' ligne %d qui n'a pas ete alloue par 'macroMyNew'", 
                                 (intptr_t) nomFichierSource, numeroLigneSource, IN_SOURCE_FILE, IN_SOURCE_LINE) ; 
        }
        break ;
      case kAllocatedByMacroMyNewArray :
        if (pointerToDelete->champNatureObjet != kAllocatedByMacroMyNewArray) {
          runtime_error_routine ("(" __FILE__ ") Appel de 'macroMyDeleteArray' sur un pointeur declare dans '%s' ligne %d qui n'a pas ete alloue par 'macroMyNewArray'", 
                                 (intptr_t) nomFichierSource, numeroLigneSource, IN_SOURCE_FILE, IN_SOURCE_LINE) ;
        }
        break ;
      case kAllocatedByMacroMyNewPODArray :
        if (pointerToDelete->champNatureObjet != kAllocatedByMacroMyNewPODArray) {
          runtime_error_routine ("(" __FILE__ ") Appel de 'macroMyDeletePODArray' sur un pointeur declare dans '%s' ligne %d qui n'a pas ete alloue par 'macroMyNewPODArray'", 
                                 (intptr_t) nomFichierSource, numeroLigneSource, IN_SOURCE_FILE, IN_SOURCE_LINE) ;
        }
        break ;
      default : // Alloue hors macro
        break ;
      }
      myFreeRoutine (pointerToDelete) ;
      gPointersCurrentCount -- ;
    }
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Routine garantissant la nullite d'un pointeur                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void routineVoidPointer (const void * inPointer COMMA_LOCATION_ARGS) {
    if (inPointer != NULL) {
      runtime_error_routine ("pointer (%p) not NULL", (intptr_t) inPointer, 0 COMMA_THERE) ;
    }
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Routine garantissant la validite d'un pointeur                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void routineValidPointer (const void * inPointer COMMA_LOCATION_ARGS) {
    if (inPointer == NULL) {
      runtime_error_routine ("(detected by " __FILE__ ") NULL pointer", 0, 0 COMMA_THERE) ;
    }
    cPointerDescriptor * p = searchPointerDescriptor (inPointer) ;
    if (p == NULL) {
      runtime_error_routine ("(detected by " __FILE__ ") unknown (%p) pointer", (intptr_t) inPointer, 0 COMMA_THERE) ;
    }
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPointerDescriptor::affichageRecursif (void) const {
  //--- Branche inf
    if (mInfPtr != NULL) {
      mInfPtr->affichageRecursif () ;
    }
  //--- Affichage
    display_pointer (champPtr, champNumeroCreation, champNatureObjet,
                     champNumeroLigneSource, mSourceFileName) ;
  //--- Branche sup
    if (mSupPtr != NULL) {
      mSupPtr->affichageRecursif () ;
    }
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPointerDescriptor::
  enregistrerDansListeLineaire (cPointerDescriptor * & racine) {
  //--- Branche inf
    if (mInfPtr != NULL) {
      mInfPtr->enregistrerDansListeLineaire (racine) ;
    }
  //--- Insertion
    champSuivantDeListeLineaire = racine ;
    racine = this ;
  //--- Branche sup
    if (mSupPtr != NULL) {
      mSupPtr->enregistrerDansListeLineaire (racine) ;
    }
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*
 
#ifndef DO_NOT_GENERATE_CHECKINGS 
  static void
  display_pointer (const void * adresse,
                   const int32_t numeroCreation, 
                   const enumAllocation natureObjet, 
                   const int32_t numeroLigneSource, 
                   const char * inSourceFileName) {
    printf ("%10p | %10u |", adresse, numeroCreation) ;
    switch (natureObjet) {
    case kAllocatedByMacroMyNew :
      printf ("    class") ;
      break ;
    case kAllocatedByMacroMyNewArray :
      printf ("       []") ;
      break ;
    case kAllocatedByMacroMyNewPODArray :
      printf ("POD array") ;
      break ;
    default :
      break ;
    }
    printf (" | %11u | %s\n", numeroLigneSource, inSourceFileName) ;
  }
#endif

//---------------------------------------------------------------------------------------------------------------------*

void displayAllocatedBlocksInfo (void) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    printf ("%u POD arraies have been used, %u have been reallocated (%u with pointer change).\n",
            gAllocatedPODArrayCount, gReallocatedPODArrayCount, gPointerChangedOnPODArrayReallocationCount) ;
    if (gExistingPODArrayCount != 0) {
      printf ("*** Warning: %u POD arraies are still allocated (instead of 0).\n", gExistingPODArrayCount) ;
    }
    if (gPointersCurrentCount != 0) {
      printf ("*** Warning: %d block information datas (instead of 0):\n", gPointersCurrentCount) ;
      printf ("  address  |   number   |     kind | source line | source file\n") ;  
    }
    for (int32_t i=0 ; i<TAILLE_TABLE_RACINES ; i++) {
      if (gPointerDescriptorTreeRoot [i] != NULL) {
        gPointerDescriptorTreeRoot [i]->affichageRecursif () ;
      }
    }
  #endif
}

//---------------------------------------------------------------------------------------------------------------------*


