//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber, NSString;

@interface NetAddressBook2 : NSObject
{
    NSString *_app;
    NSString *_user;
    NSString *_host;
    NSString *_prefName;
    NSMutableArray *_entries;
    NSNumber *nextNewID;
}

- (void)removeEntryAtIndex:(unsigned long long)arg1;
- (BOOL)write:(id)arg1;
- (id)entryWithID:(unsigned int)arg1;
- (id)entryWithName:(id)arg1;
- (id)entryWithIndex:(unsigned long long)arg1;
- (unsigned long long)numEntries;
- (void)flush;
- (void)load;
- (void)dealloc;
- (id)initWithApplicationID:(id)arg1 userName:(id)arg2 hostName:(id)arg3 preferenceName:(id)arg4;

@end

