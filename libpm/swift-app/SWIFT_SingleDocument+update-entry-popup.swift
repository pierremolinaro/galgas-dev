//
//  Created by Pierre Molinaro on 08/10/2023.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

extension SWIFT_SingleDocument {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateEntryPopUpButtons (_ inPopupListData : [[UInt16]]) {
    let popupListData = inPopupListData.sorted { $0.count > $1.count }
    let defaultAttributes  : [NSAttributedString.Key : Any] = [.font : NSFont.systemFont (ofSize: 11.0)]
    let specialAttributes  : [NSAttributedString.Key : Any] = [.font : NSFont.boldSystemFont (ofSize: 11.0)]
    var menuItemList = [(NSAttributedString, Int)] ()
    var tokenWithRangeIndex = 0
    while tokenWithRangeIndex < self.mTokenRangeArray.count {
      var popUpDataListIndex = 0
      var found = false
      while !found, popUpDataListIndex < popupListData.count {
        let popUpData = popupListData [popUpDataListIndex]
        popUpDataListIndex += 1
        var matched = true
        var idx = 1
        var testedTokenRangeIndex = tokenWithRangeIndex
        while matched, idx < popUpData.count {
          matched = testedTokenRangeIndex < self.mTokenRangeArray.count
          if matched {
            matched = self.mTokenRangeArray [testedTokenRangeIndex].tokenCode == popUpData [idx]
          }
          idx += 2
          testedTokenRangeIndex += 1
        }
        if matched {
          found = true
          var title = ""
          idx = 1
          testedTokenRangeIndex = tokenWithRangeIndex
          let displayFlags = popUpData [0]
          while idx < popUpData.count {
            let r = self.mTokenRangeArray [tokenWithRangeIndex].range
            let s = self.string.nsSubstring (with: r)
            title += " " + s
            idx += 2
            tokenWithRangeIndex += 1
          }
          let at = NSAttributedString (
            string: title,
            attributes: (displayFlags == 0) ? defaultAttributes : specialAttributes
          )
          menuItemList.append ((at, self.mTokenRangeArray [testedTokenRangeIndex].range.location))
        }
      }
      tokenWithRangeIndex += 1
    }
    var packingNeeded = false
    for possibleDisplayDescriptor in self.mDisplayDescriptors {
      if let displayDescriptor = possibleDisplayDescriptor.possibleElement {
        displayDescriptor.populateEntryPopUpButton (with: menuItemList)
      }else{
        packingNeeded = true
      }
    }
    if packingNeeded {
      let descriptorArray = self.mDisplayDescriptors
      self.mDisplayDescriptors.removeAll ()
      for possibleDisplayDescriptor in descriptorArray {
        if possibleDisplayDescriptor.possibleElement != nil {
          self.mDisplayDescriptors.append (possibleDisplayDescriptor)
        }
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
