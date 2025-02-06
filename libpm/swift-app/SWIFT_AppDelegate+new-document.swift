//
//  SWIFT_AppDelegate+new-document.swift
//  galgas-ide
//
//  Created by Pierre Molinaro on 15/12/2024.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------
// SWIFT_AppDelegate extension: new document
//--------------------------------------------------------------------------------------------------

extension SWIFT_AppDelegate  {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @IBAction func newDocument (_ inUnusedSender : Any?) {
    let extensions = SWIFT_DocumentController.supportedDocumentExtensions
    let savePanel = NSSavePanel ()
    let newDocumentTypePopUpButton = AutoLayoutPopUpButton (size: .regular)
    for documentExtension in extensions {
      _ = newDocumentTypePopUpButton.appendItem (
        title: documentExtension,
        menuItemActionTarget: self,
        menuItemActionSelector: #selector (Self.changeNewDocumentTypeAction (_:)),
        represendedObject: savePanel
      )
    }
  //--- Present save panel
    if extensions.count > 0 {
      savePanel.allowedFileTypes = [extensions [0]]
    }
    savePanel.allowsOtherFileTypes = false
    savePanel.canSelectHiddenExtension = true

    let newDocumentAccessoryView = AutoLayoutHorizontalStackView ().set (margins: .regular)
    _ = newDocumentAccessoryView.appendFlexibleSpace ()
      .appendView (newDocumentTypePopUpButton)
      .appendFlexibleSpace ()
    newDocumentAccessoryView.computeSimpleLayout (withFrame: NSRect (origin: .zero, size: newDocumentAccessoryView.smallestSize))

    savePanel.accessoryView = newDocumentAccessoryView.cocoaView
    let result = savePanel.runModal ()
    if result == .OK, let url = savePanel.url  {
      let emptyData = Data ()
      do{
        try emptyData.write (to: url)
        let dc = NSDocumentController.shared
        dc.openDocument (withContentsOf: url, display: true) { (_ : NSDocument?, _ : Bool, _ : Error?) in }
      }catch (let error) {
        NSApp.presentError (error)
      }
    }
    savePanel.accessoryView = nil
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @objc private func changeNewDocumentTypeAction (_ inSender : NSMenuItem) {
    if let infoDictionary = Bundle.main.infoDictionary,
       let allDocumentTypes = infoDictionary ["CFBundleDocumentTypes"] as? [NSDictionary],
       let savePanel = inSender.representedObject as? NSSavePanel {
      let docTypeDict = allDocumentTypes [inSender.tag]
      if let selectedExtension = docTypeDict ["CFBundleTypeExtensions"] as? String {
        savePanel.allowedFileTypes = [selectedExtension]
      }else if let documentTypeExtensions = docTypeDict ["CFBundleTypeExtensions"] as? [String] {
        let selectedExtension = documentTypeExtensions [0]
        savePanel.allowedFileTypes = [selectedExtension]
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
