//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 08/08/2025.
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine

//--------------------------------------------------------------------------------------------------

extension KeyEquivalent {
  static let shiftTabKey = KeyEquivalent ("\u{19}")
}

//--------------------------------------------------------------------------------------------------

struct TextSyntaxColoringView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mIssueArray : [CompilationIssue]
  private let mPopulateContextualMenuCallBack : (NSMenu, String, [String]) -> Void
  @ObservedObject private var mSharedTextModel : SharedTextModel

  @State private var mIsPresentingGotoLineSheetForTopView : Bool = false
  @State private var mIsPresentingGotoLineSheetForBottomView : Bool = false
  @State private var mCurrentLine : Int = 0

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mTopViewPopUpMenuItems : [IdentifiableAttributedString] = []

  @State private var mTopViewSelectedPopUp : Int = 0
  private var mUserTopViewSelectedPopUp : Binding<Int> {
    Binding (
      get: { self.mTopViewSelectedPopUp },
      set: { newValue in
        if self.mTopViewSelectedPopUp != newValue {
          self.mTopViewSelectedPopUp = newValue
          self.mSharedTextModel.mTopViewSelection = NSRange (location: newValue, length: 0)
        }
      }
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mBottomViewPopUpMenuItems : [IdentifiableAttributedString] = []

  @State private var mBottomViewSelectedPopUp : Int = 0
  private var mUserBottomViewSelectedPopUp : Binding<Int> {
    Binding (
      get: { self.mBottomViewSelectedPopUp },
      set: { newValue in
        if self.mBottomViewSelectedPopUp != newValue {
          self.mBottomViewSelectedPopUp = newValue
          self.mSharedTextModel.mBottomViewSelection = NSRange (location: newValue, length: 0)
        }
      }
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  init (model inSharedTextModel : SharedTextModel,
        issueArray inIssueArray : [CompilationIssue],
        url inSourceFileURL : URL?,
        populateContextualMenuCallBack inCallBack : @escaping (NSMenu, String, [String]) -> Void) {
    self.mSharedTextModel = inSharedTextModel
    self.mPopulateContextualMenuCallBack = inCallBack
    var issueArray = [CompilationIssue] ()
    for issue in inIssueArray {
      if issue.fileURL == inSourceFileURL {
        issueArray.append (issue)
      }
    }
    self.mIssueArray = issueArray
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body: some View {
    VSplitView {
      VStack {
        Spacer ().frame (height: 6)
        HStack {
          Spacer ().frame (width: 6)
          Menu {
            Button ("Goto Line…") { self.mIsPresentingGotoLineSheetForTopView = true }
            .keyboardShortcut ("l", modifiers: .command)
            Button ("Comment Selection") {
               self.mSharedTextModel.mTopViewSelection = self.mSharedTextModel.performBlockComment (forSelection: self.mSharedTextModel.mTopViewSelection)
             }
            .keyboardShortcut ("k", modifiers: [.command])
            Button ("Uncomment Selection") {
               self.mSharedTextModel.mTopViewSelection = self.mSharedTextModel.performBlockUncomment (forSelection: self.mSharedTextModel.mTopViewSelection)
             }
            .keyboardShortcut ("k", modifiers: [.option, .command])
          } label: {
             Label ("", systemImage: "gearshape.fill")
          }.frame (width: 48)
          Picker ("", selection: self.mUserTopViewSelectedPopUp) {
            ForEach (self.mTopViewPopUpMenuItems, id: \.id) { entry in
              Text (entry.attributedString).tag (entry.id)
            }
          }.pickerStyle (.menu).labelsHidden ()
          Button ("+") { self.mSharedTextModel.mBottomViewIsVisible = true }
          .disabled (self.mSharedTextModel.mBottomViewIsVisible)
          Spacer ().frame (width: 6)
        }
        LexicalHilitingTextEditor (
          model: self.mSharedTextModel,
          selectionBinding: self.$mSharedTextModel.mTopViewSelection,
          issueArray: self.mIssueArray,
          installScrollToLineNotificationObserver: true,
          popUpMenuItemsBinding: self.$mTopViewPopUpMenuItems,
          populateContextualMenuCallBack: self.mPopulateContextualMenuCallBack
        )
      //--- ATTENTION : il faut exécuter les actions de manière asynchrone, dans le main thread
        .onKeyPress (.tab, phases: .down) { _ in
          return self.hTabKeyAction (selectedRangeBinding: self.$mSharedTextModel.mTopViewSelection)
        }
        .onKeyPress (.shiftTabKey, phases: .down) { _ in
          return self.shiftHTabKeyAction (selectedRangeBinding: self.$mSharedTextModel.mTopViewSelection)
        }
        .onChange (of: self.mSharedTextModel.mTopViewSelection.location) {
        //--- Select popup menu according to current selection staret
          let currentLocation = self.mSharedTextModel.mTopViewSelection.location
          var newSelectedID = 0
          for item in self.mTopViewPopUpMenuItems {
            if currentLocation < item.id {
              self.mTopViewSelectedPopUp = newSelectedID
              return
            }else{
              newSelectedID = item.id
            }
          }
          self.mTopViewSelectedPopUp = newSelectedID
        }
        .focusedValue (
          \.activeView,
          ActiveViewFocusedValue (
            sharedTextModel: self.mSharedTextModel,
            canUndo: self.mSharedTextModel.canUndo,
            canRedo: self.mSharedTextModel.canRedo,
            presentGotoLineSheet: { self.mIsPresentingGotoLineSheetForTopView = true },
            commentSelection: {
              self.mSharedTextModel.mTopViewSelection = self.mSharedTextModel.performBlockComment (forSelection: self.mSharedTextModel.mTopViewSelection)
            },
            uncommentSelection: {
              self.mSharedTextModel.mTopViewSelection = self.mSharedTextModel.performBlockUncomment (forSelection: self.mSharedTextModel.mTopViewSelection)
            }
          )
        )
      }
      if self.mSharedTextModel.mBottomViewIsVisible {
        VStack {
          Spacer ().frame (height: 6)
          HStack {
            Spacer ().frame (width: 6)
            Menu {
              Button ("Goto Line…") { self.mIsPresentingGotoLineSheetForBottomView = true }
              .keyboardShortcut ("g", modifiers: [.option, .command])
              Button ("Comment Selection") {
                self.mSharedTextModel.mBottomViewSelection = self.mSharedTextModel.performBlockComment (forSelection: self.mSharedTextModel.mBottomViewSelection)
              }
              .keyboardShortcut ("k", modifiers: [.command])
              Button ("Uncomment Selection") {
                self.mSharedTextModel.mBottomViewSelection = self.mSharedTextModel.performBlockUncomment (forSelection: self.mSharedTextModel.mBottomViewSelection)
              }
              .keyboardShortcut ("k", modifiers: [.option, .command])
            } label: {
               Label ("", systemImage: "gearshape.fill")
            }.frame (width: 48)
            Picker ("", selection: self.mUserBottomViewSelectedPopUp) {
              ForEach (self.mBottomViewPopUpMenuItems, id: \.id) {
                Text ($0.attributedString).tag ($0.id)
              }
            }.pickerStyle (.automatic).labelsHidden ()
            Button ("-") { self.mSharedTextModel.mBottomViewIsVisible = false }
            Spacer ().frame (width: 6)
          }
          LexicalHilitingTextEditor (
            model: self.mSharedTextModel,
            selectionBinding: self.$mSharedTextModel.mBottomViewSelection,
            issueArray: self.mIssueArray,
            installScrollToLineNotificationObserver: false,
            popUpMenuItemsBinding: self.$mBottomViewPopUpMenuItems,
            populateContextualMenuCallBack: self.mPopulateContextualMenuCallBack
          )
          .onChange (of: self.mSharedTextModel.mBottomViewSelection.location) {
            let currentLocation = self.mSharedTextModel.mBottomViewSelection.location
            var newSelectedID = 0
            for item in self.mBottomViewPopUpMenuItems {
              if currentLocation < item.id {
                self.mBottomViewSelectedPopUp = newSelectedID
                return
              }else{
                newSelectedID = item.id
              }
            }
            self.mBottomViewSelectedPopUp = newSelectedID
          }
        //--- ATTENTION : il faut exécuter les actions de manière asynchrone, dans le main thread
          .onKeyPress (.tab, phases: .down) { _ in
            return self.hTabKeyAction (selectedRangeBinding: self.$mSharedTextModel.mBottomViewSelection)
          }
          .onKeyPress (.shiftTabKey, phases: .down) { _ in
            return self.shiftHTabKeyAction (selectedRangeBinding: self.$mSharedTextModel.mBottomViewSelection)
          }
          .focusedValue (
            \.activeView,
            ActiveViewFocusedValue (
              sharedTextModel: self.mSharedTextModel,
              canUndo: self.mSharedTextModel.canUndo,
              canRedo: self.mSharedTextModel.canRedo,
              presentGotoLineSheet: { self.mIsPresentingGotoLineSheetForBottomView = true },
              commentSelection: {
                self.mSharedTextModel.mBottomViewSelection = self.mSharedTextModel.performBlockComment (forSelection: self.mSharedTextModel.mBottomViewSelection)
              },
              uncommentSelection: {
                self.mSharedTextModel.mBottomViewSelection = self.mSharedTextModel.performBlockUncomment (forSelection: self.mSharedTextModel.mBottomViewSelection)
              }
            )
          )
        }
      }
    }
    .sheet (isPresented: self.$mIsPresentingGotoLineSheetForTopView) { self.presentGotoLineSheetForTopView () }
    .sheet (isPresented: self.$mIsPresentingGotoLineSheetForBottomView) { self.presentGotoLineSheetForBottomView () }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func hTabKeyAction (selectedRangeBinding inSelectedRangeBinding : Binding <NSRange>) -> KeyPress.Result {
    DispatchQueue.main.async {
      self.mSharedTextModel.performHTabKeyAction (selectedRange: self.$mSharedTextModel.mTopViewSelection)
    }
    return .handled
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func shiftHTabKeyAction (selectedRangeBinding inSelectedRangeBinding : Binding <NSRange>) -> KeyPress.Result {
    DispatchQueue.main.async {
      self.mSharedTextModel.performShiftHTabKeyAction (selectedRange: self.$mSharedTextModel.mTopViewSelection)
    }
    return .handled
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func presentGotoLineSheetForTopView () -> some View {
    VStack {
      Text (self.mSharedTextModel.mBottomViewIsVisible ? "Goto Line (top view)" : "Goto Line")
      .bold().controlSize (.large)
      HStack {
        Spacer ()
        TextField (
          "",
          value: self.$mCurrentLine,
          format: .number.precision (.fractionLength (0))
        )
        .labelsHidden ()
        .frame (width: 48)
        Text ("1-\(self.mSharedTextModel.lineCount)")
        Spacer ()
      }
      HStack {
        Button ("Cancel") {
          self.mIsPresentingGotoLineSheetForTopView = false
        }
        .keyboardShortcut (.cancelAction)
        Spacer ()
        Button ("Ok") {
          self.mIsPresentingGotoLineSheetForTopView = false
          let range = self.mSharedTextModel.mDocumentString.lineRange (forLineNumber: self.mCurrentLine)
          self.mSharedTextModel.mTopViewSelection = NSRange (location: range.location, length: 0)
        }
        .keyboardShortcut (.defaultAction)
        .disabled ((self.mCurrentLine < 1) || (self.mCurrentLine > self.mSharedTextModel.lineCount))
      }
    }.padding (12).frame (width: 250)
    .onAppear {
      let lc = self.mSharedTextModel.mDocumentString.lineAndColumn (forLocation: self.mSharedTextModel.mTopViewSelection.location)
      self.mCurrentLine = lc.line
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func presentGotoLineSheetForBottomView () -> some View {
    VStack {
      Text ("Goto Line (bottom view)").bold().controlSize (.large)
      HStack {
        Spacer ()
        TextField (
          "",
          value: self.$mCurrentLine,
          format: .number.precision (.fractionLength (0))
        )
        .labelsHidden ()
        .frame (width: 48)
        Text ("1-\(self.mSharedTextModel.lineCount)")
        Spacer ()
      }
      HStack {
        Button ("Cancel") {
          self.mIsPresentingGotoLineSheetForBottomView = false
        }
        .keyboardShortcut (.cancelAction)
        Spacer ()
        Button ("Ok") {
          self.mIsPresentingGotoLineSheetForBottomView = false
          let range = self.mSharedTextModel.mDocumentString.lineRange (forLineNumber: self.mCurrentLine)
          self.mSharedTextModel.mBottomViewSelection = NSRange (location: range.location, length: 0)
        }
        .keyboardShortcut (.defaultAction)
        .disabled ((self.mCurrentLine < 1) || (self.mCurrentLine > self.mSharedTextModel.lineCount))
      }
    }.padding (12).frame (width: 250)
    .onAppear {
      let lc = self.mSharedTextModel.mDocumentString.lineAndColumn (forLocation: self.mSharedTextModel.mBottomViewSelection.location)
      self.mCurrentLine = lc.line
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
