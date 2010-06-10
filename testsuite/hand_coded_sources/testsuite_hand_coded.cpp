
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

void
routine_testsuite_hand_coded (C_Compiler & /* inLexique */
                              COMMA_UNUSED_LOCATION_ARGS) {
//  routine_test_dictionary () ;
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
