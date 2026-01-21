//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 18/01/2026.
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

extension ProjectDocumentView {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func performSearch () {
    if !self.mSearchString.isEmpty {
      self.mSearchMessage = "Searching…"
      self.mSelectedSearchResultID = nil
      self.mSearchResultSections.removeAll ()
      self.mSearchResults.removeAll ()
      self.mRootDirectoryNode.saveAllEditedFiles ()
      self.mProjectDocumentSaveScheduler.saveProjectDocument {
      //--- Search in project file
        self.search (inFileURL: self.mProjectFileURL, fileNodeID: nil)
      //---
        let fm = FileManager ()
        let directoryURL = self.mProjectFileURL.deletingLastPathComponent ().appending (path: "sources")
        if let subpaths = try? fm.subpathsOfDirectory (atPath: directoryURL.path()) {
          for subpath in subpaths.sorted () {
            let url = directoryURL.appendingPathComponent (subpath)
            if projectFileExtensions.contains (url.pathExtension.lowercased()) {
              self.search (inFileURL: url, fileNodeID: SourceFileNodeID (url: url))
            }
          }
        }
      }
      var resultCount = 0
      for result in self.mSearchResults {
        resultCount += result.mEntries.count
      }
      if resultCount == 0 {
        self.mSearchMessage = "No result"
      }else if resultCount == 1 {
        self.mSearchMessage = "1 result in 1 file"
      }else{
        var s = "\(resultCount) results in "
        if self.mSearchResults.count == 1 {
          s += "1 file"
        }else{
          s += "\(self.mSearchResults.count) files"
        }
        self.mSearchMessage = s
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func search (inFileURL inURL : URL, fileNodeID inFileNodeID : SourceFileNodeID?) {
    if let contents = try? String (contentsOf: inURL, encoding: .utf8) {
      let compareOptions : String.CompareOptions
      if self.mCaseSensitiveSearch {
        compareOptions = []
      }else{
        compareOptions = .caseInsensitive
      }
      var entries = [SearchResultItem] ()
      var searchStartIndex = contents.startIndex
      while searchStartIndex < contents.endIndex,
          let foundRange : Range <String.Index> = contents.range (of: self.mSearchString, options: compareOptions, range: searchStartIndex ..< contents.endIndex),
          !foundRange.isEmpty {
        let lineRange = contents.lineRange (for: foundRange)
        let startLocation : Int = contents.distance (from: contents.startIndex, to: foundRange.lowerBound)
        let endLocation : Int = contents.distance (from: contents.startIndex, to: foundRange.upperBound)
        let rangeInSourceString = NSRange (location: startLocation, length: endLocation - startLocation)
        let lineAndColumn = contents.lineAndColumn (forLocation:  startLocation)
        var lineContents = String (contents [lineRange])
        lineContents.removeLast ()
        let startLineLocation : Int = contents.distance (from: contents.startIndex, to: lineRange.lowerBound)
        let rangeInLine = NSRange (location: startLocation - startLineLocation, length: endLocation - startLocation)
        var lineContentsAT = AttributedString (lineContents)
        let rangeAT = Range <AttributedString.Index> (rangeInLine, in: lineContentsAT)!
        lineContentsAT [rangeAT].foregroundColor = .blue
        let r = SearchResultItem (
          fileNodeID: inFileNodeID,
          lineContents: lineContentsAT,
          rangeInSourceString: rangeInSourceString,
          startLineAndColumn: lineAndColumn
        )
        entries.append (r)
        searchStartIndex = foundRange.upperBound
      }
      if entries.count > 0 {
        self.mSearchResults.append (SearchResultNode (fileName: inURL.lastPathComponent, entries: entries))
      }
    }
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func searchViewForSidebar () -> some View {
    VStack {
      Text ("Find in project").font (.caption)
      HStack {
        Spacer ().frame (width: 6)
        Text ("Find").controlSize (.small)
        Spacer ()
        Toggle ("aA", isOn: self.$mCaseSensitiveSearch)
        .toggleStyle (.button)
        .controlSize (.small)
        Spacer ().frame (width: 6)
      }
      HStack {
        Spacer ().frame (width: 6)
        TextField ("", text: self.$mSearchString)
        .multilineTextAlignment (.center)
        .textFieldStyle (.roundedBorder)
        .controlSize (.small)
        .overlay (alignment: .leading) {
          Image (systemName: "magnifyingglass")
          .foregroundStyle (.secondary)
          .padding (.leading, 8)
        }
        .onSubmit { self.performSearch () }
        Spacer ().frame (width: 6)
      }
      Divider ()
      Text (self.mSearchMessage).foregroundStyle (.secondary).controlSize (.small)
      Divider ()
      List (self.mSearchResults, id: \.id, selection: self.$mSelectedSearchResultID) { node in
        SearchResultNodeView (
          node: node,
          selectedResultItemID: self.$mSelectedSearchResultID,
          selectedFileNodeID: self.$mRootDirectoryNode.mSelectedFileNodeID,
          searchResultSections: self.$mSearchResultSections
        )
      }.controlSize (.small)
      Spacer ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
