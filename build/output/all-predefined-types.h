//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#pragma once

//--------------------------------------------------------------------------------------------------

#include "AC_GALGAS_root.h"
#include "C_galgas_type_descriptor.h"
#include "ComparisonResult.h"
#include "ComparisonKind.h"
#include "EnumerationOrder.h"
#include "cGenericAbstractEnumerator.h"
#include "Enumerator_range.h"
#include "String-class.h"
#include "Timer.h"
#include "AC_GALGAS_list.h"
#include "AC_GALGAS_sortedlist.h"
#include "AC_GALGAS_map.h"
#include "AC_GALGAS_reference_class.h"
#include "AC_GALGAS_value_class.h"
#include "AC_GALGAS_enumAssociatedValues.h"
#include "AC_GALGAS_graph.h"
#include "acStrongPtr_class.h"
#include "cPtr_weakReference_proxy.h"
#include "AC_GALGAS_weak_reference.h"
#include "BoolCommandLineOption.h"
#include "UIntCommandLineOption.h"
#include "StringCommandLineOption.h"
#include "StringListCommandLineOption.h"
#include "PrologueEpilogue.h"
#include "BigSigned.h"

//--------------------------------------------------------------------------------------------------

class Compiler ;
class GGS_location ;
class GGS_string ;
class GGS_bool ;
class GGS_uint ;
class GGS_stringset ;
class GGS_char ;
class GGS_double ;
class GGS_uint64 ;
class GGS_sint ;
class GGS_sint64 ;
class GGS_bigint ;
class GGS_application ;
class GGS_binaryset ;
class GGS_data ;
class GGS_filewrapper ;
class GGS_function ;
class GGS_object ;
class GGS_timer ;
class GGS_type ;

//--------------------------------------------------------------------------------------------------
//
//   @location type
//
//--------------------------------------------------------------------------------------------------

#include "LocationInSource.h"
#include "SourceTextInString.h"

//--------------------------------------------------------------------------------------------------

