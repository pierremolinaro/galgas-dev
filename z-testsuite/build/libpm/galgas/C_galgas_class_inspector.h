//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2009, ..., 2009 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include <typeinfo>

//--------------------------------------------------------------------------------------------------

class C_galgas_class_inspector {
//--- Attributes
  public: const C_galgas_class_inspector * mNextClass ;
  public: const std::type_info * mClassID ;
  public: const std::type_info * mSuperClassID ;
  public: const char * mClassMessage ;

//--- Root of class list
  public: static C_galgas_class_inspector * root (void) ;

//--- Constructor
  public: C_galgas_class_inspector (const std::type_info * inClassID,
                                     const std::type_info * inSuperClassID,
                                     const char * inClassMessage) ;

//--- No copy
  private: C_galgas_class_inspector (const C_galgas_class_inspector &) = delete ;
  private: C_galgas_class_inspector & operator = (const C_galgas_class_inspector &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
