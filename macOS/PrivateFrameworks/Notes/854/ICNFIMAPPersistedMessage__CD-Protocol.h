//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/ICNFMCPersistedMessage-Protocol.h>

@class NSDate, NSManagedObject, NSNumber, NSString, NSUUID;
@protocol ICNFIMAPPersistedMailbox;

@protocol ICNFIMAPPersistedMessage__CD <ICNFMCPersistedMessage>
@property(retain, nonatomic) NSManagedObject<ICNFIMAPPersistedMailbox> *mailbox;
@property(nonatomic) long long mimeDataSize;
@property(retain, nonatomic) NSDate *dateEdited;
@property(retain, nonatomic) NSUUID *universallyUniqueID;
@property(retain, nonatomic) NSNumber *imapUID;
- (NSString *)compactDescription;
@end

