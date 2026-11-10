//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2009, ..., 2009 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "C_galgas_class_inspector.h"

//--------------------------------------------------------------------------------------------------

static C_galgas_class_inspector * gClassListRoot = nullptr ;

//--------------------------------------------------------------------------------------------------

C_galgas_class_inspector::C_galgas_class_inspector (const std::type_info * inClassID,
                                                    const std::type_info * inSuperClassID,
                                                    const char * inClassMessage) :
mNextClass (gClassListRoot),
mClassID (inClassID),
mSuperClassID (inSuperClassID),
mClassMessage (inClassMessage) {
  gClassListRoot = this ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_class_inspector * C_galgas_class_inspector::root (void) {
  return gClassListRoot ;
}

//--------------------------------------------------------------------------------------------------
