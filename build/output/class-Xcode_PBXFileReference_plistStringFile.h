#ifndef class_2D_Xcode_5F_PBXFileReference_5F_plistStringFile_DEFINED
#define class_2D_Xcode_5F_PBXFileReference_5F_plistStringFile_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_PBXFileReference_plistStringFile-1.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @Xcode_PBXFileReference_plistStringFile class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile : public cPtr_Xcode_5F_PBXFileReference_5F_abstract {
//--- Attributes
  public : GALGAS_string mAttribute_mFilePath ;

//--- Constructor
  public : cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile (const GALGAS_uint & in_mSequenceNumber,
                                                              const GALGAS_string & in_mFileName,
                                                              const GALGAS_string & in_mFilePath
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFilePath (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

