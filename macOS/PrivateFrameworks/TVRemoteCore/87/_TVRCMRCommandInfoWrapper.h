//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TVRCMRCommandInfoWrapper : NSObject
{
    struct _MRMediaRemoteCommandInfo *_info;
}

@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, copy, nonatomic) NSString *commandDescription;
@property(readonly, nonatomic) unsigned int command;
- (id)description;
- (void)dealloc;
- (id)initWithCommandInfo:(struct _MRMediaRemoteCommandInfo *)arg1;

@end

