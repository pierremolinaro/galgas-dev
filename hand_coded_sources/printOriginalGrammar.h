//--------------------------------------------------------------------------------------------------
//
//  Routines for printing original grammar (with 'select' and 'repeat')                          
//
//  Copyright (C) 1999, ..., 2016 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public  *
//  License as published by the Free Software Foundation.                                        
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

class C_HTMLString ;
class GALGAS_syntaxComponentListForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------

void printOriginalGrammar (C_HTMLString & inHTMLfile,
                           const GALGAS_syntaxComponentListForGrammarAnalysis & inSyntaxComponentsList) ;

//--------------------------------------------------------------------------------------------------
