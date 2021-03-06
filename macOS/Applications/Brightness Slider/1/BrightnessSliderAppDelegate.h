//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSApplicationDelegate-Protocol.h"

@class NSMenu, NSSlider, NSStatusItem, NSString, NSWindow, PTHotKey, SRRecorderControl;

@interface BrightnessSliderAppDelegate : NSObject <NSApplicationDelegate>
{
    NSStatusItem *statusItem;
    NSMenu *statusBarMenu;
    NSSlider *bSlider;
    NSWindow *settingsWindow;
    SRRecorderControl *upShortcutCtrl;
    SRRecorderControl *downShortcutCtrl;
    NSWindow *window;
    float windowOpacity;
    BOOL skipNextDaemonCheck;
    float lastValue;
    PTHotKey *upActivationHotKey;
    PTHotKey *downActivationHotKey;
}

+ (void)initialize;
@property(nonatomic) float windowOpacity; // @synthesize windowOpacity;
- (void).cxx_destruct;
- (void)exit:(id)arg1;
- (void)about:(id)arg1;
- (void)hotKeyDown:(id)arg1;
- (void)hotKeyUp:(id)arg1;
- (void)reloadShortcuts;
- (void)shortcutRecorderDidEndRecording:(id)arg1;
@property BOOL launchAtLogin;
- (void)showSettings:(id)arg1;
- (void)setBrightness:(float)arg1;
- (float)getBrightness;
- (void)sliderChanged:(id)arg1;
- (void)brightnessDaemon;
- (void)threadedMenuWillOpen;
- (void)menuWillOpen:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

