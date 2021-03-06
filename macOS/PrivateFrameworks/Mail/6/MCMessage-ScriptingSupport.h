//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCMessage.h"

#import "MCActivityTarget.h"
#import "MFScriptingMessage.h"

@class MFMailAccount, MFMailbox, NSArray, NSIndexSet, NSScriptObjectSpecifier, NSString;

@interface MCMessage (ScriptingSupport) <MFScriptingMessage, MCActivityTarget>
- (id)valueInAppleScriptAttachmentsWithUniqueID:(id)arg1;
- (id)appleScriptAttachments;
- (id)appleScriptHeaders;
- (void)setBackgroundColor:(unsigned int)arg1;
- (unsigned int)backgroundColor;
- (unsigned int)actionColorMessage;
- (id)allHeaders;
- (id)rawSource;
- (id)messageIDHeader;
- (void)_performBackgroundSetContainer:(id)arg1 command:(id)arg2;
- (void)setContainer:(id)arg1;
- (id)container;
- (id)recipients;
- (void)_addRecipientsForKey:(id)arg1 toArray:(id)arg2;
- (id)_performBackgroundGetContent;
- (id)content;
- (id)scriptedMessageSize;
- (id)replyTo;
- (void)setFlaggedStatus:(long long)arg1;
- (long long)flaggedStatus;
- (void)setIsFlagged:(BOOL)arg1;
- (BOOL)isFlagged;
- (void)setIsDeleted:(BOOL)arg1;
- (BOOL)isDeleted;
- (void)setIsJunk:(BOOL)arg1;
- (BOOL)isJunk;
- (void)setWasRedirected:(BOOL)arg1;
- (BOOL)wasRedirected;
- (void)setWasForwarded:(BOOL)arg1;
- (BOOL)wasForwarded;
- (void)setWasRepliedTo:(BOOL)arg1;
- (BOOL)wasRepliedTo;
- (void)setIsRead:(BOOL)arg1;
- (BOOL)isRead;
- (void)_setAppleScriptFlag:(id)arg1 state:(BOOL)arg2;
@property(readonly) NSScriptObjectSpecifier *objectSpecifier;
@property(readonly, copy, nonatomic) NSArray *bccRecipients;
@property(readonly, copy, nonatomic) NSArray *ccRecipients;
@property(readonly, copy, nonatomic) NSArray *toRecipients;
@property(readonly, copy) NSString *backupID;
@property(readonly, nonatomic) long long libraryID;
@property(readonly, nonatomic) MFMailAccount *mailAccount;
@property(readonly, nonatomic) MFMailbox *mailMailbox;
@property(readonly, nonatomic) NSIndexSet *appliedFlagColors;
@property(readonly, nonatomic) int conversationPosition;
@property(readonly, nonatomic) long long conversationID;
- (void)setPermissionRequestState:(long long)arg1;
@property(readonly, nonatomic) BOOL isChildRequestMessage;
- (BOOL)isChildRequestMessage:(id)arg1 requestIsForSenders:(char *)arg2 childAddress:(id *)arg3 permissionRequestState:(long long *)arg4;
- (BOOL)isParentResponseMessage:(char *)arg1 isRejected:(char *)arg2 requestedAddresses:(id)arg3 requestIsForSenders:(char *)arg4;

// Remaining properties
@property(readonly, nonatomic) unsigned long long conversationFlags;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

