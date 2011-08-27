//---------------------------------------------------------------------------*
//                                                                           *
//  This file is part of libpm library                                       *
//                                                                           *
//  Copyright (C) 2003, ..., 2007 Pierre Molinaro.                           *
//                                                                           *
//  e-mail : molinaro@irccyn.ec-nantes.fr                                    *
//                                                                           *
//  IRCCyN, Institut de Recherche en Communications et Cybernetique de Nantes*
//  ECN, Ecole Centrale de Nantes (France)                                   *
//                                                                           *
//  This library is free software; you can redistribute it and/or modify it  *
//  under the terms of the GNU Lesser General Public License as published    *
//  by the Free Software Foundation; either version 2 of the License, or     *
//  (at your option) any later version.                                      *
//                                                                           *
//  This program is distributed in the hope it will be useful, but WITHOUT   *
//  ANY WARRANTY; without even the implied warranty of MERCHANDIBILITY or    *
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for *
//  more details.                                                            *
//                                                                           *
//---------------------------------------------------------------------------*

#import <AppKit/AppKit.h>

//---------------------------------------------------------------------------*

@class OC_GGS_Document ;

//---------------------------------------------------------------------------*

@interface OC_GGS_TextView : NSTextView {
  @private IBOutlet NSWindow * mGotoWindow ;
  @private IBOutlet NSTextField * mGotoLineTextField ;
  @private IBOutlet NSButton * mGotoLineSelectButton ;
  @private IBOutlet NSButton * mGotoLineCancelButton ;
  @private IBOutlet OC_GGS_Document * mDocument ;
  
  @private NSButton * mCurrentLineButton ;
  @private NSString * mKeyForSelectionInUserDefault ;
  @private NSTextStorage * mDefaultTextStorage ;
}

- (void) setGalgasDocument: (OC_GGS_Document *) inDocument ;

- (void) setCurrentLineButton: (NSButton *) inCurrentLineButton ;

- (void) setKeyForSelectionInUserDefault: (NSString *) inKeyForSelectionInUserDefault ;

- (void) scrollToSelectionDefinedInUserDefaults: (NSString *) inWindowTitle ;

- (void) updateTextLineAndColumnSelectionLocation: (id) inUnusedArgument ;
@end

//---------------------------------------------------------------------------*
