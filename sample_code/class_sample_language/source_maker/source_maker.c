//---------------------------------------------------------------------------*
//                                                                           *
//  This program builds sources for class_sample_languages                   *
//                                                                           *
//  Copyright (C) 2006 Pierre Molinaro.                                      *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This program is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU General Public License as published by the    *
//  Free Software Foundation.                                                *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//---------------------------------------------------------------------------*

static void printUsage (const char * inProgramName) {
  printf ("Usage:%s generated_file_name count\n", inProgramName) ;
}

//---------------------------------------------------------------------------*

typedef struct {
  int mClassName ;
  int mSuperClassName ;
}classDescriptor ;

//---------------------------------------------------------------------------*

static void
buildFile (const char * inFileName,
           const int inCount) {
  int i ;
//--- Build vector
  classDescriptor * vector = malloc (sizeof (classDescriptor) * inCount) ;
  for (i=0 ; i<inCount ; i++) {
    vector [i].mClassName = i + 1 ;
    vector [i].mSuperClassName = (i < 2) ? 0 : (((unsigned) rand ()) % (i-1)) ;
  }
//--- Perform random ordering
  for (i=-inCount ; i<inCount ; i++) {
    classDescriptor cd ;
    const int index1 = ((unsigned) rand ()) % inCount ;
    const int index2 = ((unsigned) rand ()) % inCount ;
    cd = vector [index1] ;
    vector [index1] = vector [index2] ;
    vector [index2] = cd ;
  }
//--- Generate file
  char fileName [1000] ;
  strcpy (fileName, inFileName) ;
  strcat (fileName, ".class_sample_language") ;
  FILE * f = fopen (fileName, "wt") ;
  for (i=0 ; i<inCount ; i++) {
    fprintf (f, "class C%d",  vector [i].mClassName) ;
    if (vector [i].mSuperClassName != 0) {
      fprintf (f, " : C%d",  vector [i].mSuperClassName) ;
    }
    fprintf (f, " ;\n") ;
  }
  fclose (f) ;
}

//---------------------------------------------------------------------------*

int main (const int argc, const char * argv []) {
  int result = argc != 3 ;
  if (result) {
    printUsage (argv [0]) ;
  }else{
    const int n = atoi (argv [2]) ;
    result = n < 2 ;
    if (result) {
      printUsage (argv [0]) ;
      printf ("ERROR: the count argument is <2 or invalid.\n") ;
    }else{
      buildFile (argv [1], n) ;
    }
  }
  return result ;
}


//---------------------------------------------------------------------------*
