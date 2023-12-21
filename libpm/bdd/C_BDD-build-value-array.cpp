//--------------------------------------------------------------------------------------------------
//
//     BDD package (implementation of ROBDD)
//
//  This file is part of libpm library
//
//  Copyright (C) 1999, ..., 2023 Pierre Molinaro.
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

#include "bdd/C_BDD.h"
#include "bdd/C_BDD-node.h"

//--------------------------------------------------------------------------------------------------

static void
parcoursBDDinterneParValeur (const uint32_t inValue,
                             C_bdd_value_traversing & inTraversing,
                             bool tableauDesValeurs [],
                             uint32_t variableCourante,
                             const uint32_t inVariableCount) {
  if (variableCourante != 0) {
    variableCourante -- ;
    if (inValue == 1) {
      tableauDesValeurs [variableCourante] = false ;
      parcoursBDDinterneParValeur (inValue, inTraversing, tableauDesValeurs, variableCourante, inVariableCount) ;
      tableauDesValeurs [variableCourante] = true ;
      parcoursBDDinterneParValeur (inValue, inTraversing, tableauDesValeurs, variableCourante, inVariableCount) ;
    }else if (inValue != 0) {
      const uint32_t nodeIndex = nodeIndexForRoot (inValue COMMA_HERE) ;
      const uint32_t variable = gNodeArray [nodeIndex].mVariableIndex ;
      if (variable == variableCourante) {
        const uint32_t complement = inValue & 1 ;
        tableauDesValeurs [variableCourante] = false ;
        parcoursBDDinterneParValeur (gNodeArray [nodeIndex].mELSE ^ complement, inTraversing, tableauDesValeurs, variableCourante, inVariableCount) ;
        tableauDesValeurs [variableCourante] = true ;
        parcoursBDDinterneParValeur (gNodeArray [nodeIndex].mTHEN ^ complement, inTraversing, tableauDesValeurs, variableCourante, inVariableCount) ;
      }else if (variable < variableCourante) {
        tableauDesValeurs [variableCourante] = false ;
        parcoursBDDinterneParValeur (inValue, inTraversing, tableauDesValeurs, variableCourante, inVariableCount) ;
        tableauDesValeurs [variableCourante] = true ;
        parcoursBDDinterneParValeur (inValue, inTraversing, tableauDesValeurs, variableCourante, inVariableCount) ;
      }
    }
  }else if (inValue == 1) {
    inTraversing.action (tableauDesValeurs, inVariableCount) ;
  }
}

//--------------------------------------------------------------------------------------------------

