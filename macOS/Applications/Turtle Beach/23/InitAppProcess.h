//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AppVersionDelegate-Protocol.h"
#import "WorkflowNode-Protocol.h"

@class NSString, NSThread;
@protocol WorkflowNodeDelegate;

@interface InitAppProcess : NSObject <WorkflowNode, AppVersionDelegate>
{
    id <WorkflowNodeDelegate> delegate;
    NSThread *processThread;
    BOOL didError;
    BOOL didFinish;
    int majorVersion;
    int minorVersion;
    int releaseVersion;
}

- (void).cxx_destruct;
- (void)onServerFirmwareVersionReceivedWithMajorVersion:(int)arg1 andMinorVersion:(int)arg2 andReleaseVersion:(int)arg3 andErrored:(BOOL)arg4;
- (void)doWork:(id)arg1;
- (void)cancel;
- (void)startWithContext:(id)arg1;
- (void)start;
- (id)getTitle;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

