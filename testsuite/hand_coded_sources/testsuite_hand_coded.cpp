
#include "testsuite_list.h"
#include "galgas/GGS_stringset.h"
#include "galgas/GGS_uint.h"
#include "galgas2/predefinedTypes2.h"

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
routine_test_galgas2 (C_CompilerEx & /*inLexique */) {
  GALGAS_uint * n = GALGAS_uint::constructor_new (2 COMMA_HERE) ;
  C_Object::retain (n COMMA_HERE) ;
  AC_GALGAS__root::log (n, "n") ;
/*  const PMSInt32 TEST_SIZE = 5000000 ;
  PM_C_Array array ;
  array._alloc (HERE) ;
  for (PMSInt32 i=0 ; i<TEST_SIZE ; i++) {
    array._addObject (PM_C_Object ()) ;
  }
  for (PMSInt32 i=0 ; i<TEST_SIZE ; i++) {
    PM_C_Object object = array._removeLast (HERE) ;
  }*/
/*  GGS_stringlist list (GGS_stringlist::constructor_emptyList ()) ;
  for (PMSInt32 i=0 ; i<TEST_SIZE ; i++) {
    list._addAssign_operation (GGS_string (true, "")) ;
  }
  for (PMSInt32 i=0 ; i<TEST_SIZE ; i++) {
    GGS_string s ;
    list.modifier_popFirst (inLexique, s COMMA_HERE) ;
  }*/
  printf ("Array Test Done\n") ;
}

//---------------------------------------------------------------------------*

void
routine_testsuite_hand_coded (C_CompilerEx & inLexique
                              COMMA_UNUSED_LOCATION_ARGS) {
//  routine_test_dictionary () ;
  routine_test_galgas2 (inLexique) ;
}

//---------------------------------------------------------------------------*

GGS_uint
function_externTestFunction (C_CompilerEx & _inLexique,
                             GGS_uint inArg1,
                             const GGS_uint inArg2
                             COMMA_LOCATION_ARGS) {
  return inArg1.add_operation (_inLexique, inArg2 COMMA_THERE) ;
}

//---------------------------------------------------------------------------*
