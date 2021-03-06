//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TServiceAction.h"

@class NSArray, NSString;

@interface TBuiltInServiceAction : TServiceAction
{
    NSString *title;
    NSString *localizedTitle;
    NSArray *sendFileTypes;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) NSArray *sendFileTypes; // @synthesize sendFileTypes;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (BOOL)invokeWithPasteboard:(id)arg1;
- (_Bool)invokeWithResponder:(id)arg1;
- (_Bool)applicableToNodes:(const struct TFENodeVector *)arg1 target:(id)arg2;
- (id)actionIdentifier;
- (id)image;
- (id)optionImageForPresentationMode:(id)arg1;
- (id)imageForPresentationMode:(id)arg1;

@end

