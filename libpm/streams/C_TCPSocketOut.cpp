//---------------------------------------------------------------------------*
//                                                                           *
//  'C_TCPSocketOut' : a class for sending data as TCP socket client         *
//                                                                           *
//  This file is part of libpm library                                       *
//                                                                           *
//  Copyright (C) 2011, ..., 2011 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This library is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU Lesser General Public License as published    *
//  by the Free Software Foundation; either version 2 of the License, or     *
//  (at your option) any later version.                                      *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#include "streams/C_TCPSocketOut.h"
#include "strings/unicode_character_cpp.h"
#include "strings/C_String.h"

//---------------------------------------------------------------------------*

#include <stdio.h>
#include <strings.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>

//---------------------------------------------------------------------------*

C_TCPSocketOut::C_TCPSocketOut (void) :
mSocket (-1) {
}

//---------------------------------------------------------------------------*

bool C_TCPSocketOut::connect (const PMUInt16 inServerPort,
                              const C_String & inHostName) {
  bool ok = mSocket == -1 ;
//---
  if (ok) {
    struct sockaddr_in their_addr ;
    memset (& their_addr, 0, sizeof (their_addr)) ;
    their_addr.sin_len = sizeof(their_addr) ;
    their_addr.sin_family = AF_INET ;
    their_addr.sin_port = htons (inServerPort) ;
    struct hostent * he = gethostbyname (inHostName.cString (HERE)) ;
    their_addr.sin_addr = * ((struct in_addr *) he->h_addr) ;
    memset (& (their_addr.sin_zero), '\0', 8) ;  // zero the rest of the struct
  //---
    mSocket = socket (AF_INET, SOCK_STREAM, 0) ;
    if (mSocket < 0) {
      printf ("SOCKET CREATION ERROR\n") ;
      perror ("socket") ;
    }
    ok = ::connect (mSocket, (struct sockaddr *) & their_addr, sizeof (struct sockaddr)) != -1 ;
  //---
    if (! ok) {
      printf ("SOCKET CONNECTION ERROR\n") ;
      perror ("connect") ;
      close (mSocket) ;
      mSocket = -1 ;
    }
  }
//---
  return ok ;
}

//---------------------------------------------------------------------------*

void C_TCPSocketOut::performActualCharArrayOutput (const char * inCharArray,
                                                   const PMSInt32 inArrayCount) {
  if ((mSocket >=0) && (inArrayCount > 0)) {
    ssize_t numbytes = send (mSocket, inCharArray, inArrayCount, 0) ;
    if (numbytes < 0) {
      printf ("SOCKET SEND ERROR\n") ;
      perror ("send") ;
    }
  }
}

//---------------------------------------------------------------------------*

void C_TCPSocketOut::performActualUnicodeArrayOutput (const utf32 * inCharArray,
                                                      const PMSInt32 inArrayCount) {
  for (PMSInt32 i=0 ; i<inArrayCount ; i++) {
    char buffer [5] ;
    UTF8StringFromUTF32Character (inCharArray [i], buffer) ;
    performActualCharArrayOutput (buffer, (PMSInt32) strlen (buffer)) ;
  }
}

//---------------------------------------------------------------------------*

C_TCPSocketOut::~C_TCPSocketOut (void) {
  if (mSocket >=0) {
    close (mSocket) ;
  }
}

//---------------------------------------------------------------------------*
