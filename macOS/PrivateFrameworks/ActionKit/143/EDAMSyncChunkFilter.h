//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSSet, NSString;

@interface EDAMSyncChunkFilter : FATObject
{
    NSNumber *_includeNotes;
    NSNumber *_includeNoteResources;
    NSNumber *_includeNoteAttributes;
    NSNumber *_includeNotebooks;
    NSNumber *_includeTags;
    NSNumber *_includeSearches;
    NSNumber *_includeResources;
    NSNumber *_includeLinkedNotebooks;
    NSNumber *_includeExpunged;
    NSNumber *_includeNoteApplicationDataFullMap;
    NSNumber *_includeResourceApplicationDataFullMap;
    NSNumber *_includeNoteResourceApplicationDataFullMap;
    NSNumber *_includePreferences;
    NSNumber *_includeSharedNotes;
    NSNumber *_includeNotesSharedWithMe;
    NSNumber *_includeLinkedAccounts;
    NSNumber *_omitSharedNotebooks;
    NSString *_requireNoteContentClass;
    NSSet *_notebookGuids;
    NSNumber *_inAccountUserId;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *inAccountUserId; // @synthesize inAccountUserId=_inAccountUserId;
@property(retain, nonatomic) NSSet *notebookGuids; // @synthesize notebookGuids=_notebookGuids;
@property(retain, nonatomic) NSString *requireNoteContentClass; // @synthesize requireNoteContentClass=_requireNoteContentClass;
@property(retain, nonatomic) NSNumber *omitSharedNotebooks; // @synthesize omitSharedNotebooks=_omitSharedNotebooks;
@property(retain, nonatomic) NSNumber *includeLinkedAccounts; // @synthesize includeLinkedAccounts=_includeLinkedAccounts;
@property(retain, nonatomic) NSNumber *includeNotesSharedWithMe; // @synthesize includeNotesSharedWithMe=_includeNotesSharedWithMe;
@property(retain, nonatomic) NSNumber *includeSharedNotes; // @synthesize includeSharedNotes=_includeSharedNotes;
@property(retain, nonatomic) NSNumber *includePreferences; // @synthesize includePreferences=_includePreferences;
@property(retain, nonatomic) NSNumber *includeNoteResourceApplicationDataFullMap; // @synthesize includeNoteResourceApplicationDataFullMap=_includeNoteResourceApplicationDataFullMap;
@property(retain, nonatomic) NSNumber *includeResourceApplicationDataFullMap; // @synthesize includeResourceApplicationDataFullMap=_includeResourceApplicationDataFullMap;
@property(retain, nonatomic) NSNumber *includeNoteApplicationDataFullMap; // @synthesize includeNoteApplicationDataFullMap=_includeNoteApplicationDataFullMap;
@property(retain, nonatomic) NSNumber *includeExpunged; // @synthesize includeExpunged=_includeExpunged;
@property(retain, nonatomic) NSNumber *includeLinkedNotebooks; // @synthesize includeLinkedNotebooks=_includeLinkedNotebooks;
@property(retain, nonatomic) NSNumber *includeResources; // @synthesize includeResources=_includeResources;
@property(retain, nonatomic) NSNumber *includeSearches; // @synthesize includeSearches=_includeSearches;
@property(retain, nonatomic) NSNumber *includeTags; // @synthesize includeTags=_includeTags;
@property(retain, nonatomic) NSNumber *includeNotebooks; // @synthesize includeNotebooks=_includeNotebooks;
@property(retain, nonatomic) NSNumber *includeNoteAttributes; // @synthesize includeNoteAttributes=_includeNoteAttributes;
@property(retain, nonatomic) NSNumber *includeNoteResources; // @synthesize includeNoteResources=_includeNoteResources;
@property(retain, nonatomic) NSNumber *includeNotes; // @synthesize includeNotes=_includeNotes;
- (void).cxx_destruct;

@end

