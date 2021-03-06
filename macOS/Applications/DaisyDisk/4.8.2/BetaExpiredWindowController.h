//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSTextField;

@interface BetaExpiredWindowController : NSWindowController
{
    NSTextField *titleLabel;
    NSTextField *messageLabel;
    NSButton *quitButton;
    NSButton *defaultButton;
    BOOL m_isShowing;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)singleton;
- (void)close:(id)arg1;
- (void)quit:(id)arg1;
- (void)show;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end

