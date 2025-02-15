//
//  GGS_Tokenizer_Protocol.swift
//  essai-editeur-texte-swift
//
//  Created by Pierre Molinaro on 08/01/2023.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

@MainActor protocol SWIFT_Tokenizer_Protocol : AnyObject {

  func set (sourceString inString : String, location inLocation : Int, templateDelimiterIndex inIndex : Int?)

  var currentLocation : Int { get }

  func popupListData () -> [[UInt16]]

  var font : EBPreferenceProperty <NSFont> { get }

  var lineHeight : EBPreferenceProperty <Int> { get }

  func isTemplateLexique () -> Bool
  
  func lexiqueIdentifier () -> String

  func styleCount () -> UInt8

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8

  func styleNameFor (styleIndex inIndex : UInt8) -> String

  func color (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <NSColor>

  func bold (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <Bool>

  func italic (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <Bool>

  func tabItemTitle () -> String

  func parseLexicalTokenForLexicalColoring () -> SWIFT_Token

  func attributes (fromStyleIndex inStyleIndex : UInt8) -> [NSAttributedString.Key : Any]

  func blockComment () -> String

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool

  func indexingTitles () -> [String]
}

//--------------------------------------------------------------------------------------------------
