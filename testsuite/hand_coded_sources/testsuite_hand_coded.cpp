
#include "testsuite_list.h"
#include "galgas/GGS_stringset.h"
#include "galgas/GGS_uint.h"
#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*

void
routine_test_dictionary (C_Compiler & inCompiler) {
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
    dictionary.modifier_removeKey (inCompiler, GGS_string (true, s) COMMA_HERE) ;
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
    dictionary.modifier_removeKey (inCompiler, GGS_string (true, s) COMMA_HERE) ;
  }
  printf ("Delete Test Done\n") ;
}

//---------------------------------------------------------------------------*

static void
routine_test_galgas2 (C_Compiler & /* inCompiler */) {
  printf ("*************************************** GALGAS 2 Tests\n") ;
  printf ("*** Test on list\n") ;
  GALGAS_uint * n = GALGAS_uint::constructor_new (2 COMMA_HERE) ;
  GALGAS_root::log (n, "n") ;
  const PMUInt32 TEST_SIZE = 500 ;

  GALGAS_uintlist * aList = GALGAS_uintlist::constructor_emptyList (HERE) ;
   for (PMUInt32 i=0 ; i<TEST_SIZE ; i++) {
    GALGAS_uint * temp = GALGAS_uint::constructor_new (i COMMA_HERE) ;
    addAssign_operation (aList, temp COMMA_HERE) ;
    macroReleaseObject (temp) ;
  }

  macroReleaseObject (n) ;
  macroReleaseObject (aList) ;
  /* printf ("*** Test on sorted list\n") ;
  GALGAS_myList * r = GALGAS_myList::constructor_emptySortedList (HERE) ;
  C_Object::retain (r COMMA_HERE) ;

  GALGAS_string * s = GALGAS_string::constructor_new ("azerty" COMMA_HERE) ;
  GALGAS_uint * u = GALGAS_uint::constructor_new (23 COMMA_HERE) ;
  addAssign_operation (r, u, s) ;

  s = GALGAS_string::constructor_new ("meuh" COMMA_HERE) ;
  u = GALGAS_uint::constructor_new (45 COMMA_HERE) ;
  addAssign_operation (r, u, s) ;

  s = GALGAS_string::constructor_new ("oiiuyt" COMMA_HERE) ;
  u = GALGAS_uint::constructor_new (89 COMMA_HERE) ;
  addAssign_operation (r, u, s) ;

  s = GALGAS_string::constructor_new ("zeze" COMMA_HERE) ;
  u = GALGAS_uint::constructor_new (45 COMMA_HERE) ;
  addAssign_operation (r, u, s) ;

  s = GALGAS_string::constructor_new ("zaez" COMMA_HERE) ;
  u = GALGAS_uint::constructor_new (89 COMMA_HERE) ;
  addAssign_operation (r, u, s) ;

  s = GALGAS_string::constructor_new ("nbnb" COMMA_HERE) ;
  u = GALGAS_uint::constructor_new (23 COMMA_HERE) ;
  addAssign_operation (r, u, s) ;

  s = GALGAS_string::constructor_new ("prems" COMMA_HERE) ;
  u = GALGAS_uint::constructor_new (18 COMMA_HERE) ;
  addAssign_operation (r, u, s) ;

  printf ("*** Enumeration\n") ;
  GALGAS_myList::cEnumerator e (r, false) ;
  while (e.hasCurrentObject ()) {
    C_String s ;
    e.attribute_mField1 ()->description (s, 0) ;
    e.attribute_mField2 ()->description (s, 0) ;
    printf ("%s\n", s.cString (HERE)) ;
    e.next () ;
  }
  C_Object::release (r COMMA_HERE) ; */

//--- End of tests
  printf ("*** GALGAS 2 Test Done\n") ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    C_Object::checkAllObjectsHaveBeenReleased () ;
  #endif
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
