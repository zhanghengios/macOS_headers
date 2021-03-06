//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LPCommandPaneChildViewController.h"

@class LPAppController, NSButton, NSTextField;

__attribute__((visibility("hidden")))
@interface LPEmptyAppViewController : LPCommandPaneChildViewController
{
    NSTextField *_headingLabel;
    NSTextField *_subheadingLabel;
    NSButton *_button;
    LPAppController *_appController;
    unsigned long long _mode;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) LPAppController *appController; // @synthesize appController=_appController;
- (void)buttonAction:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (double)proposedCommandPaneWidthWithCurrentWidth:(double)arg1 min:(double *)arg2 max:(double *)arg3 holdingPriority:(unsigned long long *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithAppController:(id)arg1;

@end

