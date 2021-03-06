//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCLowDiskDelegate.h"
#import "BRCModule.h"

@class BRCAccountSession, BRCStagePersistedState, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, brc_task_tracker;

@interface BRCStageRegistry : NSObject <BRCModule, BRCLowDiskDelegate>
{
    BRCAccountSession *_session;
    NSString *_stageDirectoryPath[7];
    unsigned long long _stageDirectoryFileID[7];
    NSMutableSet *_unflushedStagedFileIDs;
    NSMutableSet *_activeUploadStageIDs;
    NSMutableSet *_activeDownloadStageIDs;
    NSMutableDictionary *_watchedLockedFileIDs;
    NSObject<OS_dispatch_source> *_lockedTestTimer;
    NSObject<OS_dispatch_queue> *_flushingQueue;
    BRCStagePersistedState *_persistedState;
    BOOL _lowDiskSpace;
    NSObject<OS_dispatch_queue> *_queue;
    brc_task_tracker *_tracker;
    BOOL _isCancelled;
    int _deviceID;
}

+ (unsigned short)computeItemModeFromStatInfo:(id)arg1 isPackage:(BOOL)arg2;
+ (void)migrateStageToVersion2_0WithSession:(id)arg1;
+ (BOOL)applySharingReadonlyACLsToFD:(int)arg1 statInfo:(id)arg2 version:(id)arg3 clientZone:(id)arg4 sharingOptions:(unsigned long long)arg5;
@property(readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) int deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (void)cancel;
- (void)resume;
- (void)disarmLockedTestTimer;
- (void)close;
- (void)_updatePersistedStateWithLatestGCStartTime:(long long)arg1;
- (long long)garbageCollectSpace:(long long)arg1;
- (void)garbageCollectPackages;
- (long long)purgeGraveyardSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)purgableSpace;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(BOOL)arg2;
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;
- (BOOL)transferDocumentID:(unsigned int)arg1 fromOldVersionStage:(unsigned long long)arg2 toStage:(unsigned long long)arg3;
- (BOOL)existsInOldVersionStageOrGraveyard:(unsigned long long)arg1;
- (BOOL)existsInStage:(unsigned long long)arg1 generationID:(unsigned int *)arg2;
- (BOOL)moveToGraveyardFromPath:(id)arg1 forItemID:(id)arg2 error:(id *)arg3;
- (BOOL)moveOldVersionFromPath:(id)arg1 error:(id *)arg2;
- (BOOL)moveFromStageToGraveyard:(unsigned long long)arg1 forItemID:(id)arg2;
- (BOOL)_graveyardAt:(int)arg1 path:(id)arg2 forItemID:(id)arg3;
- (void)cleanupStagedDownloadWithID:(id)arg1 forItemID:(id)arg2;
- (BOOL)rememberStagedDownloadWithID:(id)arg1 gatherFileID:(unsigned long long *)arg2 generationID:(unsigned int *)arg3 documentID:(unsigned int *)arg4 appLibrary:(id)arg5 error:(id *)arg6;
- (id)createURLForDownloadWithStageID:(id)arg1 name:(id)arg2;
- (void)associateDownloadStageID:(id)arg1 withOperation:(id)arg2;
- (void)cleanupStagedUploadWithID:(id)arg1;
- (void)cleanupStagedSyncUpWithID:(id)arg1;
- (BOOL)pendingFetchRecordDirExistsInStageWithStartingChangeToken:(id)arg1 recordZoneID:(id)arg2;
- (id)createURLForUploadWithStageID:(id)arg1 name:(id)arg2;
- (id)makePendingFetchRecordDirWithStartingChangeToken:(id)arg1 recordZoneID:(id)arg2;
- (id)_anchorNameForChangeToken:(id)arg1 recordZoneID:(id)arg2;
- (void)associateSyncUpStageID:(id)arg1 withOperation:(id)arg2;
- (void)applyMetadataOnFileDescriptor:(int)arg1 liveFileDescriptor:(int)arg2 clientZone:(id)arg3 statInfo:(id)arg4 version:(id)arg5 sharingOptions:(unsigned long long)arg6;
- (BOOL)moveFromStage:(unsigned long long)arg1 toPath:(id)arg2 fileName:(id)arg3 error:(id *)arg4;
- (BOOL)makeItemLive:(id)arg1 fromStage:(unsigned long long)arg2 bySwappingWith:(id)arg3 fileName:(id)arg4 error:(id *)arg5;
- (BOOL)_flockToMakeLiveAtPath:(id)arg1 error:(id *)arg2;
- (id)_pathInStage:(unsigned long long)arg1 index:(unsigned char *)arg2 generationID:(unsigned int *)arg3;
- (BOOL)copyPackageFileWithPackageFd:(int)arg1 toStageFd:(int)arg2 relpath:(id)arg3;
- (BOOL)makeSideFaultInStageGatherFileID:(unsigned long long *)arg1 generationID:(unsigned int *)arg2 documentID:(unsigned int *)arg3 properties:(id)arg4 inAppLibrary:(id)arg5 forCreation:(BOOL)arg6 error:(id *)arg7;
- (id)makeNonLocalVersionSideFaultWithAdditionName:(id)arg1 clientZone:(id)arg2 statInfo:(id)arg3 version:(id)arg4 sharingOptions:(unsigned long long)arg5 error:(id *)arg6;
- (id)nonLocalFaultURLForAdditionName:(id)arg1;
- (BOOL)makeSymlinkWithTarget:(id)arg1 inStageGatherFileID:(unsigned long long *)arg2 generationID:(unsigned int *)arg3 error:(id *)arg4;
- (BOOL)makeDirectoryInStageGatherFileID:(unsigned long long *)arg1 generationID:(unsigned int *)arg2 error:(id *)arg3;
- (int)_performInStageDirectory:(unsigned char)arg1 block:(CDUnknownBlockType)arg2;
- (int)_openStageDirectory:(unsigned char)arg1;
- (void)forgetWatchedLockedFileIDsForAppLibrary:(id)arg1;
- (void)forgetWatchedLockedFileID:(id)arg1;
- (void)_watchLockedRelpath:(id)arg1;
- (void)_fileIDMightHaveBeenUnlocked:(id)arg1;
- (void)willFlushAllStagedFileIDs;
- (BOOL)didFlushStagedFileID:(unsigned long long)arg1;
- (void)open;
- (id)initWithAccountSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

