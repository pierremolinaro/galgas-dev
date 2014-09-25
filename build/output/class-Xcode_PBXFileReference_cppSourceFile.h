#ifndef class_2D_Xcode_5F_PBXFileReference_5F_cppSourceFile_DEFINED
#define class_2D_Xcode_5F_PBXFileReference_5F_cppSourceFile_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_PBXFileReference_cppSourceFile-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @Xcode_PBXFileReference_cppSourceFile class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile : public cPtr_Xcode_5F_PBXFileReference_5F_abstract {
//--- Attributes

//--- Constructor
  public : cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile (const GALGAS_uint & in_mSequenceNumber,
                                                            const GALGAS_string & in_mFileName
                                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

