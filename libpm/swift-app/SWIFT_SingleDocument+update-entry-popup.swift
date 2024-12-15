//
//  Created by Pierre Molinaro on 08/10/2023.
//
//--------------------------------------------------------------------------------------------------

import AppKit

//--------------------------------------------------------------------------------------------------

extension SWIFT_SingleDocument {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateEntryPopUpButtons (_ inPopupListData : [[UInt16]]) {
    let defaultAttributes  : [NSAttributedString.Key : Any] = [.font : NSFont.systemFont (ofSize: 11.0)]
    let specialAttributes  : [NSAttributedString.Key : Any] = [.font : NSFont.boldSystemFont (ofSize: 11.0)]
    var menuItemList = [(NSAttributedString, Int)] ()
    var tokenWithRangeIndex = 0
    while tokenWithRangeIndex < self.mTokenRangeArray.count {
      var popUpDataListIndex = 0
      var found = false
      while !found, popUpDataListIndex < inPopupListData.count {
        let popUpData = inPopupListData [popUpDataListIndex]
        popUpDataListIndex += 1
        var matched = true
        var idx = 1
        var testedTokenRangeIndex = tokenWithRangeIndex
        while matched, idx < popUpData.count, testedTokenRangeIndex < self.mTokenRangeArray.count {
          matched = self.mTokenRangeArray [testedTokenRangeIndex].tokenCode == popUpData [idx]
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
            let r = self.mTokenRangeArray [testedTokenRangeIndex].range
            let s = (self.mTextStorage.string as NSString).substring (with: r)
            title += " " + s
            idx += 2
            testedTokenRangeIndex += 1
          }
          //Swift.print ("Entry \(title)")
          let at = NSAttributedString (string: title, attributes: (displayFlags == 0) ? defaultAttributes : specialAttributes)
          menuItemList.append ((at, self.mTokenRangeArray [tokenWithRangeIndex].range.location))
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
//    for description : [UInt16] in inPopupListData {
//      let tokenCount = description.count
//      for tokenIndex in 0 ..< tokenCount {
//        OC_Token * token = [inTokenArray objectAtIndex:tokenIndex] ;
//        const NSUInteger terminal = token.tokenCode ;
//        // printf ("terminal %u\n", terminal) ;
//        BOOL found = NO ;
//        NSUInteger idx = 0 ;
//        NSUInteger labelLength = 0 ;
//        const UInt16 * p = popUpListData [idx] ;
//        while ((p != NULL) && ! found) {
//          p++ ; // Pass display flags
//          if (*p == terminal) {
//            found = YES ;
//            p += 2 ;
//            labelLength = 0 ;
//            while ((*p != 0) && found) {
//              labelLength ++ ;
//              found = ((tokenIndex+labelLength) < tokenCount) && ([[inTokenArray objectAtIndex:tokenIndex+labelLength] tokenCode] == *p) ;
//              p += 2 ;
//            }
//          }else{
//            idx ++ ;
//            p = popUpListData [idx] ;
//          }
//        }
//        if (found) {
//          p = popUpListData [idx] ;
//          const UInt16 displayFlags = *p ;
//          p += 2 ; // Goto display strip description
//          NSMutableString * title = [NSMutableString new] ;
//          [title appendString:@" "] ;
//          for (NSUInteger k=0 ; k<=labelLength ; k++) {
//            const UInt16 stripDescription = *p ;
//            if (stripDescription != 0xFFFF) {
//              NSRange range = [[inTokenArray objectAtIndex:tokenIndex+k] range] ;
//              if (stripDescription != 0) {
//                const NSUInteger leadingStrip = stripDescription >> 4 ;
//                if (leadingStrip < range.length) {
//                  range.location += leadingStrip ;
//                  range.length -= leadingStrip ;
//                }else{
//                  range.length = 0 ;
//                }
//                const NSUInteger tailStrip = stripDescription & 15 ;
//                if (tailStrip < range.length) {
//                  range.length -= tailStrip ;
//                }else{
//                  range.length = 0 ;
//                }
//              }
//              if (k > 0) {
//                [title appendString:@" "] ;
//              }
//              [title appendString:[mSourceString substringWithRange:range]] ;
//            }
//            p += 2 ;
//          }
//          NSMenuItem * item = [[NSMenuItem alloc]
//            initWithTitle:@""
//            action:NULL
//            keyEquivalent:@""
//          ] ;
//          if (displayFlags == 0) {
//            [item setAttributedTitle:[[NSAttributedString alloc]
//              initWithString:title
//              attributes:defaultAttributes
//            ]] ;
//          }else{
//            NSMutableAttributedString * s = prefixString.mutableCopy ;
//            [s appendAttributedString:[[NSAttributedString alloc]
//              initWithString:title
//              attributes:specialAttributes
//            ]] ;
//            [item setAttributedTitle:s] ;
//          }
//          [item setTag:(NSInteger) [[inTokenArray objectAtIndex:tokenIndex] range].location] ;
//          [menu addItem:item] ;
//          tokenIndex += labelLength ;
//        }
//      }
//    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
