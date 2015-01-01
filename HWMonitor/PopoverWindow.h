//
//  PopoverWindow.h
//  HWMonitor
//
//  Created by Kozlek on 25/07/14.
//  Copyright (c) 2014 kozlek. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface PopoverWindow : NSPanel

@property (nonatomic, strong) IBOutlet NSView * toolbarView;
@property (readonly) CGFloat toolbarHeight;

-(void)layoutContent;

@end
