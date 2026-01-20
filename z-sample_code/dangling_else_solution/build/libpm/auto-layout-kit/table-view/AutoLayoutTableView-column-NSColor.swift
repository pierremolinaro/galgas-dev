//
//  AutoLayoutTableView-column-NSColor.swift
//  ElCanari
//
//  Created by Pierre Molinaro on 01/01/2022.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

extension AutoLayoutTableView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func addColumn_NSColor (valueGetterDelegate inGetterDelegate : @escaping (_ inRow : Int) -> NSColor?,
                          valueSetterDelegate _ : Optional < (_ inRow : Int, _ inNewValue : NSColor) -> Void >,
                          sortDelegate _ : Optional < (_ inAscending : Bool) -> Void>,
                          title inTitle : String,
                          minWidth inMinWidth : Int,
                          maxWidth inMaxWidth : Int,
                          headerAlignment inHeaderAlignment : NSTextAlignment,
                          contentAlignment inContentAlignment : NSTextAlignment) {
    let column = InternalColorValueTableColumn (
      title: inTitle,
      minWidth: inMinWidth,
      maxWidth: inMaxWidth,
      headerAlignment: inHeaderAlignment,
      contentAlignment: inContentAlignment,
      valueGetterDelegate: inGetterDelegate
    )
  //--- Add Column
    self.appendTableColumn (column)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
// InternalColorValueTableColumn
//--------------------------------------------------------------------------------------------------

fileprivate final class InternalColorValueTableColumn : AutoLayoutTableColumn {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mValueGetterDelegate : (_ inRow : Int) -> NSColor?

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // INIT
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (title inTitle : String,
        minWidth inMinWidth : Int,
        maxWidth inMaxWidth : Int,
        headerAlignment inHeaderAlignment : NSTextAlignment,
        contentAlignment inContentAlignment : NSTextAlignment,
        valueGetterDelegate inGetterDelegate : @escaping (_ inRow : Int) -> NSColor?) {
    self.mValueGetterDelegate = inGetterDelegate
    super.init (
      sortDelegate: nil,
      title: inTitle,
      minWidth: inMinWidth,
      maxWidth: inMaxWidth,
      headerAlignment: inHeaderAlignment,
      contentAlignment: inContentAlignment
    )
    self.isEditable = false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  required init (coder inCoder : NSCoder) {
    fatalError ("init(coder:) has not been implemented")
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @MainActor override func configureTableCellView (forRowIndex inRowIndex : Int) -> NSView? {
   return nil
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
