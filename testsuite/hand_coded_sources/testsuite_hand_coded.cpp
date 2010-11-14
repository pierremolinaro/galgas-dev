
#include "testsuite_list.h"
#include "testsuite_functions.h"
#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*

static void routine_test_dictionary (void) {
  const PMSInt32 TEST_SIZE = 1000 ;
  GALGAS_stringset dictionary = GALGAS_stringset::constructor_emptySet (HERE) ;
//--- First insertion
  for (PMSInt32 i=0 ; i<TEST_SIZE ; i++) {
    C_String s ; s << cStringWithSigned (i) ;
    dictionary.addAssign_operation (GALGAS_string (s) COMMA_HERE) ;
  }
  printf ("Insertion Test Done\n") ;
//--- First remove
  for (PMSInt32 i=0 ; i<TEST_SIZE ; i++) {
    C_String s ; s << cStringWithSigned (i) ;
    dictionary.modifier_removeKey (GALGAS_string (s) COMMA_HERE) ;
  }
  printf ("Delete Test Done\n") ;
//--- Second insertion
  for (PMSInt32 i=0 ; i<TEST_SIZE ; i++) {
    C_String s ; s << cStringWithSigned (i) ;
    dictionary.addAssign_operation (GALGAS_string (s) COMMA_HERE) ;
  }
  printf ("Insertion Test Done\n") ;
//--- Second Remove
  for (PMSInt32 i=0 ; i<TEST_SIZE ; i++) {
    C_String s ; s << cStringWithSigned (i) ;
    dictionary.modifier_removeKey (GALGAS_string (s) COMMA_HERE) ;
  }
  printf ("Delete Test Done\n") ;
}

//---------------------------------------------------------------------------*

void routine_testsuite_5F_hand_5F_coded (C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  routine_test_dictionary () ;
}

//---------------------------------------------------------------------------*

GALGAS_uint
function_externTestFunction (const GALGAS_uint & inArg1,
                             const GALGAS_uint & inArg2,
                             C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) {
  return inArg1.add_operation (inArg2, inCompiler COMMA_THERE) ;
}

//---------------------------------------------------------------------------*
