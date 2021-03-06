//
//  RadarWindowController.h
//  QuickRadar
//
//  Created by Amy Worrall on 15/05/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface QRRadarWindowController : NSWindowController

@property (nonatomic, strong) IBOutlet NSPopUpButton *productMenu;
@property (nonatomic, strong) IBOutlet NSPopUpButton *classificationMenu;
@property (nonatomic, strong) IBOutlet NSPopUpButton *reproducibleMenu;
@property (nonatomic, strong) IBOutlet NSTextField *versionField;
@property (nonatomic, strong) IBOutlet NSTextField *titleField;
@property (nonatomic, strong) IBOutlet NSTextView *bodyTextView;
@property (nonatomic, strong) IBOutlet NSButton *openRadarCheckbox;
@property (nonatomic, strong) IBOutlet NSButton *submitButton;
@property (nonatomic, strong) IBOutlet NSProgressIndicator *spinner;
@property (nonatomic, strong) IBOutlet NSProgressIndicator *progressBar;


- (IBAction)submitRadar:(id)sender;

@end
