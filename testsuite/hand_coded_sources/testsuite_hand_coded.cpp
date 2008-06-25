
#include "testsuite_list.h"
#include "objects/PM_C_Dictionary.h"
#include "objects/PM_C_Array.h"

//---------------------------------------------------------------------------*

void
routine_test_dictionary (void) {
  const sint32 TEST_SIZE = 5000000 ;
  PM_C_Dictionary dictionary ;
  dictionary._alloc (HERE) ;
  bool ok = true ;
  for (sint32 i=0 ; (i<TEST_SIZE) && ok ; i++) {
    C_String s ; s << i ;
    ok = dictionary._insertObjectForKey (PM_C_Object (), s) ;
    if (! ok) {
      printf ("Error when inserting '%s'\n", s.cString ()) ;
    }
  }
  if (ok) {
    printf ("Insertion Test Ok\n") ;
  }
  for (sint32 i=0 ; (i<TEST_SIZE) && ok ; i++) {
    C_String s ; s << i ;
    PM_C_Object object ;
    ok = dictionary._removeObjectForKey (object, s) ;
    if (! ok) {
      printf ("Error when removing '%s'\n", s.cString ()) ;
    }
  }
  if (ok) {
    printf ("Delete Test Ok\n") ;
  }
/*  GGS_stringset stringset (GGS_stringset::constructor_emptySet (inLexique COMMA_HERE)) ; 
  for (sint32 i=0 ; i<TEST_SIZE ; i++) {
    C_String s ; s << i ;
    stringset._addAssign_operation (GGS_string (true, s)) ;
  }*/
}

//---------------------------------------------------------------------------*

void
routine_test_array (C_Compiler & inLexique) {
  const sint32 TEST_SIZE = 5000000 ;
  PM_C_Array array ;
  array._alloc (HERE) ;
  for (sint32 i=0 ; i<TEST_SIZE ; i++) {
    array._addObject (PM_C_Object ()) ;
  }
  for (sint32 i=0 ; i<TEST_SIZE ; i++) {
    PM_C_Object object = array._removeLast (HERE) ;
  }
/*  GGS_stringlist list (GGS_stringlist::constructor_emptyList ()) ;
  for (sint32 i=0 ; i<TEST_SIZE ; i++) {
    list._addAssign_operation (GGS_string (true, "")) ;
  }
  for (sint32 i=0 ; i<TEST_SIZE ; i++) {
    GGS_string s ;
    list.modifier_popFirst (inLexique, s COMMA_HERE) ;
  }*/
  printf ("Array Test Done\n") ;
}

//---------------------------------------------------------------------------*

void
routine_testsuite_hand_coded (C_Compiler & inLexique
                              COMMA_UNUSED_LOCATION_ARGS) {
 // routine_test_dictionary () ;
  routine_test_array (inLexique) ;
}

//---------------------------------------------------------------------------*