void C_BDD::traverseBDDvalues (C_bdd_value_traversing & inTraversing,
                               const uint32_t inVariableCount) const {
  bool * tableauDesValeurs = nullptr ;
  macroMyNewArray (tableauDesValeurs, bool, inVariableCount) ;
  parcoursBDDinterneParValeur (mBDDvalue, inTraversing, tableauDesValeurs, inVariableCount, inVariableCount) ;
  macroMyDeleteArray (tableauDesValeurs) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Build an array of uint64_t values
#endif

//--------------------------------------------------------------------------------------------------

class C_build_values64_array : public C_bdd_value_traversing {
  private: TC_UniqueArray <uint64_t> * mPtr ;

  public: inline C_build_values64_array (TC_UniqueArray <uint64_t> * inPtr) :
  mPtr (inPtr) {
  }

//--- No copy
  private: C_build_values64_array (const C_build_values64_array &) ;
  private: C_build_values64_array & operator = (const C_build_values64_array &) ;

//--- Virtual method called for every value
  public: virtual void action (const bool tableauDesValeurs [],
                                const uint32_t inVariableCount) ;
} ;

//--------------------------------------------------------------------------------------------------

void C_build_values64_array::action (const bool tableauDesValeurs [],
                                   const uint32_t inVariableCount) {
  uint64_t value = 0 ;
  for (uint32_t i=1 ; i<=inVariableCount ; i++) {
    value = (value << 1) | tableauDesValeurs [inVariableCount - i] ;
  }
  mPtr->appendObject (value) ;
}

//--------------------------------------------------------------------------------------------------

void C_BDD::buildValue64Array (TC_UniqueArray <uint64_t> & outValuesArray,
                               const uint32_t inVariableCount) const {
  macroAssert(inVariableCount < 64, "inVariableCount == %ld >= 64", (int64_t) inVariableCount, 0) ;
  outValuesArray.removeAllKeepingCapacity () ;
  C_build_values64_array builder (& outValuesArray) ;
  bool * tableauDesValeurs = nullptr ;
  macroMyNewArray (tableauDesValeurs, bool, inVariableCount) ;
  parcoursBDDinterneParValeur (mBDDvalue, builder, tableauDesValeurs, inVariableCount, inVariableCount) ;
  macroMyDeleteArray (tableauDesValeurs) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Build an array of bool array values
#endif

//--------------------------------------------------------------------------------------------------

class C_build_values_array : public C_bdd_value_traversing {
  private: TC_UniqueArray <TC_Array <bool> > * mPtr ;

  public: inline C_build_values_array (TC_UniqueArray <TC_Array <bool> > * inPtr) :
  mPtr (inPtr) {
  }

//--- No copy
  private: C_build_values_array (const C_build_values_array &) ;
  private: C_build_values_array & operator = (const C_build_values_array &) ;

//--- Virtual method called for every value
  public: virtual void action (const bool tableauDesValeurs [],
                                const uint32_t inVariableCount) ;
} ;

//--------------------------------------------------------------------------------------------------

void C_build_values_array::action (const bool tableauDesValeurs [],
                                   const uint32_t inVariableCount) {
  TC_Array <bool> value ;
  for (uint32_t i=0 ; i<inVariableCount ; i++) {
    value.appendObject (tableauDesValeurs [i]) ;
  }
  mPtr->appendObject (value) ;
}

//--------------------------------------------------------------------------------------------------

void C_BDD::buildValueArray (TC_UniqueArray <TC_Array <bool> > & outValuesArray,
                             const uint32_t inVariableCount) const {
  outValuesArray.removeAllKeepingCapacity () ;
  C_build_values_array builder (& outValuesArray) ;
  bool * tableauDesValeurs = nullptr ;
  macroMyNewArray (tableauDesValeurs, bool, inVariableCount) ;
  parcoursBDDinterneParValeur (mBDDvalue, builder, tableauDesValeurs, inVariableCount, inVariableCount) ;
  macroMyDeleteArray (tableauDesValeurs) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Build an array of string values
#endif

//--------------------------------------------------------------------------------------------------

class cLittleEndianStringValueBuilder : public C_bdd_value_traversing {
  private: TC_UniqueArray <String> * mPtr ;

  public: cLittleEndianStringValueBuilder (TC_UniqueArray <String> * inPtr) :
  mPtr (inPtr) {
  }

//--- No copy
  private: cLittleEndianStringValueBuilder (const cLittleEndianStringValueBuilder &) ;
  private: cLittleEndianStringValueBuilder & operator = (const cLittleEndianStringValueBuilder &) ;

//--- Virtual method called for every value
  public: virtual void action (const bool tableauDesValeurs [],
                                const uint32_t inVariableCount) ;
} ;

//--------------------------------------------------------------------------------------------------

void cLittleEndianStringValueBuilder::
action (const bool tableauDesValeurs [],
        const uint32_t inVariableCount) {
  String value ;
  for (uint32_t i=0 ; i<inVariableCount ; i++) {
    value.addChar ((char) ('0' + tableauDesValeurs [i])) ;
  }
  mPtr->appendObject (value) ;
}

//--------------------------------------------------------------------------------------------------

void C_BDD::
buildLittleEndianStringValueArray (TC_UniqueArray <String> & outValuesArray,
                                   const uint32_t inVariableCount) const {
  outValuesArray.removeAllKeepingCapacity () ;
  cLittleEndianStringValueBuilder builder (& outValuesArray) ;
  bool * tableauDesValeurs = nullptr ;
  macroMyNewArray (tableauDesValeurs, bool, inVariableCount) ;
  parcoursBDDinterneParValeur (mBDDvalue, builder, tableauDesValeurs, inVariableCount, inVariableCount) ;
  macroMyDeleteArray (tableauDesValeurs) ;
}

//--------------------------------------------------------------------------------------------------

class cBuildBigEndianStringValueArray : public C_bdd_value_traversing {
  private: TC_UniqueArray <String> * mPtr ;

  public: cBuildBigEndianStringValueArray (TC_UniqueArray <String> * inPtr) :
  mPtr (inPtr) {
  }

//--- No copy
  private: cBuildBigEndianStringValueArray (const cBuildBigEndianStringValueArray &) ;
  private: cBuildBigEndianStringValueArray & operator = (const cBuildBigEndianStringValueArray &) ;

//--- Virtual method called for every value
  public: virtual void action (const bool tableauDesValeurs [],
                                const uint32_t inVariableCount) ;
} ;

//--------------------------------------------------------------------------------------------------

void cBuildBigEndianStringValueArray::
action (const bool tableauDesValeurs [],
        const uint32_t inVariableCount) {
  String value ;
  for (uint32_t i=inVariableCount ; i>0 ; i--) {
    value.addChar ((char) ('0' + tableauDesValeurs [i-1])) ;
  }
  mPtr->appendObject (value) ;
}

//--------------------------------------------------------------------------------------------------

void C_BDD::
buildBigEndianStringValueArray (TC_UniqueArray <String> & outValuesArray,
                                const uint32_t inVariableCount) const {
  outValuesArray.removeAllKeepingCapacity () ;
  cBuildBigEndianStringValueArray builder (& outValuesArray) ;
  bool * tableauDesValeurs = nullptr ;
  macroMyNewArray (tableauDesValeurs, bool, inVariableCount) ;
  parcoursBDDinterneParValeur (mBDDvalue, builder, tableauDesValeurs, inVariableCount, inVariableCount) ;
  macroMyDeleteArray (tableauDesValeurs) ;
}

//--------------------------------------------------------------------------------------------------

class cBuildQueryString : public C_bdd_value_traversing {
  private: String * mStringPtr ;

  public: cBuildQueryString (String * inStringPtr) :
  mStringPtr (inStringPtr) {
  }

//--- No copy
  private: cBuildQueryString (const cBuildQueryString &) ;
  private: cBuildQueryString & operator = (const cBuildQueryString &) ;


//--- Virtual method called for every value
  public: virtual void action (const bool tableauDesValeurs [],
                                const uint32_t inVariableCount) ;
} ;

//--------------------------------------------------------------------------------------------------

void cBuildQueryString::
action (const bool tableauDesValeurs [],
        const uint32_t inVariableCount) {
  String value ;
  if (mStringPtr->length () > 0) {
    mStringPtr->addString ("|") ;
  }
  for (uint32_t i=inVariableCount ; i>0 ; i--) {
    mStringPtr->addChar ((char) ('0' + tableauDesValeurs [i-1])) ;
  }
}

//--------------------------------------------------------------------------------------------------

String C_BDD::
queryStringValue (LOCATION_ARGS) const {
  String s ;
  if (isTrue ()) {
    s.addString ("X") ;
  }else if (! isFalse ()) {
    TC_UniqueArray <String> stringArray ;
    buildCompressedBigEndianStringValueArray (stringArray COMMA_THERE) ;
    if (stringArray.count () > 0) {
      s.addString (stringArray (0 COMMA_HERE)) ;
      for (int32_t i=1 ; i<stringArray.count () ; i++) {
        s.addString ("|") ;
        s.addString (stringArray (i COMMA_HERE)) ;
      }
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
