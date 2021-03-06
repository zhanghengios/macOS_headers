//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICCloudClient, ICUserIdentity, _MPCloudControllerImplementation;
@protocol OS_dispatch_queue;

@interface MPCloudController : NSObject
{
    _MPCloudControllerImplementation *_implementation;
    ICCloudClient *_cloudClient;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (void)_postNotificationName:(id)arg1 controller:(id)arg2 userInfo:(id)arg3;
+ (void)_postNotificationName:(id)arg1 controller:(id)arg2;
+ (void)migrateCellularDataPreferencesIfNeeded;
+ (BOOL)isMediaApplication;
+ (id)_controllerWithUserIdentity:(id)arg1 createIfRequired:(BOOL)arg2;
+ (id)controllerWithUserIdentity:(id)arg1;
+ (id)sharedCloudController;
+ (id)internalToExternalNotificationMapping;
+ (id)controllers;
+ (id)globalSerialQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) ICCloudClient *cloudClient; // @synthesize cloudClient=_cloudClient;
- (void).cxx_destruct;
@property(retain, nonatomic) _MPCloudControllerImplementation *implementation; // @synthesize implementation=_implementation;
- (void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2;
- (void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2;
- (void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3;
- (void)fetchRecommendedContentWithSeedTrackID:(long long)arg1 seedTrackIDType:(long long)arg2 count:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) BOOL enablingJaliscoGeniusRequiresTerms;
@property(readonly, nonatomic, getter=isJaliscoGeniusEnabled) BOOL jaliscoGeniusEnabled;
- (void)updateJaliscoMediaLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)cloudAddToPlaylistBehavior;
- (void)disableCloudLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableCloudLibraryWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isCloudLibraryEnabled;
@property(readonly, nonatomic, getter=isEnablingCloudLibraryDestructive) BOOL enablingCloudLibraryDestructive;
- (void)resignActive;
- (void)loadJaliscoLibraryUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadCloudMusicLibraryUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL isJaliscoUpdateInProgress;
@property(readonly, nonatomic) BOOL isCloudLibraryUpdateInProgress;
@property(readonly, nonatomic) BOOL isUpdateInProgress;
@property(readonly, nonatomic) BOOL isJaliscoInitialImport;
@property(readonly, nonatomic) BOOL isCloudLibraryInitialImport;
@property(readonly, nonatomic) BOOL isInitialImport;
@property(readonly, nonatomic) BOOL isGeniusEnabled;
- (void)becomeActiveAndWaitUntilDone:(BOOL)arg1;
- (void)becomeActive;
- (void)deprioritizeArtworkRequestForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4;
- (void)loadArtworkInfoForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)loadArtworkForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStoreItemWithAdamID:(long long)arg1 referralObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)uploadCloudItemProperties;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)uploadArtworkForPlaylist:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadCloudPlaylistProperties;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 referralObject:(id)arg2 toPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sdk_createPlaylistWithPersistenID:(unsigned long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateSubscribedPlaylistWithSagaID:(unsigned long long)arg1 ignoreMinRefreshInterval:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) BOOL hasPurchaseHistoryAccount;
@property(readonly, nonatomic) BOOL hasCloudLockerAccount;
@property(readonly, nonatomic) BOOL isCloudEnabled;
@property(readonly, nonatomic) BOOL canShowCloudVideo;
@property(readonly, nonatomic) BOOL canShowCloudMusic;
@property(readonly, nonatomic) BOOL canDefaultMediaLibraryShowCloudContent;
@property(readonly, nonatomic) BOOL canShowCloudDownloadButtons;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)isCellularDataRestricted;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
@property(readonly, nonatomic) ICUserIdentity *userIdentity;
- (id)description;
- (void)_receivedImplementationNotification:(id)arg1;
- (id)_initWithUserIdentity:(id)arg1;
- (id)init;

@end

