//
//  C_Relation.h
//  galgas-developer
//
//  Created by Pierre Molinaro on 22/05/14.
//  Copyright (c) 2014 IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#ifndef galgas_developer_C_Relation_h
#define galgas_developer_C_Relation_h

//-----------------------------------------------------------------------------*

#include "bdd/C_BDD.h"
#include "bdd/C_TypeInRelation.h"

//-----------------------------------------------------------------------------*

class C_Relation {
  private : class cVariables ;
//--- Default constructor (no variable, empty)
  public : C_Relation (void) ;

//--- Destructor
  public : virtual ~ C_Relation (void) ;

//--- Handling copy
  public : C_Relation (const C_Relation & inSource) ;
  public : C_Relation & operator = (const C_Relation & inSource) ;

//--- Add variable
  public : void addVariable (const C_String & inVariableName,
                             const C_TypeInRelation & inType) ;

//--- Set
  public : void setToEmpty (void) ;
  public : void setToFull (void) ;
  
//--- Attributes
  private : cVariables * mVariablesPtr ; 
  private : C_BDD mBDD ;
} ;

//-----------------------------------------------------------------------------*


#endif
