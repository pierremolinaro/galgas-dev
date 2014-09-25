#ifndef enum_2D_predefinedTypeKindEnum_1_DEFINED
#define enum_2D_predefinedTypeKindEnum_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @predefinedTypeKindEnum enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_predefinedTypeKindEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_predefinedTypeKindEnum (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_predefined_5F_uint,
    kEnum_predefined_5F_uint_36__34_,
    kEnum_predefined_5F_sint,
    kEnum_predefined_5F_sint_36__34_,
    kEnum_predefined_5F_char,
    kEnum_predefined_5F_double,
    kEnum_predefined_5F_string,
    kEnum_predefined_5F_stringset,
    kEnum_predefined_5F_bool,
    kEnum_predefined_5F_binaryset,
    kEnum_predefined_5F_function,
    kEnum_predefined_5F_location,
    kEnum_predefined_5F_type,
    kEnum_predefined_5F_object,
    kEnum_predefined_5F_data,
    kEnum_predefined_5F_filewrapper,
    kEnum_predefined_5F_application
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_predefinedTypeKindEnum extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_application (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_binaryset (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_bool (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_char (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_data (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_double (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_filewrapper (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_function (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_location (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_object (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_sint (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_sint_36__34_ (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_string (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_stringset (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_type (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_uint (LOCATION_ARGS) ;

  public : static GALGAS_predefinedTypeKindEnum constructor_predefined_5F_uint_36__34_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_predefinedTypeKindEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_predefinedTypeKindEnum class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypeKindEnum ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

