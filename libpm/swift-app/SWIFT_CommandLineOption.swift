//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//
//  Created by Pierre Molinaro on 07/01/2023.
//
//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------

struct SWIFT_CommandLineOption {
  let domainName : String
  let type : OptionType
  let identifier : String
  let commandChar : String // Empty string, or one character string
  let commandString : String
  let comment : String

  enum OptionType {
    case bool
    case uint
    case string
    case stringList
  }
}

//--------------------------------------------------------------------------------------------------
