//----------------------------------------------------------------------------------------------------------------------
//
//  AC_GALGAS_uniqueMap : Base class for GALGAS map                                              
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2008, ..., 2022 Pierre Molinaro.
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
//----------------------------------------------------------------------------------------------------------------------

#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "galgas2/AC_GALGAS_root.h"
#include "galgas2/typeComparisonResult.h"
#include "collections/TC_UniqueArray.h"

//----------------------------------------------------------------------------------------------------------------------

class cSharedUniqueMapRoot ;
class cMapElement ;
class GALGAS_lstring ;
class GALGAS_string ;
class GALGAS_stringset ;
class GALGAS_lstringlist ;
class GALGAS_stringlist ;
class GALGAS_bool ;
class GALGAS_uint ;
class GALGAS_location ;
class C_LocationInSource ;
class AC_GALGAS_uniqueMap ;
class capCollectionElement ;
class cCollectionElement ;
class C_Compiler ;
class C_galgas_type_descriptor ;
class capCollectionElementArray ;
class cUniqueMapNode ;
class cSharedEntry ;

//----------------------------------------------------------------------------------------------------------------------
//
//     M A P    P R O X Y                                                                        
//
//----------------------------------------------------------------------------------------------------------------------

class AC_GALGAS_sharedMapEntry : public AC_GALGAS_root {
  private: typedef enum {kNotValid, kIsNull, kIsRegular} enumMapProxyState ;

//--------------------------------- Attributes
  private: enumMapProxyState mState ;
  private: cSharedEntry * mSharedEntry ; // refers to map node if kIsRegular
  
//--------------------------------- Constructor
  protected: AC_GALGAS_sharedMapEntry (void) ;
  
//--------------------------------- Destructor
  protected: virtual ~ AC_GALGAS_sharedMapEntry (void) ;
  
//--------------------------------- isValid
  public: virtual bool isValid (void) const ;
  
//--------------------------------- drop
  public: virtual void drop (void) ;
  
//--------------------------------- Handle copy
  protected: AC_GALGAS_sharedMapEntry (const AC_GALGAS_sharedMapEntry & inSource) ;
  protected: AC_GALGAS_sharedMapEntry & operator = (const AC_GALGAS_sharedMapEntry & inSource) ;

//--------------------------------- Attachment management
  private: VIRTUAL_IN_DEBUG void attachEntryToMapNode (cUniqueMapNode * inMapNode) ;

//--------------------------------- Internal make proxy
  protected: VIRTUAL_IN_DEBUG void internalMakeEntry (AC_GALGAS_uniqueMap & ioMap,
                                                       const GALGAS_lstring & inKey
                                                       COMMA_LOCATION_ARGS) ;

  protected: VIRTUAL_IN_DEBUG void internalMakeOptionalEntry (AC_GALGAS_uniqueMap & ioMap,
                                                               const GALGAS_lstring & inKey
                                                               COMMA_LOCATION_ARGS) ;

  protected: VIRTUAL_IN_DEBUG void internalMakeEntryFromString (AC_GALGAS_uniqueMap & ioMap,
                                                                 const GALGAS_string & inKey
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Internal search key
  protected: VIRTUAL_IN_DEBUG void internalMakeRegularEntryBySearchingKey (const AC_GALGAS_uniqueMap & inMap,
                                                                            const GALGAS_lstring & inKey,
                                                                            const char * inSearchErrorMessage,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Make null proxy
  protected: VIRTUAL_IN_DEBUG void makeNullEntry (LOCATION_ARGS) ;

//--------------------------------- Reader invocation declaration
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_isRegular (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_isNull (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_isSolved (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GALGAS_string getter_identifierRepresentation (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_lkey (C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GALGAS_string getter_key (C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Get attribute list
  protected: const cMapElement * getAttributeListPointer (C_Compiler * inCompiler,
                                                           const char * inReaderName
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const AC_GALGAS_sharedMapEntry & inOperand) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//     M A P                                                                                     
//
//----------------------------------------------------------------------------------------------------------------------

class AC_GALGAS_uniqueMap : public AC_GALGAS_root {
//--------------------------------- Constructor
  protected: AC_GALGAS_uniqueMap (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ AC_GALGAS_uniqueMap (void) ;

//--------------------------------- Handle copy
  public: AC_GALGAS_uniqueMap (const AC_GALGAS_uniqueMap & inSource) ;
  public: AC_GALGAS_uniqueMap & operator = (const AC_GALGAS_uniqueMap & inSource) ;

//--- count
  public: VIRTUAL_IN_DEBUG uint32_t count (void) const ;

//--- isValid
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedMap != NULL ; }

//--- drop
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--- Create a new map
  protected: VIRTUAL_IN_DEBUG void makeNewEmptyMap (LOCATION_ARGS) ;

//--------------------------------- Insert
  protected: VIRTUAL_IN_DEBUG void insertInSharedMap (capCollectionElement & inAttributes,
                                                      C_Compiler * inCompiler,
                                                      const char * inInsertErrorMessage
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Search for 'with' read only instruction
  public: VIRTUAL_IN_DEBUG const cCollectionElement * readAccessForWithInstruction (const GALGAS_string & inKey) const ;

//--------------------------------- Search
  protected: VIRTUAL_IN_DEBUG cUniqueMapNode * searchEntryInMap (const C_String & inKey) const ;

  public: VIRTUAL_IN_DEBUG void findNearestKey (const C_String & inKey,
                                                TC_UniqueArray <C_String> & ioNearestKeyArray) const ;

  protected: VIRTUAL_IN_DEBUG const cCollectionElement * performSearch (const GALGAS_lstring & inKey,
                                                                        C_Compiler * inCompiler,
                                                                        const char * inSearchErrorMessage
                                                                        COMMA_LOCATION_ARGS) const ;

  protected: VIRTUAL_IN_DEBUG const cMapElement * searchForReadingAttribute (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  protected: VIRTUAL_IN_DEBUG cMapElement * searchForReadWriteAttribute (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  protected: VIRTUAL_IN_DEBUG cMapElement * searchForReadWriteAttribute (const GALGAS_lstring & inKey,
                                                                         C_Compiler * inCompiler,
                                                                         const char * inSearchErrorMessage
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Readers
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_hasKey (const GALGAS_string & inKey
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GALGAS_location getter_locationForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GALGAS_stringset getter_allKeys (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_allKeyList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GALGAS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GALGAS_uint getter_unsolvedEntryCount (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_unsolvedEntryList (LOCATION_ARGS) const ;

//--------------------------------- Introspection
  public: virtual const C_galgas_type_descriptor * staticTypeDescriptor (void) const = 0 ;

//--------------------------------- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                             const int32_t inIndentation) const ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const AC_GALGAS_uniqueMap & inOperand) const ;

//--------------------------------- Internal methods for enumeration
  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const ;

//--------------------------------- Internal methods for inserting proxy
  protected: VIRTUAL_IN_DEBUG cUniqueMapNode * performInsertEntry (const C_String & inKey,
                                                                   const GALGAS_location & inLocation
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Attributes
  private: cSharedUniqueMapRoot * mSharedMap ;
  
//--------------------------------- Friend
  friend class AC_GALGAS_sharedMapEntry ;
} ;

//----------------------------------------------------------------------------------------------------------------------
