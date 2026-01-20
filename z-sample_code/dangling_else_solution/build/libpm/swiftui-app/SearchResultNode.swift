//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 18/01/2026.
//--------------------------------------------------------------------------------------------------

import Foundation
import Combine

//--------------------------------------------------------------------------------------------------

class SearchResultNode : Identifiable, ObservableObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let id : UUID = UUID ()
  let fileName : String

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private(set) var mEntries : [SearchResultItem]
  @Published var mIsExpanded : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (fileName inFileName : String, entries inEntries : [SearchResultItem]) {
    self.fileName = inFileName
    self.mEntries = inEntries
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
