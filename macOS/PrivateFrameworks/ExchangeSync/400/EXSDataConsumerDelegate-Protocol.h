//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EXSFolder;

@protocol EXSDataConsumerDelegate <NSObject>
- (void)dataConsumer:(id)arg1 hasItemChangesInFolder:(EXSFolder *)arg2;
- (void)dataConsumerHasFolderChanges:(id)arg1;
- (void)dataConsumerNeedsSync:(id)arg1;
@end