class GGS_location : public AC_GALGAS_root {
//--------------------------------- Private properties
  private: class InternalLocation * mInternalLocation ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;
  public: LocationInSource startLocation (void) const ;
  public: LocationInSource endLocation (void) const ;
  public: SourceTextInString sourceText (void) const ;

//--------------------------------- Default constructor
  public: GGS_location (void) ;

//--------------------------------- Handle copy
  public: GGS_location (const GGS_location & inSource) ;
  public: GGS_location & operator = (const GGS_location & inSource) ;

//--------------------------------- Destructor
  public: virtual ~ GGS_location (void) ;

//--------------------------------- Native constructor
  public: GGS_location (const LocationInSource & inStartLocationInSource,
                        const LocationInSource & inEndLocationInSource,
                        const SourceTextInString & inSourceText) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_location extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_location class_func_here (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_location class_func_next (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_location class_func_nowhere (LOCATION_ARGS) ;

  public: static class GGS_location class_func_separator (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_location & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_endColumn (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_endLine (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_endLocationIndex (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_endLocationString (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_file (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNowhere (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_startColumn (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_startLine (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_startLocationIndex (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_startLocationString (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_union (const class GGS_location & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_location ;

//--------------------------------------------------------------------------------------------------
//
//   @string type
//
//--------------------------------------------------------------------------------------------------

class GGS_string : public AC_GALGAS_root {
//--------------------------------- Private data members
  private: bool mIsValid ;
  private: String mString ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG void drop (void) override ;
  public: inline String stringValue (void) const { return mString ; }

//--------------------------------- Default constructor
  public: GGS_string (void) ;

//--------------------------------- Constructor for making an empty string
  public: static GGS_string makeEmptyString (void) ;

//--------------------------------- Native constructor
  public: GGS_string (const String & inValue) ;

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (const char * inPropertyName) const override ;
  #endif

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_string extractObject (const GGS_object & inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_string class_func_CppChar (const class GGS_char & inOperand0
                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_CppLineComment (LOCATION_ARGS) ;

  public: static class GGS_string class_func_CppSpaceComment (LOCATION_ARGS) ;

  public: static class GGS_string class_func_CppString (const class GGS_string & inOperand0
                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_CppTitleComment (const class GGS_string & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_componentsJoinedByString (const class GGS_stringlist & inOperand0,
                                                                       const class GGS_string & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_homeDirectory (LOCATION_ARGS) ;

  public: static class GGS_string class_func_newWithStdIn (LOCATION_ARGS) ;

  public: static class GGS_string class_func_retrieveAndResetTemplateString (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_separatorString (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_stringByRepeatingString (const class GGS_string & inOperand0,
                                                                      const class GGS_uint & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_stringWithContentsOfFile (const class GGS_string & inOperand0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_stringWithCurrentDateTime (LOCATION_ARGS) ;

  public: static class GGS_string class_func_stringWithCurrentDirectory (LOCATION_ARGS) ;

  public: static class GGS_string class_func_stringWithEnvironmentVariable (const class GGS_string & inOperand0,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_stringWithEnvironmentVariableOrEmpty (const class GGS_string & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_stringWithSequenceOfCharacters (const class GGS_char & inOperand0,
                                                                             const class GGS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_stringWithSourceFilePath (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_stringWithSymbolicLinkContents (const class GGS_string & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_string inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_string add_operation (const GGS_string & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_string & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_appendSpacesUntilColumn (class GGS_uint constinArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_decIndentation (class GGS_uint constinArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_incIndentation (class GGS_uint constinArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertCharacterAtIndex (class GGS_char constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeCharacterAtIndex (class GGS_char & outArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setCapacity (class GGS_uint constinArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setCharacterAtIndex (class GGS_char constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_makeDirectory (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_makeDirectoryAndWriteToExecutableFile (class GGS_string constinArgument0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_makeDirectoryAndWriteToFile (class GGS_string constinArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_makeSymbolicLinkWithPath (class GGS_string constinArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_writeToExecutableFile (class GGS_string constinArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_writeToExecutableFileWhenDifferentContents (class GGS_string constinArgument0,
                                                                                   class GGS_bool & outArgument1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_writeToFile (class GGS_string constinArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_writeToFileWhenDifferentContents (class GGS_string constinArgument0,
                                                                         class GGS_bool & outArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods
  public: static void class_method_deleteFile (class GGS_string constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: static void class_method_deleteFileIfExists (class GGS_string constinArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: static void class_method_generateFile (class GGS_string constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 class GGS_string constinArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: static void class_method_generateFileWithPattern (class GGS_string constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            class GGS_string constinArgument2,
                                                            class GGS_string constinArgument3,
                                                            class GGS_string constinArgument4,
                                                            class GGS_string constinArgument5,
                                                            class GGS_string constinArgument6,
                                                            class GGS_string constinArgument7,
                                                            class GGS_bool constinArgument8,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: static void class_method_removeDirectoryRecursively (class GGS_string constinArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: static void class_method_removeEmptyDirectory (class GGS_string constinArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_HTMLRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_absolutePathFromPath (const class GGS_string & constinOperand0
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_assemblerRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bigint_3F_ getter_bigint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_cStringRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_capacity (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_char getter_characterAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint getter_commandWithArguments (const class GGS_stringlist & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_componentsSeparatedByString (const class GGS_string & constinOperand0
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_containsCharacter (const class GGS_char & constinOperand0
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_containsCharacterInRange (const class GGS_char & constinOperand0,
                                                                           const class GGS_char & constinOperand1
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_currentColumn (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint_36__34_ getter_decimalSigned_36__34_Number (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_decimalSignedBigInt (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint getter_decimalSignedNumber (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_ getter_decimalUnsigned_36__34_Number (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_decimalUnsignedNumber (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_decodedStringFromRepresentation (Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_directories (const class GGS_bool & constinOperand0
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_directoriesWithExtensions (const class GGS_bool & constinOperand0,
                                                                                  const class GGS_stringlist & constinOperand1
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_directoryExists (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_doesEnvironmentVariableExist (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_doubleNumber (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_fileExists (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_fileNameRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_char getter_firstCharacterOrNul (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_here (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_hiddenCommandWithArguments (const class GGS_stringlist & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_hiddenFiles (const class GGS_bool & constinOperand0
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_identifierRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDecimalSigned_36__34_Number (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDecimalSignedBigInt (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDecimalSignedNumber (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDecimalUnsigned_36__34_Number (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDecimalUnsignedNumber (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDoubleNumber (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSymbolicLink (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_char getter_lastCharacter (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_lastPathComponent (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_leftSubString (const class GGS_uint & constinOperand0
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_lowercaseString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_md_35_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_nameRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_nativePathWithUnixPath (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_nowhere (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_pathExtension (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_popen (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_regularFiles (const class GGS_bool & constinOperand0
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_regularFilesWithExtensions (const class GGS_bool & constinOperand0,
                                                                                   const class GGS_stringlist & constinOperand1
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_relativePathFromPath (const class GGS_string & constinOperand0
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_reversedString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_rightSubString (const class GGS_uint & constinOperand0
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_sha_32__35__36_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_stringByCapitalizingFirstCharacter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_stringByDeletingLastPathComponent (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_stringByDeletingPathExtension (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_stringByLeftAndRightPadding (const class GGS_uint & constinOperand0,
                                                                                const class GGS_char & constinOperand1
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_stringByLeftPadding (const class GGS_uint & constinOperand0,
                                                                        const class GGS_char & constinOperand1
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_stringByRemovingCharacterAtIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_stringByReplacingStringByString (const class GGS_string & constinOperand0,
                                                                                    const class GGS_string & constinOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_stringByRightPadding (const class GGS_uint & constinOperand0,
                                                                         const class GGS_char & constinOperand1
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_stringByStandardizingPath (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_stringByTrimmingWhiteSpaces (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_subString (const class GGS_uint & constinOperand0,
                                                              const class GGS_uint & constinOperand1
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_subStringFromIndex (const class GGS_uint & constinOperand0
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint getter_system (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_unixPathWithNativePath (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_uppercaseString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_utf_33__32_Representation (const class GGS_bool & constinOperand0
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_utf_38_Length (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_utf_38_Representation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_utf_38_RepresentationEnclosedWithin (const class GGS_char & constinOperand0
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_utf_38_RepresentationEscapingQuestionMark (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_utf_38_RepresentationWithUnicodeEscaping (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_utf_38_RepresentationWithoutDelimiters (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_string ;

//--------------------------------------------------------------------------------------------------
//
//@bool type
//
//--------------------------------------------------------------------------------------------------

enum class GalgasBool {boolNotValid, boolFalse, boolTrue} ;

//--------------------------------------------------------------------------------------------------

class GGS_bool : public AC_GALGAS_root {
//--------------------------------- Private data members
  private: bool mIsValid ;
  private: bool mBoolValue ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }
  public: inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }
  public: inline bool boolValue (void) const { return mBoolValue ; }
  public: GalgasBool boolEnum (void) const ;

//--------------------------------- Drop
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GGS_bool (void) ;

//--------------------------------- Native constructors
  public: GGS_bool (const bool inValue) ; // Is built
  public: GGS_bool (const bool inBuilt, const bool inValue) ;

//--------------------------------- Constructor for comparison result
  public: GGS_bool (const ComparisonKind inComparisonKind,
                    const ComparisonResult inComparisonResult) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bool extractObject (const GGS_object & inObject,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GGS_bool operator_and (const GGS_bool & inOperand
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GGS_bool operator_or (const GGS_bool & inOperand
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GGS_bool operator_xor (const GGS_bool & inOperand
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- not operator
  public: VIRTUAL_IN_DEBUG GGS_bool operator_not (LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bool & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_bigint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_cString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_ocString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint getter_sint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint_36__34_ getter_sint_36__34_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_uint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_ getter_uint_36__34_ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bool ;

//--------------------------------------------------------------------------------------------------
//
//   @uint type
//
//--------------------------------------------------------------------------------------------------

class GGS_uint : public AC_GALGAS_root {
//--------------------------------- Private data members
  private: bool mIsValid ;
  private: uint32_t mUIntValue ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }
  public: inline uint32_t uintValue (void) const { return mUIntValue ; }
  public: inline void increment (void) { mUIntValue ++ ; }

//--------------------------------- Default constructor
  public: GGS_uint (void) ;

//--------------------------------- Native constructors
  public: GGS_uint (const uint32_t inValue) ;
  public: GGS_uint (const bool inValid, const uint32_t inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_uint extractObject (const GGS_object & inObject,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_uint class_func_compilationMode (LOCATION_ARGS) ;

  public: static class GGS_uint class_func_errorCount (LOCATION_ARGS) ;

  public: static class GGS_uint class_func_max (LOCATION_ARGS) ;

  public: static class GGS_uint class_func_random (LOCATION_ARGS) ;

  public: static class GGS_uint class_func_valueWithMask (const class GGS_uint & inOperand0,
                                                          const class GGS_uint & inOperand1,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_uint class_func_warningCount (LOCATION_ARGS) ;

//--------------------------------- << and >> shift operators
  public: VIRTUAL_IN_DEBUG GGS_uint left_shift_operation (const GGS_uint inShiftOperand,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_uint left_shift_operation (const GGS_bigint inShiftOperand,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_uint right_shift_operation (const GGS_uint inShiftOperand,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_uint right_shift_operation (const GGS_bigint inShiftOperand,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_uint inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator (with expression)
  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GGS_uint inOperand,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- *= operator (with expression)
  public: VIRTUAL_IN_DEBUG void mulAssign_operation (const GGS_uint inOperand,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- /= operator (with expression)
  public: VIRTUAL_IN_DEBUG void divAssign_operation (const GGS_uint inOperand,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GGS_uint operator_and (const GGS_uint & inOperand
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GGS_uint operator_or (const GGS_uint & inOperand
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GGS_uint operator_xor (const GGS_uint & inOperand
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GGS_uint operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_uint add_operation (const GGS_uint & inOperand,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- &+ operator
  public: VIRTUAL_IN_DEBUG GGS_uint add_operation_no_ovf (const GGS_uint & inOperand) const ;

//--------------------------------- &- operator
  public: VIRTUAL_IN_DEBUG GGS_uint substract_operation_no_ovf (const GGS_uint & inOperand) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GGS_uint substract_operation (const GGS_uint & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- * operator
  public: VIRTUAL_IN_DEBUG GGS_uint multiply_operation (const GGS_uint & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- &* operator
  public: VIRTUAL_IN_DEBUG GGS_uint multiply_operation_no_ovf (const GGS_uint & inOperand) const ;

//--------------------------------- / operator
  public: VIRTUAL_IN_DEBUG GGS_uint divide_operation (const GGS_uint & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- &/ operator
  public: VIRTUAL_IN_DEBUG GGS_uint divide_operation_no_ovf (const GGS_uint & inOperand) const ;

//--------------------------------- mod operator
  public: VIRTUAL_IN_DEBUG GGS_uint modulo_operation (const GGS_uint & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- ++, -- operators
  public: VIRTUAL_IN_DEBUG void increment_operation (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void decrement_operation (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- &++, &-- operators
  public: VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;

  public: VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_uint & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods
  public: static void class_method_setRandomSeed (class GGS_uint constinArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_alphaString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_bigint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canAdd (const class GGS_uint & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canDivide (const class GGS_uint & constinOperand0
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canMultiply (const class GGS_uint & constinOperand0
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canSubstract (const class GGS_uint & constinOperand0
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_double (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_hexString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_hexStringSeparatedBy (const class GGS_char & constinOperand0,
                                                                         const class GGS_uint & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isInRange (const class GGS_range & constinOperand0
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUnicodeValueAssigned (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_lsbIndex (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_oneBitCount (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_significantBitCount (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint getter_sint (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint_36__34_ getter_sint_36__34_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_string (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_ getter_uint_36__34_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_xString (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @stringset enumerator
//--------------------------------------------------------------------------------------------------

class UpEnumerator_stringset final : public cGenericAbstractEnumerator {
  public: UpEnumerator_stringset (const class GGS_stringset & inEnumeratedObject) ;

//--- Current element access
  public: class GGS_string current_key (LOCATION_ARGS) const ;
  public: class GGS_string current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_stringset final : public cGenericAbstractEnumerator {
  public: DownEnumerator_stringset (const class GGS_stringset & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;
//--- Current element access
  public: class GGS_string current_key (LOCATION_ARGS) const ;
  public: class GGS_string current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
//   @stringset type
//--------------------------------------------------------------------------------------------------

class GGS_stringset : public AC_GALGAS_root {
//--------------------------------- Private data members
  private: std::set <String> mStringSet ;
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_stringset (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_stringset init (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_stringset extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_stringset class_func_emptySet (LOCATION_ARGS) ;

  public: static class GGS_stringset class_func_setWithLStringList (const class GGS_lstringlist & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_stringset class_func_setWithString (const class GGS_string & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_stringset class_func_setWithStringList (const class GGS_stringlist & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Handle copy
  public: GGS_stringset (const GGS_stringset & inSource) ;
  public: GGS_stringset & operator = (const GGS_stringset & inSource) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_stringset inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GGS_stringset operator_and (const GGS_stringset & inOperand
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GGS_stringset operator_or (const GGS_stringset & inOperand
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GGS_stringset substract_operation (const GGS_stringset & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_stringset & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_string constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_string inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_anyString (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_stringList (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Enumeration helper methods
  protected: void populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_string & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_stringset ;
  friend class UpEnumerator_stringset ;
  friend class DownEnumerator_stringset ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringset ;

//--------------------------------------------------------------------------------------------------
//
//   @char type
//
//--------------------------------------------------------------------------------------------------

class GGS_char : public AC_GALGAS_root {
//--------------------------------- Private data members
  private: bool mIsValid ;
  private: utf32 mCharValue ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }
  public: inline utf32 charValue (void) const { return mCharValue ; }

//--------------------------------- Default constructor
  public: GGS_char (void) ;

//--------------------------------- Native constructor
  public: GGS_char (const utf32 inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_char extractObject (const GGS_object & inObject,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_char class_func_replacementCharacter (LOCATION_ARGS) ;

  public: static class GGS_char class_func_unicodeCharacterFromRawKeyboard (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GGS_char class_func_unicodeCharacterWithUnsigned (const class GGS_uint & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_char & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUnicodeCommand (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUnicodeLetter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUnicodeMark (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUnicodeNumber (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUnicodePunctuation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUnicodeSeparator (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUnicodeSymbol (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isalnum (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isalpha (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_iscntrl (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isdigit (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_islower (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isupper (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isxdigit (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_string (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_uint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_unicodeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_char getter_unicodeToLower (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_char getter_unicodeToUpper (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_utf_33__32_CharConstantRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_utf_38_Length (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_char ;

//--------------------------------------------------------------------------------------------------
//
//  @double type
//
//--------------------------------------------------------------------------------------------------

class GGS_double : public AC_GALGAS_root {
//--------------------------------- Private data members
  private: bool mIsValid ;
  private: double mDoubleValue ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }
  public: inline double doubleValue (void) const { return mDoubleValue ; }

//--------------------------------- Default constructor
  public: GGS_double (void) ;

//--------------------------------- Native constructor
  public: GGS_double (const double inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_double extractObject (const GGS_object & inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_double class_func_doubleWithBinaryImage (const class GGS_uint_36__34_ & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_double class_func_pi (LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_double inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator (with expression)
  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GGS_double inOperand,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- *= operator (with expression)
  public: VIRTUAL_IN_DEBUG void mulAssign_operation (const GGS_double inOperand,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- /= operator (with expression)
  public: VIRTUAL_IN_DEBUG void divAssign_operation (const GGS_double inOperand,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_double add_operation (const GGS_double & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GGS_double substract_operation (const GGS_double & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- * operator
  public: VIRTUAL_IN_DEBUG GGS_double multiply_operation (const GGS_double & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- / operator
  public: VIRTUAL_IN_DEBUG GGS_double divide_operation (const GGS_double & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- &/ operator
  public: VIRTUAL_IN_DEBUG GGS_double divide_operation_no_ovf (const GGS_double & inOperand) const ;

//--------------------------------- mod operator
  public: VIRTUAL_IN_DEBUG GGS_double modulo_operation (const GGS_double & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- prefix - operator
  public: VIRTUAL_IN_DEBUG GGS_double operator_unary_minus (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_double & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_ getter_binaryImage (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_cos (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_cosDegree (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_exp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_log_31__30_ (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_log_32_ (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_logn (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_power (const class GGS_double & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_sin (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_sinDegree (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint getter_sint (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint_36__34_ getter_sint_36__34_ (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_sqrt (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_string (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_tan (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_tanDegree (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_uint (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_ getter_uint_36__34_ (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_double ;

//--------------------------------------------------------------------------------------------------
//
//  @uint64 type
//
//--------------------------------------------------------------------------------------------------

class GGS_uint_36__34_ : public AC_GALGAS_root {
//--------------------------------- Private data members
  private: bool mIsValid ;
  private: uint64_t mUInt64Value ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }
  public: inline uint64_t uint64Value (void) const { return mUInt64Value ; }

//--------------------------------- Default constructor
  public: GGS_uint_36__34_ (void) ;

//--------------------------------- Native constructor
  public: GGS_uint_36__34_ (const uint64_t inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_uint_36__34_ extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_uint_36__34_ class_func_max (LOCATION_ARGS) ;

  public: static class GGS_uint_36__34_ class_func_uint_36__34_BaseValueWithCompressedBitString (const class GGS_string & inOperand0,
                                                                                                 class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_uint_36__34_ class_func_uint_36__34_MaskWithCompressedBitString (const class GGS_string & inOperand0,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GGS_uint_36__34_ class_func_uint_36__34_WithBitString (const class GGS_string & inOperand0,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- << and >> shift operators
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ left_shift_operation (const GGS_uint inShiftOperand,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ left_shift_operation (const GGS_bigint inShiftOperand,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ right_shift_operation (const GGS_uint inShiftOperand,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ right_shift_operation (const GGS_bigint inShiftOperand,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_uint_36__34_ inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator (with expression)
  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GGS_uint_36__34_ inOperand,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- *= operator (with expression)
  public: VIRTUAL_IN_DEBUG void mulAssign_operation (const GGS_uint_36__34_ inOperand,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- /= operator (with expression)
  public: VIRTUAL_IN_DEBUG void divAssign_operation (const GGS_uint_36__34_ inOperand,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ operator_and (const GGS_uint_36__34_ & inOperand
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ operator_or (const GGS_uint_36__34_ & inOperand
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ operator_xor (const GGS_uint_36__34_ & inOperand
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ add_operation (const GGS_uint_36__34_ & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- &+ operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ add_operation_no_ovf (const GGS_uint_36__34_ & inOperand) const ;

//--------------------------------- &- operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ substract_operation_no_ovf (const GGS_uint_36__34_ & inOperand) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ substract_operation (const GGS_uint_36__34_ & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- * operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ multiply_operation (const GGS_uint_36__34_ & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- &* operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ multiply_operation_no_ovf (const GGS_uint_36__34_ & inOperand) const ;

//--------------------------------- / operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ divide_operation (const GGS_uint_36__34_ & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- &/ operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ divide_operation_no_ovf (const GGS_uint_36__34_ & inOperand) const ;

//--------------------------------- mod operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_ modulo_operation (const GGS_uint_36__34_ & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- ++, -- operators
  public: VIRTUAL_IN_DEBUG void increment_operation (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void decrement_operation (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- &++, &-- operators
  public: VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;

  public: VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_uint_36__34_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_alphaString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_bigint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canAdd (const class GGS_uint_36__34_ & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canDivide (const class GGS_uint_36__34_ & constinOperand0
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canMultiply (const class GGS_uint_36__34_ & constinOperand0
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canSubstract (const class GGS_uint_36__34_ & constinOperand0
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_double (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_hexString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_hexStringSeparatedBy (const class GGS_char & constinOperand0,
                                                                         const class GGS_uint & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint getter_sint (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint_36__34_ getter_sint_36__34_ (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_string (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_uint (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_uintSlice (const class GGS_uint & constinOperand0,
                                                            const class GGS_uint & constinOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_xString (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint_36__34_ ;

//--------------------------------------------------------------------------------------------------
//
//   @sint type
//
//--------------------------------------------------------------------------------------------------

class GGS_sint : public AC_GALGAS_root {
//--------------------------------- Private data members
  private: bool mIsValid ;
  private: int32_t mSIntValue ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }
  public: inline int32_t intValue (void) const { return mSIntValue ; }

//--------------------------------- Default constructor
  public: GGS_sint (void) ;

//--------------------------------- Native constructor
  public: GGS_sint (const int32_t inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sint extractObject (const GGS_object & inObject,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sint class_func_max (LOCATION_ARGS) ;

  public: static class GGS_sint class_func_min (LOCATION_ARGS) ;

//--------------------------------- << and >> shift operators
  public: VIRTUAL_IN_DEBUG GGS_sint left_shift_operation (const GGS_uint inShiftOperand,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_sint left_shift_operation (const GGS_bigint inShiftOperand,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_sint right_shift_operation (const GGS_uint inShiftOperand,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_sint right_shift_operation (const GGS_bigint inShiftOperand,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_sint inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator (with expression)
  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GGS_sint inOperand,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- *= operator (with expression)
  public: VIRTUAL_IN_DEBUG void mulAssign_operation (const GGS_sint inOperand,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- /= operator (with expression)
  public: VIRTUAL_IN_DEBUG void divAssign_operation (const GGS_sint inOperand,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GGS_sint operator_and (const GGS_sint & inOperand
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GGS_sint operator_or (const GGS_sint & inOperand
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GGS_sint operator_xor (const GGS_sint & inOperand
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GGS_sint operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_sint add_operation (const GGS_sint & inOperand,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- &+ operator
  public: VIRTUAL_IN_DEBUG GGS_sint add_operation_no_ovf (const GGS_sint & inOperand) const ;

//--------------------------------- &- operator
  public: VIRTUAL_IN_DEBUG GGS_sint substract_operation_no_ovf (const GGS_sint & inOperand) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GGS_sint substract_operation (const GGS_sint & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- * operator
  public: VIRTUAL_IN_DEBUG GGS_sint multiply_operation (const GGS_sint & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- &* operator
  public: VIRTUAL_IN_DEBUG GGS_sint multiply_operation_no_ovf (const GGS_sint & inOperand) const ;

//--------------------------------- / operator
  public: VIRTUAL_IN_DEBUG GGS_sint divide_operation (const GGS_sint & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- &/ operator
  public: VIRTUAL_IN_DEBUG GGS_sint divide_operation_no_ovf (const GGS_sint & inOperand) const ;

//--------------------------------- mod operator
  public: VIRTUAL_IN_DEBUG GGS_sint modulo_operation (const GGS_sint & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- prefix - operator
  public: VIRTUAL_IN_DEBUG GGS_sint operator_unary_minus (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- prefix &- operator
  public: VIRTUAL_IN_DEBUG GGS_sint operator_unary_minus_no_ovf (void) const ;

//--------------------------------- ++, -- operators
  public: VIRTUAL_IN_DEBUG void increment_operation (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void decrement_operation (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- &++, &-- operators
  public: VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;

  public: VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sint & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_bigint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canAdd (const class GGS_sint & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canDivide (const class GGS_sint & constinOperand0
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canMultiply (const class GGS_sint & constinOperand0
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canSubstract (const class GGS_sint & constinOperand0
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_double (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_hexString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_hexStringSeparatedBy (const class GGS_char & constinOperand0,
                                                                         const class GGS_uint & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint_36__34_ getter_sint_36__34_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_string (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_uint (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_ getter_uint_36__34_ (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_xString (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sint ;

//--------------------------------------------------------------------------------------------------
//
//   @sint64 type
//
//--------------------------------------------------------------------------------------------------

class GGS_sint_36__34_ : public AC_GALGAS_root {
//--------------------------------- Private data members
  private: bool mIsValid ;
  private: int64_t mSInt64Value ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }
  public: inline int64_t int64Value (void) const { return mSInt64Value ; }

//--------------------------------- Default constructor
  public: GGS_sint_36__34_ (void) ;

//--------------------------------- Native constructor
  public: GGS_sint_36__34_ (const int64_t inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sint_36__34_ extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sint_36__34_ class_func_max (LOCATION_ARGS) ;

  public: static class GGS_sint_36__34_ class_func_min (LOCATION_ARGS) ;

//--------------------------------- << and >> shift operators
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ left_shift_operation (const GGS_uint inShiftOperand,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ left_shift_operation (const GGS_bigint inShiftOperand,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ right_shift_operation (const GGS_uint inShiftOperand,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ right_shift_operation (const GGS_bigint inShiftOperand,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_sint_36__34_ inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator (with expression)
  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GGS_sint_36__34_ inOperand,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- *= operator (with expression)
  public: VIRTUAL_IN_DEBUG void mulAssign_operation (const GGS_sint_36__34_ inOperand,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- /= operator (with expression)
  public: VIRTUAL_IN_DEBUG void divAssign_operation (const GGS_sint_36__34_ inOperand,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ operator_and (const GGS_sint_36__34_ & inOperand
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ operator_or (const GGS_sint_36__34_ & inOperand
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ operator_xor (const GGS_sint_36__34_ & inOperand
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ add_operation (const GGS_sint_36__34_ & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- &+ operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ add_operation_no_ovf (const GGS_sint_36__34_ & inOperand) const ;

//--------------------------------- &- operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ substract_operation_no_ovf (const GGS_sint_36__34_ & inOperand) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ substract_operation (const GGS_sint_36__34_ & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- * operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ multiply_operation (const GGS_sint_36__34_ & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- &* operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ multiply_operation_no_ovf (const GGS_sint_36__34_ & inOperand) const ;

//--------------------------------- / operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ divide_operation (const GGS_sint_36__34_ & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- &/ operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ divide_operation_no_ovf (const GGS_sint_36__34_ & inOperand) const ;

//--------------------------------- mod operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ modulo_operation (const GGS_sint_36__34_ & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- prefix - operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ operator_unary_minus (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- prefix &- operator
  public: VIRTUAL_IN_DEBUG GGS_sint_36__34_ operator_unary_minus_no_ovf (void) const ;

//--------------------------------- ++, -- operators
  public: VIRTUAL_IN_DEBUG void increment_operation (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void decrement_operation (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- &++, &-- operators
  public: VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;

  public: VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sint_36__34_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_bigint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canAdd (const class GGS_sint_36__34_ & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canDivide (const class GGS_sint_36__34_ & constinOperand0
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canMultiply (const class GGS_sint_36__34_ & constinOperand0
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_canSubstract (const class GGS_sint_36__34_ & constinOperand0
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_double getter_double (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_hexString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_hexStringSeparatedBy (const class GGS_char & constinOperand0,
                                                                         const class GGS_uint & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint getter_sint (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_string (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_uint (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_ getter_uint_36__34_ (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_xString (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sint_36__34_ ;

//--------------------------------------------------------------------------------------------------
//
//   @bigint type
//
//--------------------------------------------------------------------------------------------------
 
class GGS_bigint : public AC_GALGAS_root {
//--------------------------------- Private properties
  private: bool mIsValid ;
  private: BigSigned mValue ;

//--------------------------------- Accessors
  public: inline bool isValid (void) const override { return mIsValid ; }
  public: inline BigSigned bigintValue (void) const { return mValue ; }
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bigint (void) ;

//--------------------------------- Constructor
  public: GGS_bigint (const BigSigned & inValue) ;
  public: GGS_bigint (const char * inDecimalString, Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--------------------------------- Destructor
  public: virtual ~ GGS_bigint (void) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bigint extractObject (const GGS_object & inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bigint class_func_zero (LOCATION_ARGS) ;

//--------------------------------- << and >> shift operators
  public: VIRTUAL_IN_DEBUG GGS_bigint left_shift_operation (const GGS_uint inShiftOperand,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_bigint left_shift_operation (const GGS_bigint inShiftOperand,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_bigint right_shift_operation (const GGS_uint inShiftOperand,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_bigint right_shift_operation (const GGS_bigint inShiftOperand,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_bigint inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator (with expression)
  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GGS_bigint inOperand,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- *= operator (with expression)
  public: VIRTUAL_IN_DEBUG void mulAssign_operation (const GGS_bigint inOperand,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- /= operator (with expression)
  public: VIRTUAL_IN_DEBUG void divAssign_operation (const GGS_bigint inOperand,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GGS_bigint operator_and (const GGS_bigint & inOperand
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GGS_bigint operator_or (const GGS_bigint & inOperand
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GGS_bigint operator_xor (const GGS_bigint & inOperand
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GGS_bigint operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_bigint add_operation (const GGS_bigint & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GGS_bigint substract_operation (const GGS_bigint & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- * operator
  public: VIRTUAL_IN_DEBUG GGS_bigint multiply_operation (const GGS_bigint & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- / operator
  public: VIRTUAL_IN_DEBUG GGS_bigint divide_operation (const GGS_bigint & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- mod operator
  public: VIRTUAL_IN_DEBUG GGS_bigint modulo_operation (const GGS_bigint & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- prefix - operator
  public: VIRTUAL_IN_DEBUG GGS_bigint operator_unary_minus (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- ++, -- operators
  public: VIRTUAL_IN_DEBUG void increment_operation (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void decrement_operation (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bigint & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_complementBitAtIndex (class GGS_uint constinArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setBitAtIndex (class GGS_bool constinArgument0,
                                                      class GGS_uint constinArgument1
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_divideBy (class GGS_bigint constinArgument0,
                                                 class GGS_bigint & outArgument1,
                                                 class GGS_bigint & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_abs (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_bitAtIndex (const class GGS_uint & constinOperand0
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_bitCountForSignedRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_bitCountForUnsignedRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_extract_33__32_ForSignedRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_extract_33__32_ForUnsignedRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_list getter_extract_36__34_ForSignedRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_list getter_extract_36__34_ForUnsignedRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_extract_38_ForSignedRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_extract_38_ForUnsignedRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_fitsInSInt (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_fitsInSInt_36__34_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_fitsInUInt (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_fitsInUInt_36__34_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_hexString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_hexStringSeparatedBy (const class GGS_char & constinOperand0,
                                                                         const class GGS_uint & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isZero (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint getter_sign (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint getter_sint (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sint_36__34_ getter_sint_36__34_ (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_spacedString (const class GGS_uint & constinOperand0
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_string (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_uint (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_ getter_uint_36__34_ (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_xString (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bigint ;

//--------------------------------------------------------------------------------------------------
//
//@application package
//
//--------------------------------------------------------------------------------------------------

class GGS_application final {

//-- Start of package generic part

//--------------------------------- GALGAS class getters
  public: static class GGS_string class_func_boolOptionCommentString (const class GGS_string & inOperand0,
                                                                      const class GGS_string & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_char class_func_boolOptionInvocationCharacter (const class GGS_string & inOperand0,
                                                                          const class GGS_string & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_boolOptionInvocationString (const class GGS_string & inOperand0,
                                                                         const class GGS_string & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS__32_stringlist class_func_boolOptionNameList (LOCATION_ARGS) ;

  public: static class GGS_bool class_func_boolOptionValue (const class GGS_string & inOperand0,
                                                            const class GGS_string & inOperand1
                                                            COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_commandLineArgumentAtIndex (const class GGS_uint & inOperand0,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_uint class_func_commandLineArgumentCount (LOCATION_ARGS) ;

  public: static class GGS_string class_func_galgasVersionString (LOCATION_ARGS) ;

  public: static class GGS_stringset class_func_keywordIdentifierSet (LOCATION_ARGS) ;

  public: static class GGS_stringlist class_func_keywordListForIdentifier (const class GGS_string & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_projectVersionString (LOCATION_ARGS) ;

  public: static class GGS_string class_func_stringOptionCommentString (const class GGS_string & inOperand0,
                                                                        const class GGS_string & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_char class_func_stringOptionInvocationCharacter (const class GGS_string & inOperand0,
                                                                            const class GGS_string & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_stringOptionInvocationString (const class GGS_string & inOperand0,
                                                                           const class GGS_string & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS__32_stringlist class_func_stringOptionNameList (LOCATION_ARGS) ;

  public: static class GGS_string class_func_stringOptionValue (const class GGS_string & inOperand0,
                                                                const class GGS_string & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_system (LOCATION_ARGS) ;

  public: static class GGS_string class_func_uintOptionCommentString (const class GGS_string & inOperand0,
                                                                      const class GGS_string & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_char class_func_uintOptionInvocationCharacter (const class GGS_string & inOperand0,
                                                                          const class GGS_string & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_uintOptionInvocationString (const class GGS_string & inOperand0,
                                                                         const class GGS_string & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS__32_stringlist class_func_uintOptionNameList (LOCATION_ARGS) ;

  public: static class GGS_uint class_func_uintOptionValue (const class GGS_string & inOperand0,
                                                            const class GGS_string & inOperand1
                                                            COMMA_LOCATION_ARGS) ;

  public: static class GGS_bool class_func_verboseOutput (LOCATION_ARGS) ;

//--------------------------------- Class Methods
  public: static void class_method_exit (class GGS_uint constinArgument0
                                         COMMA_LOCATION_ARGS) ;

  public: static void class_method_setBoolOptionValue (class GGS_string constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       class GGS_bool constinArgument2
                                                       COMMA_LOCATION_ARGS) ;

  public: static void class_method_setStringOptionValue (class GGS_string constinArgument0,
                                                         class GGS_string constinArgument1,
                                                         class GGS_string constinArgument2
                                                         COMMA_LOCATION_ARGS) ;

  public: static void class_method_setUIntOptionValue (class GGS_string constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       class GGS_uint constinArgument2
                                                       COMMA_LOCATION_ARGS) ;


} ;

//--------------------------------------------------------------------------------------------------
//
// @binaryset type
//
//--------------------------------------------------------------------------------------------------

#include "BinaryDecisionDiagram.h"

//--------------------------------------------------------------------------------------------------

class GGS_binaryset : public AC_GALGAS_root {
//--------------------------------- Private data members
  private: bool mIsValid ;
  private: BinaryDecisionDiagram mBDD ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }
  public: inline BinaryDecisionDiagram bddValue (void) const { return mBDD ; }

//--------------------------------- Default constructor
  public: GGS_binaryset (void) ;

//--------------------------------- Native constructor
  public: GGS_binaryset (const BinaryDecisionDiagram & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_binaryset init (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_binaryset extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_binaryset class_func_binarySetWithBit (const class GGS_uint & inOperand0,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_binarySetWithEqualComparison (const class GGS_uint & inOperand0,
                                                                              const class GGS_uint & inOperand1,
                                                                              const class GGS_uint & inOperand2,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_binarySetWithEqualToConstant (const class GGS_uint & inOperand0,
                                                                              const class GGS_uint & inOperand1,
                                                                              const class GGS_uint_36__34_ & inOperand2,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_binarySetWithGreaterOrEqualComparison (const class GGS_uint & inOperand0,
                                                                                       const class GGS_uint & inOperand1,
                                                                                       const class GGS_uint & inOperand2,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_binarySetWithGreaterOrEqualToConstant (const class GGS_uint & inOperand0,
                                                                                       const class GGS_uint & inOperand1,
                                                                                       const class GGS_uint_36__34_ & inOperand2,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_binarySetWithLowerOrEqualComparison (const class GGS_uint & inOperand0,
                                                                                     const class GGS_uint & inOperand1,
                                                                                     const class GGS_uint & inOperand2,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_binarySetWithLowerOrEqualToConstant (const class GGS_uint & inOperand0,
                                                                                     const class GGS_uint & inOperand1,
                                                                                     const class GGS_uint_36__34_ & inOperand2,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_binarySetWithNotEqualComparison (const class GGS_uint & inOperand0,
                                                                                 const class GGS_uint & inOperand1,
                                                                                 const class GGS_uint & inOperand2,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_binarySetWithNotEqualToConstant (const class GGS_uint & inOperand0,
                                                                                 const class GGS_uint & inOperand1,
                                                                                 const class GGS_uint_36__34_ & inOperand2,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_binarySetWithPredicateString (const class GGS_string & inOperand0,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_binarySetWithStrictGreaterComparison (const class GGS_uint & inOperand0,
                                                                                      const class GGS_uint & inOperand1,
                                                                                      const class GGS_uint & inOperand2,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_binarySetWithStrictGreaterThanConstant (const class GGS_uint & inOperand0,
                                                                                        const class GGS_uint & inOperand1,
                                                                                        const class GGS_uint_36__34_ & inOperand2,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_binarySetWithStrictLowerComparison (const class GGS_uint & inOperand0,
                                                                                    const class GGS_uint & inOperand1,
                                                                                    const class GGS_uint & inOperand2,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_binarySetWithStrictLowerThanConstant (const class GGS_uint & inOperand0,
                                                                                      const class GGS_uint & inOperand1,
                                                                                      const class GGS_uint_36__34_ & inOperand2,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_emptyBinarySet (LOCATION_ARGS) ;

  public: static class GGS_binaryset class_func_fullBinarySet (LOCATION_ARGS) ;

//--------------------------------- << and >> shift operators
  public: VIRTUAL_IN_DEBUG GGS_binaryset left_shift_operation (const GGS_uint inShiftOperand,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_binaryset left_shift_operation (const GGS_bigint inShiftOperand,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_binaryset right_shift_operation (const GGS_uint inShiftOperand,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG GGS_binaryset right_shift_operation (const GGS_bigint inShiftOperand,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GGS_binaryset operator_and (const GGS_binaryset & inOperand
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GGS_binaryset operator_or (const GGS_binaryset & inOperand
                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GGS_binaryset operator_xor (const GGS_binaryset & inOperand
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GGS_binaryset operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_binaryset & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods
  public: static void class_method_setAndTableSize (class GGS_uint constinArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public: static void class_method_setNodeTableSize (class GGS_uint constinArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_ITE (const class GGS_binaryset & constinOperand0,
                                                           const class GGS_binaryset & constinOperand1
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_accessibleStates (const class GGS_binaryset & constinOperand0,
                                                                        const class GGS_uint & constinOperand1
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_bigValueCount (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_binarySetByTranslatingFromIndex (const class GGS_uint & constinOperand0,
                                                                                       const class GGS_uint & constinOperand1
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_compressedStringValueList (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_ getter_compressedValueCount (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_containsValue (const class GGS_uint_36__34_ & constinOperand0,
                                                                const class GGS_uint & constinOperand1,
                                                                const class GGS_uint & constinOperand2
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_equalTo (const class GGS_binaryset & constinOperand0
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_existOnBitIndex (const class GGS_uint & constinOperand0
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_existOnBitIndexAndBeyond (const class GGS_uint & constinOperand0
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_existsOnBitRange (const class GGS_uint & constinOperand0,
                                                                        const class GGS_uint & constinOperand1
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_forAllOnBitIndex (const class GGS_uint & constinOperand0
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_forAllOnBitIndexAndBeyond (const class GGS_uint & constinOperand0
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_graphviz (const class GGS_stringlist & constinOperand0
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_graphvizDump (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_greaterOrEqualTo (const class GGS_binaryset & constinOperand0
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_implies (const class GGS_binaryset & constinOperand0
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEmpty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFull (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_lowerOrEqualTo (const class GGS_binaryset & constinOperand0
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_ getter_nodeCount (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_notEqualTo (const class GGS_binaryset & constinOperand0
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_predicateStringValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_print (const class GGS_stringlist & constinOperand0,
                                                          const class GGS_uintlist & constinOperand1
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_significantVariableCount (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_strictGreaterThan (const class GGS_binaryset & constinOperand0
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_strictLowerThan (const class GGS_binaryset & constinOperand0
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_stringValueList (const class GGS_uint & constinOperand0
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_stringValueListWithNameList (const class GGS_uint & constinOperand0,
                                                                                    const class GGS_stringlist & constinOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_swap_30__32__31_ (const class GGS_uint & constinOperand0,
                                                                        const class GGS_uint & constinOperand1,
                                                                        const class GGS_uint & constinOperand2
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_swap_31__30_ (const class GGS_uint & constinOperand0,
                                                                    const class GGS_uint & constinOperand1
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_swap_31__30__32_ (const class GGS_uint & constinOperand0,
                                                                        const class GGS_uint & constinOperand1,
                                                                        const class GGS_uint & constinOperand2
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_swap_31__32__30_ (const class GGS_uint & constinOperand0,
                                                                        const class GGS_uint & constinOperand1,
                                                                        const class GGS_uint & constinOperand2
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_swap_32__30__31_ (const class GGS_uint & constinOperand0,
                                                                        const class GGS_uint & constinOperand1,
                                                                        const class GGS_uint & constinOperand2
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_swap_32__31__30_ (const class GGS_uint & constinOperand0,
                                                                        const class GGS_uint & constinOperand1,
                                                                        const class GGS_uint & constinOperand2
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_transformedBy (const class GGS_uintlist & constinOperand0
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_transitiveClosure (const class GGS_uint & constinOperand0
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_transposedBy (const class GGS_uintlist & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_list getter_uint_36__34_ValueList (const class GGS_uint & constinOperand0
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_ getter_valueCount (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryset ;

//--------------------------------------------------------------------------------------------------
//   Phase 1: @data enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_data final : public cGenericAbstractEnumerator {
  public: DownEnumerator_data (const class GGS_data & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_uint current_data (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_uint current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_data final : public cGenericAbstractEnumerator {
  public: UpEnumerator_data (const class GGS_data & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_uint current_data (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_uint current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
//   @data type
//--------------------------------------------------------------------------------------------------

class GGS_data : public AC_GALGAS_root {
//--------------------------------- Private data members
  private: bool mIsValid ;
  private: U8Data mData ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }
  public: inline U8Data dataValue (void) const { return mData ; }

//--------------------------------- Default constructor
  public: GGS_data (void) ;

//--------------------------------- Native constructor
  public: GGS_data (const U8Data & inData) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_data init (Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_data extractObject (const GGS_object & inObject,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_data class_func_dataWithContentsOfFile (const class GGS_string & inOperand0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_data class_func_emptyData (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_data & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_appendByte (class GGS_uint constinArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_appendData (class GGS_data constinArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_appendShortBE (class GGS_uint constinArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_appendShortLE (class GGS_uint constinArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_appendUIntBE (class GGS_uint constinArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_appendUIntLE (class GGS_uint constinArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_appendUTF_38_String (class GGS_string constinArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_writeToExecutableFile (class GGS_string constinArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_writeToFile (class GGS_string constinArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_writeToFileWhenDifferentContents (class GGS_string constinArgument0,
                                                                         class GGS_bool & outArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_cStringRepresentation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Enumeration helper methods
  protected: void populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const ;

//--------------------------------- Friend
  friend class cEnumerator_data ;
  friend class UpEnumerator_data ;
  friend class DownEnumerator_data ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_data ;

//--------------------------------------------------------------------------------------------------
//
//   @filewrapper type
//
//--------------------------------------------------------------------------------------------------

class cRegularFileWrapper {
  public: const char * mName ;
  public: const char * mExtension ;
  public: const bool mIsTextFile ; // True: text file, false: binary file
  public: const uint32_t mFileLength ;
  public: const char * mContents ;

//--- Constructor
  public: cRegularFileWrapper (const char * inName,
                                const char * inExtension,
                                const bool inIsTextFile,
                                const uint32_t inFileLength,
                                const char * inContents) ;

//--- No copy
  private: cRegularFileWrapper (const cRegularFileWrapper &) ;
  private: cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;
} ;

//--------------------------------------------------------------------------------------------------

class cDirectoryWrapper {
  public: const char * mDirectoryName ;
  public: const uint32_t mFileCount ;
  public: const cRegularFileWrapper * * const mFiles ;
  public: const uint32_t mDirectoryCount ;
  public: const cDirectoryWrapper * * mDirectories ;

//--- Constructor
  public: cDirectoryWrapper (const char * inDirectoryName,
                              const uint32_t inFileCount,
                              const cRegularFileWrapper * * const inFiles,
                              const uint32_t inDirectoryCount,
                              const cDirectoryWrapper * * inDirectories) ;

//--- No copy
  private: cDirectoryWrapper (const cDirectoryWrapper &) ;
  private: cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_filewrapper : public AC_GALGAS_root {
//--------------------------------- Private data members
  private: const cDirectoryWrapper * mRootDirectoryPtr ;
  private: String mCurrentDirectory ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mRootDirectoryPtr ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mRootDirectoryPtr = nullptr ; }

//--------------------------------- Default constructor
  public: GGS_filewrapper (void) ;

//--------------------------------- Native constructor
  public: GGS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;

//--------------------------------- Handle copy
  public: GGS_filewrapper (const GGS_filewrapper & inSource) ;
  public: GGS_filewrapper & operator = (const GGS_filewrapper & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_filewrapper extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setCurrentDirectory (class GGS_string constinArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_absolutePathForPath (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_allBinaryFilePathes (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_allDirectoryPathes (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_allFilePathesWithExtension (const class GGS_string & constinOperand0
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_allTextFilePathes (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_data getter_binaryFileContentsAtPath (const class GGS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_binaryFilesAtPath (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_currentDirectory (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_directoriesAtPath (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_directoryExistsAtPath (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_fileExistsAtPath (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_textFileContentsAtPath (const class GGS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_textFilesAtPath (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapper ;

//--------------------------------------------------------------------------------------------------
//
//   @function type
//
//--------------------------------------------------------------------------------------------------

class C_galgas_function_descriptor ;

//--------------------------------------------------------------------------------------------------

class GGS_function : public AC_GALGAS_root {
//--------------------------------- Private data member
  private: const C_galgas_function_descriptor * mFunctionDescriptor ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mFunctionDescriptor ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mFunctionDescriptor = nullptr ; }
  public: VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }

//--------------------------------- Default constructor
  public: GGS_function (void) ;

//--------------------------------- Destructor (virtual in debug mode)
  public: virtual ~ GGS_function (void) ;

//--------------------------------- Handle copy
  public: GGS_function (const GGS_function & inSource) ;
  public: GGS_function & operator = (const GGS_function & inSource) ;

//--------------------------------- Native constructor
  public: GGS_function (const C_galgas_function_descriptor * inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_function extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionlist class_func_functionList (LOCATION_ARGS) ;

  public: static class GGS_function class_func_functionWithName (const class GGS_string & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_bool class_func_isFunctionDefined (const class GGS_string & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_function & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_typelist getter_formalParameterTypeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_object getter_invoke (const class GGS_objectlist & constinOperand0,
                                                           const class GGS_location & constinOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_name (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_type getter_resultType (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_function ;

//--------------------------------------------------------------------------------------------------
//
//   @object type
//
//--------------------------------------------------------------------------------------------------

class cPtr_object ;

//--------------------------------------------------------------------------------------------------

class GGS_object : public AC_GALGAS_root {
//--------------------------------- Private data member
  private: cPtr_object * mSharedObject ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedObject != nullptr ; }
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_object (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_object (AC_GALGAS_root * inObjectPointer
                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Destructor (virtual in debug mode)
  public: virtual ~ GGS_object (void) ;

//--------------------------------- Handle copy
  public: GGS_object (const GGS_object & inSource) ;
  public: GGS_object & operator = (const GGS_object & inSource) ;

//--------------------------------- Embedded Object
  public: const AC_GALGAS_root * embeddedObject (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_object extractObject (const GGS_object & inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_object & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_type getter_objectDynamicType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_type getter_objectStaticType (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_object ;

//--------------------------------------------------------------------------------------------------
//
//   @timer type
//
//--------------------------------------------------------------------------------------------------

class GGS_timer : public AC_GALGAS_root {
//--------------------------------- Private properties
  private: bool mIsValid ;
  private: Timer mTimer ;

//--------------------------------- Accessors
  public: inline bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GGS_timer (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_timer init (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_timer extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_timer class_func_start (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_resume (LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_stop (LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRunning (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_msFromStart (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_string (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_timer ;

//--------------------------------------------------------------------------------------------------
//
//   @type type
//
//--------------------------------------------------------------------------------------------------

class GGS_type : public AC_GALGAS_root {
//--------------------------------- Private data members
  private: const C_galgas_type_descriptor * mTypeDescriptor ;

//--------------------------------- Accessors
  public: inline bool isValid (void) const override { return nullptr != mTypeDescriptor ; }
  public: inline void drop (void) override { mTypeDescriptor = nullptr ; }
  public: inline const C_galgas_type_descriptor * typeValue (void) const { return mTypeDescriptor ; }

//--------------------------------- Default constructor
  public: GGS_type (void) ;

//--------------------------------- Destructor (virtual in debug mode)
  public: virtual ~ GGS_type (void) ;

//--------------------------------- Handle copy
  public: GGS_type (const GGS_type & inSource) ;
  public: GGS_type & operator = (const GGS_type & inSource) ;

//--------------------------------- Native constructor
  public: GGS_type (const C_galgas_type_descriptor * inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_type extractObject (const GGS_object & inObject,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typelist class_func_typeList (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_type & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasSuperclass (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_name (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_type getter_superclass (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_type ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @stringlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_stringlist final : public cGenericAbstractEnumerator {
  public: DownEnumerator_stringlist (const class GGS_stringlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_stringlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_stringlist final : public cGenericAbstractEnumerator {
  public: UpEnumerator_stringlist (const class GGS_stringlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_stringlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @stringlist list
//--------------------------------------------------------------------------------------------------

class GGS_stringlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_stringlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_stringlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_stringlist init (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_stringlist extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_stringlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_stringlist class_func_listWithValue (const class GGS_string & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_stringlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_stringlist add_operation (const GGS_stringlist & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_string constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_stringlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_stringlist ;
  friend class UpEnumerator_stringlist ;
  friend class DownEnumerator_stringlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lstringlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lstringlist final : public cGenericAbstractEnumerator {
  public: DownEnumerator_lstringlist (const class GGS_lstringlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lstringlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lstringlist final : public cGenericAbstractEnumerator {
  public: UpEnumerator_lstringlist (const class GGS_lstringlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lstringlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lstringlist list
//--------------------------------------------------------------------------------------------------

class GGS_lstringlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_lstringlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_lstringlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lstringlist init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lstringlist extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lstringlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_lstringlist class_func_listWithValue (const class GGS_lstring & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_lstringlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_lstringlist add_operation (const GGS_lstringlist & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_lstring constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_lstringlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_lstringlist ;
  friend class UpEnumerator_lstringlist ;
  friend class DownEnumerator_lstringlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lstringlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lbool struct
//
//--------------------------------------------------------------------------------------------------

class GGS_lbool : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_bool ;
  public: inline GGS_bool readProperty_bool (void) const {
    return mProperty_bool ;
  }

  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lbool (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBool (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_bool = inValue ;
  }

  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_lbool (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lbool (const GGS_bool & in_bool,
                     const GGS_location & in_location) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lbool init_21__21_ (const class GGS_bool & inOperand0,
                                         const class GGS_location & inOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lbool extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lbool class_func_new (const class GGS_bool & inOperand0,
                                                 const class GGS_location & inOperand1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lbool & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lbool ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @_32_stringlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator__32_stringlist final : public cGenericAbstractEnumerator {
  public: DownEnumerator__32_stringlist (const class GGS__32_stringlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GGS_string current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS__32_stringlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__32_stringlist final : public cGenericAbstractEnumerator {
  public: UpEnumerator__32_stringlist (const class GGS__32_stringlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GGS_string current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS__32_stringlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @2stringlist list
//--------------------------------------------------------------------------------------------------

class GGS__32_stringlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS__32_stringlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS__32_stringlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mValue_30_,
                                                 const class GGS_string & in_mValue_31_
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_stringlist init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_stringlist extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS__32_stringlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS__32_stringlist class_func_listWithValue (const class GGS_string & inOperand0,
                                                                    const class GGS_string & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS__32_stringlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS__32_stringlist add_operation (const GGS__32_stringlist & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_30_AtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_31_AtIndex (class GGS_string constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mValue_30_AtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mValue_31_AtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_stringlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_stringlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_stringlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS__32_stringlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator__32_stringlist ;
  friend class UpEnumerator__32_stringlist ;
  friend class DownEnumerator__32_stringlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_stringlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_functionlist final : public cGenericAbstractEnumerator {
  public: DownEnumerator_functionlist (const class GGS_functionlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_function current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_functionlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_functionlist final : public cGenericAbstractEnumerator {
  public: UpEnumerator_functionlist (const class GGS_functionlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_function current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_functionlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionlist list
//--------------------------------------------------------------------------------------------------

class GGS_functionlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_functionlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_functionlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_function & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionlist init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionlist extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_functionlist class_func_listWithValue (const class GGS_function & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_functionlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_function & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_functionlist add_operation (const GGS_functionlist & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_function constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_function constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_function & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_function & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_function & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_function constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_function & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_function & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_function getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_functionlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_functionlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_functionlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_functionlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_functionlist ;
  friend class UpEnumerator_functionlist ;
  friend class DownEnumerator_functionlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @luintlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_luintlist final : public cGenericAbstractEnumerator {
  public: DownEnumerator_luintlist (const class GGS_luintlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_luint current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_luintlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_luintlist final : public cGenericAbstractEnumerator {
  public: UpEnumerator_luintlist (const class GGS_luintlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_luint current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_luintlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @luintlist list
//--------------------------------------------------------------------------------------------------

class GGS_luintlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_luintlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_luintlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_luint & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_luintlist init (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_luintlist extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_luintlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_luintlist class_func_listWithValue (const class GGS_luint & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_luintlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_luint & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_luintlist add_operation (const GGS_luintlist & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_luint constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_luint constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_luint & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_luint & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_luint & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_luint constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_luint & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_luint & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luintlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luintlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luintlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_luintlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_luintlist ;
  friend class UpEnumerator_luintlist ;
  friend class DownEnumerator_luintlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_luintlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @luint struct
//
//--------------------------------------------------------------------------------------------------

class GGS_luint : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_uint ;
  public: inline GGS_uint readProperty_uint (void) const {
    return mProperty_uint ;
  }

  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_luint (void) ;

//--------------------------------- Property setters
  public: inline void setter_setUint (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_uint = inValue ;
  }

  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_luint (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_luint (const GGS_uint & in_uint,
                     const GGS_location & in_location) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_luint init_21__21_ (const class GGS_uint & inOperand0,
                                         const class GGS_location & inOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_luint extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_luint class_func_new (const class GGS_uint & inOperand0,
                                                 const class GGS_location & inOperand1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_luint & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_luint ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @objectlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_objectlist final : public cGenericAbstractEnumerator {
  public: DownEnumerator_objectlist (const class GGS_objectlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_object current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_objectlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_objectlist final : public cGenericAbstractEnumerator {
  public: UpEnumerator_objectlist (const class GGS_objectlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_object current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_objectlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @objectlist list
//--------------------------------------------------------------------------------------------------

class GGS_objectlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_objectlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_objectlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_object & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectlist init (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectlist extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_objectlist class_func_listWithValue (const class GGS_object & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_objectlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_object & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_objectlist add_operation (const GGS_objectlist & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_object constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_object constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_object & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_object & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_object & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_object constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_object & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_object & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_object getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_objectlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_objectlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_objectlist ;
  friend class UpEnumerator_objectlist ;
  friend class DownEnumerator_objectlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typelist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_typelist final : public cGenericAbstractEnumerator {
  public: DownEnumerator_typelist (const class GGS_typelist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_type current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typelist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_typelist final : public cGenericAbstractEnumerator {
  public: UpEnumerator_typelist (const class GGS_typelist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_type current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_typelist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typelist list
//--------------------------------------------------------------------------------------------------

class GGS_typelist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_typelist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_typelist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_type & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typelist init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typelist extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typelist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_typelist class_func_listWithValue (const class GGS_type & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_typelist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_type & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_typelist add_operation (const GGS_typelist & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_type constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_type constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_type & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_type & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_type & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_type constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_type & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_type & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_type getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typelist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typelist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typelist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_typelist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_typelist ;
  friend class UpEnumerator_typelist ;
  friend class DownEnumerator_typelist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typelist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @uintlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_uintlist final : public cGenericAbstractEnumerator {
  public: DownEnumerator_uintlist (const class GGS_uintlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_uint current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_uintlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_uintlist final : public cGenericAbstractEnumerator {
  public: UpEnumerator_uintlist (const class GGS_uintlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_uint current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_uintlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @uintlist list
//--------------------------------------------------------------------------------------------------

class GGS_uintlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_uintlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_uintlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_uint & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_uintlist init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_uintlist extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_uintlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_uintlist class_func_listWithValue (const class GGS_uint & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_uintlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_uint & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_uintlist add_operation (const GGS_uintlist & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_uint constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_uint constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_uint & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_uint & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_uint & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_uint constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_uint & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_uint & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_uintlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_uintlist ;
  friend class UpEnumerator_uintlist ;
  friend class DownEnumerator_uintlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uintlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @uint_36__34_list list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_uint_36__34_list final : public cGenericAbstractEnumerator {
  public: DownEnumerator_uint_36__34_list (const class GGS_uint_36__34_list & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_uint_36__34_ current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_uint_36__34_list_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_uint_36__34_list final : public cGenericAbstractEnumerator {
  public: UpEnumerator_uint_36__34_list (const class GGS_uint_36__34_list & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_uint_36__34_ current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_uint_36__34_list_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @uint64list list
//--------------------------------------------------------------------------------------------------

class GGS_uint_36__34_list : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_uint_36__34_list (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_uint_36__34_list (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_uint_36__34_ & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_uint_36__34_list init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_uint_36__34_list extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_uint_36__34_list class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_uint_36__34_list class_func_listWithValue (const class GGS_uint_36__34_ & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_uint_36__34_list inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_uint_36__34_ & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_uint_36__34_list add_operation (const GGS_uint_36__34_list & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_uint_36__34_ constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_uint_36__34_ constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_uint_36__34_ & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_uint_36__34_ & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_uint_36__34_ & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_uint_36__34_ constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_uint_36__34_ & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_uint_36__34_ & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_ getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_list getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_list getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint_36__34_list getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_uint_36__34_list_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_uint_36__34_list ;
  friend class UpEnumerator_uint_36__34_list ;
  friend class DownEnumerator_uint_36__34_list ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint_36__34_list ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bigintlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_bigintlist final : public cGenericAbstractEnumerator {
  public: DownEnumerator_bigintlist (const class GGS_bigintlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_bigint current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_bigintlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_bigintlist final : public cGenericAbstractEnumerator {
  public: UpEnumerator_bigintlist (const class GGS_bigintlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_bigint current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_bigintlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bigintlist list
//--------------------------------------------------------------------------------------------------

class GGS_bigintlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_bigintlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_bigintlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_bigint & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bigintlist init (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bigintlist extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bigintlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_bigintlist class_func_listWithValue (const class GGS_bigint & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_bigintlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_bigint & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_bigintlist add_operation (const GGS_bigintlist & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_bigint constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_bigint constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_bigint & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_bigint & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_bigint & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_bigint constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_bigint & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_bigint & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bigintlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bigintlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bigintlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_bigintlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_bigintlist ;
  friend class UpEnumerator_bigintlist ;
  friend class DownEnumerator_bigintlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bigintlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lbigintlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_lbigintlist final : public cGenericAbstractEnumerator {
  public: DownEnumerator_lbigintlist (const class GGS_lbigintlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lbigint current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lbigintlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lbigintlist final : public cGenericAbstractEnumerator {
  public: UpEnumerator_lbigintlist (const class GGS_lbigintlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lbigint current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_lbigintlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lbigintlist list
//--------------------------------------------------------------------------------------------------

class GGS_lbigintlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_lbigintlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_lbigintlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lbigint & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lbigintlist init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lbigintlist extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lbigintlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_lbigintlist class_func_listWithValue (const class GGS_lbigint & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_lbigintlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lbigint & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_lbigintlist add_operation (const GGS_lbigintlist & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lbigint constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lbigint constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lbigint & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lbigint & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lbigint & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GGS_lbigint constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lbigint & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lbigint & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lbigint getter_mValueAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lbigintlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lbigintlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lbigintlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_lbigintlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_lbigintlist ;
  friend class UpEnumerator_lbigintlist ;
  friend class DownEnumerator_lbigintlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lbigintlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lsint struct
//
//--------------------------------------------------------------------------------------------------

class GGS_lsint : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_sint mProperty_sint ;
  public: inline GGS_sint readProperty_sint (void) const {
    return mProperty_sint ;
  }

  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lsint (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSint (const GGS_sint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_sint = inValue ;
  }

  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_lsint (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lsint (const GGS_sint & in_sint,
                     const GGS_location & in_location) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lsint init_21__21_ (const class GGS_sint & inOperand0,
                                         const class GGS_location & inOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lsint extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lsint class_func_new (const class GGS_sint & inOperand0,
                                                 const class GGS_location & inOperand1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lsint & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lsint ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lsint_36__34_ struct
//
//--------------------------------------------------------------------------------------------------

class GGS_lsint_36__34_ : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_sint_36__34_ mProperty_sint_36__34_ ;
  public: inline GGS_sint_36__34_ readProperty_sint_36__34_ (void) const {
    return mProperty_sint_36__34_ ;
  }

  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lsint_36__34_ (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSint_36__34_ (const GGS_sint_36__34_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_sint_36__34_ = inValue ;
  }

  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_lsint_36__34_ (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lsint_36__34_ (const GGS_sint_36__34_ & in_sint_36__34_,
                             const GGS_location & in_location) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lsint_36__34_ init_21__21_ (const class GGS_sint_36__34_ & inOperand0,
                                                 const class GGS_location & inOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lsint_36__34_ extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lsint_36__34_ class_func_new (const class GGS_sint_36__34_ & inOperand0,
                                                         const class GGS_location & inOperand1,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lsint_36__34_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lsint_36__34_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @luint_36__34_ struct
//
//--------------------------------------------------------------------------------------------------

class GGS_luint_36__34_ : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint_36__34_ mProperty_uint_36__34_ ;
  public: inline GGS_uint_36__34_ readProperty_uint_36__34_ (void) const {
    return mProperty_uint_36__34_ ;
  }

  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_luint_36__34_ (void) ;

//--------------------------------- Property setters
  public: inline void setter_setUint_36__34_ (const GGS_uint_36__34_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_uint_36__34_ = inValue ;
  }

  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_luint_36__34_ (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_luint_36__34_ (const GGS_uint_36__34_ & in_uint_36__34_,
                             const GGS_location & in_location) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_luint_36__34_ init_21__21_ (const class GGS_uint_36__34_ & inOperand0,
                                                 const class GGS_location & inOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_luint_36__34_ extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_luint_36__34_ class_func_new (const class GGS_uint_36__34_ & inOperand0,
                                                         const class GGS_location & inOperand1,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_luint_36__34_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_luint_36__34_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @range struct
//
//--------------------------------------------------------------------------------------------------

class GGS_range : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_start ;
  public: inline GGS_uint readProperty_start (void) const {
    return mProperty_start ;
  }

  public: GGS_uint mProperty_length ;
  public: inline GGS_uint readProperty_length (void) const {
    return mProperty_length ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_range (void) ;

//--------------------------------- Property setters
  public: inline void setter_setStart (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_start = inValue ;
  }

  public: inline void setter_setLength (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_length = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_range (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_range (const GGS_uint & in_start,
                     const GGS_uint & in_length) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_range init_21__21_ (const class GGS_uint & inOperand0,
                                         const class GGS_uint & inOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_range extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_range class_func_new (const class GGS_uint & inOperand0,
                                                 const class GGS_uint & inOperand1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_range & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_range ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: bigint? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_bigint_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_bigint mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_bigint_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_bigint_3F_ (const GGS_bigint & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_bigint_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_bigint unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bigint_3F_ extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bigint_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bigint_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_functionlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_function mProperty_mValue ;
  public: inline GGS_function readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_functionlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue (const GGS_function & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_functionlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_functionlist_2E_element (const GGS_function & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionlist_2E_element init_21_ (const class GGS_function & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionlist_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionlist_2E_element class_func_new (const class GGS_function & inOperand0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionlist_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionlist_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @luintlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_luintlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_luint mProperty_mValue ;
  public: inline GGS_luint readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_luintlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_luintlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_luintlist_2E_element (const GGS_luint & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_luintlist_2E_element init_21_ (const class GGS_luint & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_luintlist_2E_element extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_luintlist_2E_element class_func_new (const class GGS_luint & inOperand0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_luintlist_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_luintlist_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @objectlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_objectlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_object mProperty_mValue ;
  public: inline GGS_object readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_objectlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue (const GGS_object & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_objectlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_objectlist_2E_element (const GGS_object & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_objectlist_2E_element init_21_ (const class GGS_object & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_objectlist_2E_element extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_objectlist_2E_element class_func_new (const class GGS_object & inOperand0,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_objectlist_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectlist_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @stringlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_stringlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mValue ;
  public: inline GGS_string readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_stringlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_stringlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_stringlist_2E_element (const GGS_string & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_stringlist_2E_element init_21_ (const class GGS_string & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_stringlist_2E_element extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_stringlist_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_stringlist_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringlist_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typelist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typelist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_type mProperty_mValue ;
  public: inline GGS_type readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typelist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue (const GGS_type & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typelist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typelist_2E_element (const GGS_type & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typelist_2E_element init_21_ (const class GGS_type & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typelist_2E_element extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typelist_2E_element class_func_new (const class GGS_type & inOperand0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typelist_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typelist_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @uintlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_uintlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mValue ;
  public: inline GGS_uint readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_uintlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_uintlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_uintlist_2E_element (const GGS_uint & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_uintlist_2E_element init_21_ (const class GGS_uint & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_uintlist_2E_element extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_uintlist_2E_element class_func_new (const class GGS_uint & inOperand0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_uintlist_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uintlist_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @uint_36__34_list_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_uint_36__34_list_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint_36__34_ mProperty_mValue ;
  public: inline GGS_uint_36__34_ readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_uint_36__34_list_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue (const GGS_uint_36__34_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_uint_36__34_list_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_uint_36__34_list_2E_element (const GGS_uint_36__34_ & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_uint_36__34_list_2E_element init_21_ (const class GGS_uint_36__34_ & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_uint_36__34_list_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_uint_36__34_list_2E_element class_func_new (const class GGS_uint_36__34_ & inOperand0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_uint_36__34_list_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint_36__34_list_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @bigintlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_bigintlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_mValue ;
  public: inline GGS_bigint readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bigintlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_bigintlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bigintlist_2E_element (const GGS_bigint & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bigintlist_2E_element init_21_ (const class GGS_bigint & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bigintlist_2E_element extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bigintlist_2E_element class_func_new (const class GGS_bigint & inOperand0,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bigintlist_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bigintlist_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @_32_stringlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS__32_stringlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mValue_30_ ;
  public: inline GGS_string readProperty_mValue_30_ (void) const {
    return mProperty_mValue_30_ ;
  }

  public: GGS_string mProperty_mValue_31_ ;
  public: inline GGS_string readProperty_mValue_31_ (void) const {
    return mProperty_mValue_31_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS__32_stringlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue_30_ (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_30_ = inValue ;
  }

  public: inline void setter_setMValue_31_ (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_31_ = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS__32_stringlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS__32_stringlist_2E_element (const GGS_string & in_mValue_30_,
                                         const GGS_string & in_mValue_31_) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_stringlist_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                             const class GGS_string & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_stringlist_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS__32_stringlist_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS__32_stringlist_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_stringlist_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lstring struct
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_string ;
  public: inline GGS_string readProperty_string (void) const {
    return mProperty_string ;
  }

  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lstring (void) ;

//--------------------------------- Property setters
  public: inline void setter_setString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_string = inValue ;
  }

  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_lstring (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lstring (const GGS_string & in_string,
                       const GGS_location & in_location) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lstring init_21__21_ (const class GGS_string & inOperand0,
                                           const class GGS_location & inOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lstring extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lstring class_func_new (const class GGS_string & inOperand0,
                                                   const class GGS_location & inOperand1,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lstring & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lstring ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lbigint struct
//
//--------------------------------------------------------------------------------------------------

class GGS_lbigint : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_bigint ;
  public: inline GGS_bigint readProperty_bigint (void) const {
    return mProperty_bigint ;
  }

  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lbigint (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBigint (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_bigint = inValue ;
  }

  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_lbigint (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lbigint (const GGS_bigint & in_bigint,
                       const GGS_location & in_location) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lbigint init_21__21_ (const class GGS_bigint & inOperand0,
                                           const class GGS_location & inOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lbigint extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lbigint class_func_new (const class GGS_bigint & inOperand0,
                                                   const class GGS_location & inOperand1,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lbigint & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lbigint ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lchar struct
//
//--------------------------------------------------------------------------------------------------

class GGS_lchar : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_char mProperty_char ;
  public: inline GGS_char readProperty_char (void) const {
    return mProperty_char ;
  }

  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lchar (void) ;

//--------------------------------- Property setters
  public: inline void setter_setChar (const GGS_char & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_char = inValue ;
  }

  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_lchar (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lchar (const GGS_char & in_char,
                     const GGS_location & in_location) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lchar init_21__21_ (const class GGS_char & inOperand0,
                                         const class GGS_location & inOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lchar extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lchar class_func_new (const class GGS_char & inOperand0,
                                                 const class GGS_location & inOperand1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lchar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lchar ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ldouble struct
//
//--------------------------------------------------------------------------------------------------

class GGS_ldouble : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_double mProperty_double ;
  public: inline GGS_double readProperty_double (void) const {
    return mProperty_double ;
  }

  public: GGS_location mProperty_location ;
  public: inline GGS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ldouble (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDouble (const GGS_double & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_double = inValue ;
  }

  public: inline void setter_setLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_ldouble (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ldouble (const GGS_double & in_double,
                       const GGS_location & in_location) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ldouble init_21__21_ (const class GGS_double & inOperand0,
                                           const class GGS_location & inOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ldouble extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ldouble class_func_new (const class GGS_double & inOperand0,
                                                   const class GGS_location & inOperand1,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ldouble & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ldouble ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lstringlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_lstringlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mValue ;
  public: inline GGS_lstring readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lstringlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_lstringlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lstringlist_2E_element (const GGS_lstring & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lstringlist_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lstringlist_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lstringlist_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lstringlist_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lstringlist_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lbigintlist_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_lbigintlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lbigint mProperty_mValue ;
  public: inline GGS_lbigint readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lbigintlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_lbigintlist_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lbigintlist_2E_element (const GGS_lbigint & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lbigintlist_2E_element init_21_ (const class GGS_lbigint & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_lbigintlist_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_lbigintlist_2E_element class_func_new (const class GGS_lbigint & inOperand0,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lbigintlist_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lbigintlist_2E_element ;

//--------------------------------------------------------------------------------------------------

#include "cCollectionElement.h"

//--------------------------------------------------------------------------------------------------

class cMapElement : public cCollectionElement {
//--- Attribut
  public: GGS_lstring mProperty_lkey ;

//--- Default constructor
  public: cMapElement (const GGS_lstring & inLKey
                       COMMA_LOCATION_ARGS) ;

//--- No copy
  private: cMapElement (const cMapElement &) ;
  private: cMapElement & operator = (const cMapElement &) ;
} ;

//--------------------------------------------------------------------------------------------------

#include "cSortedListElement.h"
#include "capSortedListElement.h"
#include "C_galgas_function_descriptor.h"
#include "cObjectArray.h"


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2
