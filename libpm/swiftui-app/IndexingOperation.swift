//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 18/01/2026.
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

nonisolated final class IndexingOperation : Operation, @unchecked Sendable {

  private let sourceURL : URL
  private let compilerToolURL : URL
  private let indexFileURL : URL

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (sourceURL inSourceURL : URL,
        compilerToolURL inCompilerToolURL : URL,
        indexFileURL inIndexFileURL : URL) {
    self.sourceURL = inSourceURL
    self.compilerToolURL = inCompilerToolURL
    self.indexFileURL = inIndexFileURL
    super.init ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  nonisolated override func main () {
  //--- Command line tool does actually exist ?
//    if !self.compilerToolURL.is {
    //--- Build argument array
      var arguments = [String] ()
      arguments.append (self.sourceURL.path ())
      arguments.append ("--mode=indexing:" + self.indexFileURL.path())
    //--- Create task
      let task = Process ()
      task.launchPath = self.compilerToolURL.path ()
      task.arguments = arguments
    //--- Start task
      try? task.run ()
    //--- Wait the task is completed
      task.waitUntilExit ()
//    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
