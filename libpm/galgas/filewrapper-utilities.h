//--------------------------------------------------------------------------------------------------
//
//  21 november 2026, ..., 2026Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include <stdint.h>

//--------------------------------------------------------------------------------------------------

class RegularFileWrapper final {
  public: const char * mName ;
  public: const char * mExtension ;
  public: const bool mIsTextFile ; // True: text file, false: binary file
  public: const uint32_t mFileLength ;
  public: const char * mContents ;

//--- Constructor
  public: RegularFileWrapper (const char * inName,
                              const char * inExtension,
                              const bool inIsTextFile,
                              const uint32_t inFileLength,
                              const char * inContents) ;

//--- No copy
  private: RegularFileWrapper (const RegularFileWrapper &) = delete ;
  private: RegularFileWrapper & operator = (const RegularFileWrapper &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class DirectoryWrapper final {
  public: const char * mDirectoryName ;
  public: const uint32_t mFileCount ;
  public: const RegularFileWrapper * * const mFiles ;
  public: const uint32_t mDirectoryCount ;
  public: const DirectoryWrapper * * mDirectories ;

//--- Constructor
  public: DirectoryWrapper (const char * inDirectoryName,
                            const uint32_t inFileCount,
                            const RegularFileWrapper * * const inFiles,
                            const uint32_t inDirectoryCount,
                            const DirectoryWrapper * * inDirectories) ;

//--- No copy
  private: DirectoryWrapper (const DirectoryWrapper &) = delete ;
  private: DirectoryWrapper & operator = (const DirectoryWrapper &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
