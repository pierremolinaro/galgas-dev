
#include "testsuite_list.h"
#include "galgas/GGS_stringset.h"

//---------------------------------------------------------------------------*

void
routine_test_dictionary (void) {
  const sint32 TEST_SIZE = 1000000 ;
  GGS_stringset dictionary (GGS_stringset::constructor_emptySet ()) ;
//--- First insertion
  for (sint32 i=0 ; i<TEST_SIZE ; i++) {
    C_String s ; s << i ;
    dictionary._addAssign_operation (GGS_string (true, s)) ;
  }
  printf ("Insertion Test Done\n") ;
//--- First remove
  for (sint32 i=0 ; i<TEST_SIZE ; i++) {
    C_String s ; s << i ;
    dictionary.minusAssign_operation (GGS_string (true, s)) ;
  }
  printf ("Delete Test Done\n") ;
//--- Second insertion
  for (sint32 i=0 ; i<TEST_SIZE ; i++) {
    C_String s ; s << i ;
    dictionary._addAssign_operation (GGS_string (true, s)) ;
  }
  printf ("Insertion Test Done\n") ;
//--- Second Remove
  for (sint32 i=0 ; i<TEST_SIZE ; i++) {
    C_String s ; s << i ;
    dictionary.minusAssign_operation (GGS_string (true, s)) ;
  }
  printf ("Delete Test Done\n") ;
  cPtrDictionaryNode::printStats () ;
}

//---------------------------------------------------------------------------*

void
routine_test_array (C_Compiler & /*inLexique */) {
/*  const sint32 TEST_SIZE = 5000000 ;
  PM_C_Array array ;
  array._alloc (HERE) ;
  for (sint32 i=0 ; i<TEST_SIZE ; i++) {
    array._addObject (PM_C_Object ()) ;
  }
  for (sint32 i=0 ; i<TEST_SIZE ; i++) {
    PM_C_Object object = array._removeLast (HERE) ;
  }*/
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
//  routine_test_dictionary () ;
 // routine_test_array (inLexique) ;
}

//---------------------------------------------------------------------------*
