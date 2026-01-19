//--------------------------------------------------------------------------------------------------
//  Created by Pierre Molinaro on 08/08/2025.
//--------------------------------------------------------------------------------------------------

import SwiftUI
import Combine

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

  @State var mTopViewSelection = NSRange ()
  @State private var mTopViewPopUpMenuItems : [IdentifiableAttributedString] = []

  @State private var mTopViewSelectedPopUp : Int = 0
  private var mUserTopViewSelectedPopUp : Binding<Int> {
    Binding (
      get: { self.mTopViewSelectedPopUp },
      set: { newValue in
        if self.mTopViewSelectedPopUp != newValue {
          self.mTopViewSelectedPopUp = newValue
          self.mTopViewSelection = NSRange (location: newValue, length: 0)
        }
      }
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mBottomViewPopUpMenuItems : [IdentifiableAttributedString] = []
  @State var mBottomViewSelection = NSRange ()

  @State private var mBottomViewSelectedPopUp : Int = 0
  private var mUserBottomViewSelectedPopUp : Binding<Int> {
    Binding (
      get: { self.mBottomViewSelectedPopUp },
      set: { newValue in
        if self.mBottomViewSelectedPopUp != newValue {
          self.mBottomViewSelectedPopUp = newValue
          self.mBottomViewSelection = NSRange (location: newValue, length: 0)
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
            .keyboardShortcut ("g", modifiers: [.option, .command])
            Button ("Comment Selection") {
               self.mTopViewSelection = self.mSharedTextModel.performBlockComment (forSelection: self.mTopViewSelection)
             }
            .keyboardShortcut ("k", modifiers: [.command])
            Button ("Uncomment Selection") {
               self.mTopViewSelection = self.mSharedTextModel.performBlockUncomment (forSelection: self.mTopViewSelection)
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
          selectionBinding: self.$mTopViewSelection,
          issueArray: self.mIssueArray,
          installScrollToLineNotificationObserver: true,
          popUpMenuItemsBinding: self.$mTopViewPopUpMenuItems,
          populateContextualMenuCallBack: self.mPopulateContextualMenuCallBack
        )
        .onChange (of: self.mTopViewSelection.location) {
        //--- Select popup menu according to current selection staret
          let currentLocation = self.mTopViewSelection.location
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
              self.mTopViewSelection = self.mSharedTextModel.performBlockComment (forSelection: self.mTopViewSelection)
            },
            uncommentSelection: {
              self.mTopViewSelection = self.mSharedTextModel.performBlockUncomment (forSelection: self.mTopViewSelection)
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
                self.mBottomViewSelection = self.mSharedTextModel.performBlockComment (forSelection: self.mBottomViewSelection)
              }
              .keyboardShortcut ("k", modifiers: [.command])
              Button ("Uncomment Selection") {
                self.mBottomViewSelection = self.mSharedTextModel.performBlockUncomment (forSelection: self.mBottomViewSelection)
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
            selectionBinding: self.$mBottomViewSelection,
            issueArray: self.mIssueArray,
            installScrollToLineNotificationObserver: false,
            popUpMenuItemsBinding: self.$mBottomViewPopUpMenuItems,
            populateContextualMenuCallBack: self.mPopulateContextualMenuCallBack
          )
          .onChange (of: self.mBottomViewSelection.location) {
            let currentLocation = self.mBottomViewSelection.location
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
          .focusedValue (
            \.activeView,
            ActiveViewFocusedValue (
              sharedTextModel: self.mSharedTextModel,
              canUndo: self.mSharedTextModel.canUndo,
              canRedo: self.mSharedTextModel.canRedo,
              presentGotoLineSheet: { self.mIsPresentingGotoLineSheetForBottomView = true },
              commentSelection: {
                self.mBottomViewSelection = self.mSharedTextModel.performBlockComment (forSelection: self.mBottomViewSelection)
              },
              uncommentSelection: {
                self.mBottomViewSelection = self.mSharedTextModel.performBlockUncomment (forSelection: self.mBottomViewSelection)
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
          self.mTopViewSelection = NSRange (location: range.location, length: 0)
        }
        .keyboardShortcut (.defaultAction)
        .disabled ((self.mCurrentLine < 1) || (self.mCurrentLine > self.mSharedTextModel.lineCount))
      }
    }.padding (12).frame (width: 250)
    .onAppear {
      let lc = self.mSharedTextModel.mDocumentString.lineAndColumn (forLocation: self.mTopViewSelection.location)
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
          self.mBottomViewSelection = NSRange (location: range.location, length: 0)
        }
        .keyboardShortcut (.defaultAction)
        .disabled ((self.mCurrentLine < 1) || (self.mCurrentLine > self.mSharedTextModel.lineCount))
      }
    }.padding (12).frame (width: 250)
    .onAppear {
      let lc = self.mSharedTextModel.mDocumentString.lineAndColumn (forLocation: self.mBottomViewSelection.location)
      self.mCurrentLine = lc.line
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
