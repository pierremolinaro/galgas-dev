//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 08/08/2025.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

extension Color : @preconcurrency @retroactive RawRepresentable {
  public typealias RawValue = String

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public var rawValue : String {
    let nsColor = NSColor (self)
    let rgbColor = nsColor.usingColorSpace (.genericRGB)!
    let red = rgbColor.redComponent
    let green = rgbColor.greenComponent
    let blue = rgbColor.blueComponent
    let alpha = rgbColor.alphaComponent
    return "\(red) \(green) \(blue) \(alpha)"
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  nonisolated public init? (rawValue inRawValue : String) {
    let components = inRawValue.split (separator: " ")
    if components.count == 4,
       let red = Double (components[0]),
       let green = Double (components[1]),
       let blue = Double (components[2]),
       let opacity = Double (components[3]) {
      self.init (red: red, green: green, blue: blue, opacity: opacity)
    }else{
      return nil
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
