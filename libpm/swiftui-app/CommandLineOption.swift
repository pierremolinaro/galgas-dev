//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 07/01/2023.
//--------------------------------------------------------------------------------------------------

import Foundation
import SwiftUI

//--------------------------------------------------------------------------------------------------

struct CommandLineOption  {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  let domainName : String
  let type : OptionType
  let identifier : String
  let commandChar : String // Empty string, or one character string
  let commandString : String
  let comment : String

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  enum OptionType {
    case bool
    case uint
    case string
    case stringList
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var view : some View {
    switch self.type {
    case .bool : LabeledContent (self.comment) { EmptyView () }
    case .uint : LabeledContent (self.comment) { EmptyView () }
    case .string : LabeledContent (self.comment) { EmptyView () }
    case .stringList : LabeledContent (self.comment) { EmptyView () }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
