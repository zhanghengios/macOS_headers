//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSDateFormatter, NSString, NSView;

__attribute__((visibility("hidden")))
@interface NVRPFixedPlaceViewController : NSViewController
{
    NSDateFormatter *_dateFormatter;
    NSView *_detailsContainer;
    NSView *_fixedOnDateContainer;
    NSView *_textContainer;
}

+ (id)footerText;
+ (id)textMessageForProblemStatuses:(id)arg1 showFooter:(BOOL)arg2;
+ (id)keyPathsForValuesAffectingFooter;
+ (id)keyPathsForValuesAffectingText;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingFixedOnText;
@property(nonatomic) __weak NSView *textContainer; // @synthesize textContainer=_textContainer;
@property(nonatomic) __weak NSView *fixedOnDateContainer; // @synthesize fixedOnDateContainer=_fixedOnDateContainer;
@property(nonatomic) __weak NSView *detailsContainer; // @synthesize detailsContainer=_detailsContainer;
- (void).cxx_destruct;
- (id)nibName;
@property(readonly, nonatomic) NSString *fixedOnText;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *footer;
- (id)_resolution;
- (id)_dateFormatter;
- (void)_updateLayout;
- (void)setRepresentedObject:(id)arg1;

@end

