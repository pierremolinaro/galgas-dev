//
//  GGS_Token.swift
//  essai-editeur-texte-swift
//
//  Created by Pierre Molinaro on 14/01/2023.
//
//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------

struct SWIFT_Token : Equatable {
  let range : NSRange
  let tokenCode : UInt16
  let templateDelimiterIndex : Int?
}

//--------------------------------------------------------------------------------------------------
