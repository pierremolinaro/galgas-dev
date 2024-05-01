
#include "all-declarations.h"

//---------------------------------------------------------------------------*

static void routine_test_dictionary (void) {
  const int32_t TEST_SIZE = 1000 ;
  GGS_stringset dictionary = GGS_stringset::class_func_emptySet (HERE) ;
//--- First insertion
  for (int32_t i=0 ; i<TEST_SIZE ; i++) {
    String s = stringWithSigned (i) ;
    dictionary.addAssign_operation (GGS_string (s) COMMA_HERE) ;
  }
  printf ("Insertion Test Done\n") ;
//--- First remove
  for (int32_t i=0 ; i<TEST_SIZE ; i++) {
    String s = stringWithSigned (i) ;
    dictionary.setter_removeKey (GGS_string (s) COMMA_HERE) ;
  }
  printf ("Delete Test Done\n") ;
//--- Second insertion
  for (int32_t i=0 ; i<TEST_SIZE ; i++) {
    String s = stringWithSigned (i) ;
    dictionary.addAssign_operation (GGS_string (s) COMMA_HERE) ;
  }
  printf ("Insertion Test Done\n") ;
//--- Second Remove
  for (int32_t i=0 ; i<TEST_SIZE ; i++) {
    String s = stringWithSigned (i) ;
    dictionary.setter_removeKey (GGS_string (s) COMMA_HERE) ;
  }
  printf ("Delete Test Done\n") ;
}

//---------------------------------------------------------------------------*

void routine_testsuite_5F_hand_5F_coded (Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  routine_test_dictionary () ;
}

//---------------------------------------------------------------------------*

GGS_uint function_externTestFunction (GGS_uint inArg1,
                                      const GGS_uint & inArg2,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  return inArg1.add_operation (inArg2, inCompiler COMMA_THERE) ;
}


//---------------------------------------------------------------------------*
