
#include "testsuite_list.h"
#include "galgas/GGS_stringset.h"
#include "galgas/GGS_uint.h"
#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*

void
routine_test_dictionary (void) {
  const PMSInt32 TEST_SIZE = 1000000 ;
  GGS_stringset dictionary (GGS_stringset::constructor_emptySet ()) ;
//--- First insertion
  for (PMSInt32 i=0 ; i<TEST_SIZE ; i++) {
    C_String s ; s << cStringWithSigned (i) ;
    dictionary.addAssign_operation (GGS_string (true, s)) ;
  }
  printf ("Insertion Test Done\n") ;
//--- First remove
  for (PMSInt32 i=0 ; i<TEST_SIZE ; i++) {
    C_String s ; s << cStringWithSigned (i) ;
    dictionary.minusAssign_operation (GGS_string (true, s)) ;
  }
  printf ("Delete Test Done\n") ;
//--- Second insertion
  for (PMSInt32 i=0 ; i<TEST_SIZE ; i++) {
    C_String s ; s << cStringWithSigned (i) ;
    dictionary.addAssign_operation (GGS_string (true, s)) ;
  }
  printf ("Insertion Test Done\n") ;
//--- Second Remove
  for (PMSInt32 i=0 ; i<TEST_SIZE ; i++) {
    C_String s ; s << cStringWithSigned (i) ;
    dictionary.minusAssign_operation (GGS_string (true, s)) ;
  }
  printf ("Delete Test Done\n") ;
  cPtrDictionaryNode::printStats () ;
}

//---------------------------------------------------------------------------*

static void
routine_test_galgas2 (C_Compiler & /*inLexique */) {
  GALGAS_uint * n = GALGAS_uint::constructor_new (2 COMMA_HERE) ;
  C_Object::retain (n COMMA_HERE) ;
  //AC_GALGAS__root::log (n, "n") ;
  const PMUInt32 TEST_SIZE = 5000 ;

  GALGAS_uintlist * aList = GALGAS_uintlist::constructor_emptyList (HERE) ;
  C_Object::retain (aList COMMA_HERE) ;
   for (PMUInt32 i=0 ; i<TEST_SIZE ; i++) {
    addAssign_operation (aList, GALGAS_uint::constructor_new (i COMMA_HERE)) ;
  }

  macroReleaseObject (n) ;
  macroReleaseObject (aList) ;
  C_Object::garbage () ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    C_Object::checkAllObjectsHaveBeenReleased () ;
  #endif
 // printf ("GALGAS 2 Test Done\n") ;
}

//---------------------------------------------------------------------------*

void
routine_testsuite_hand_coded (C_Compiler & inLexique
                              COMMA_UNUSED_LOCATION_ARGS) {
//  routine_test_dictionary () ;
  routine_test_galgas2 (inLexique) ;
}

//---------------------------------------------------------------------------*

GGS_uint
function_externTestFunction (C_Compiler & _inLexique,
                             GGS_uint inArg1,
                             const GGS_uint inArg2
                             COMMA_LOCATION_ARGS) {
  return inArg1.add_operation (_inLexique, inArg2 COMMA_THERE) ;
}

//---------------------------------------------------------------------------*
