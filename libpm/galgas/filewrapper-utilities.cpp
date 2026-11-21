//--------------------------------------------------------------------------------------------------
//
//  21 november 2026, ..., 2026Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "filewrapper-utilities.h"

//--------------------------------------------------------------------------------------------------

RegularFileWrapper::RegularFileWrapper (const char * inName,
                                        const char * inExtension,
                                        const bool inIsTextFile,
                                        const uint32_t inFileLength,
                                        const char * inContents) :
mName (inName),
mExtension (inExtension),
mIsTextFile (inIsTextFile),
mFileLength (inFileLength),
mContents (inContents) {
}

//--------------------------------------------------------------------------------------------------

DirectoryWrapper::DirectoryWrapper (const char * inDirectoryName,
                                    const uint32_t inFileCount,
                                    const RegularFileWrapper * * const inFiles,
                                    const uint32_t inDirectoryCount,
                                    const DirectoryWrapper * * inDirectories) :
mDirectoryName (inDirectoryName),
mFileCount (inFileCount),
mFiles (inFiles),
mDirectoryCount (inDirectoryCount),
mDirectories (inDirectories) {
}

//--------------------------------------------------------------------------------------------------
