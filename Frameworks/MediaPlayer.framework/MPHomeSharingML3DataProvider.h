/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableSet, NSMutableDictionary, HSLibrary;

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3  {
    HSLibrary *_homeSharingLibrary;
    NSMutableDictionary *_tokenDataForDSIDs;
    NSMutableSet *_loadedContainerPIDs;
    NSMutableDictionary *_blocksForLoadingContainerPIDs;
    struct dispatch_queue_s { } *_containerFillQueue;
    int _homeSharingGroupIDChangedToken;
    unsigned int _updateCheckEnabled : 1;
}

@property(readonly) HSLibrary * homeSharingLibrary;
@property(readonly) BOOL isSupportedSharingVersion;

+ (BOOL)hasHomeSharingCredentials;
+ (BOOL)isConnecting;
+ (void)determineHomeSharingGroupIDForAppleID:(id)arg1 password:(id)arg2 completionHandler:(id)arg3;
+ (BOOL)canValidateHomeSharingCredentials;
+ (BOOL)isScanningForLibraries;
+ (id)homeSharingAppleID;
+ (id)homeSharingGroupID;
+ (void)_determineHomeSharingGroupIDIfNecessary;
+ (void)endScanningForLibraries;
+ (void)beginScanningForLibraries;

- (BOOL)requiresAuthentication;
- (id)protectedContentSupportStorageURL;
- (void)setRentalPlaybackStartDateForItemID:(unsigned long long)arg1;
- (void)updateUbiquitousBookmarksWithKey:(id)arg1 bookmarkMediaValue:(id)arg2;
- (void)setTokenData:(id)arg1 forAuthorizedDSID:(unsigned long long)arg2;
- (id)_tokenDataForMediaItem:(id)arg1;
- (void)_fillContainerForQueryCriteria:(id)arg1 completionBlock:(id)arg2;
- (void)_fetchTokensForAuthorizedDSIDs;
- (void)_scheduleUpdateCheck;
- (BOOL)isSupportedSharingVersion;
- (id)homeSharingLibrary;
- (id)initWithHomeSharingLibrary:(id)arg1;
- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;
- (void)loadCollectionsUsingFetchRequest:(id)arg1;
- (void)loadItemsUsingFetchRequest:(id)arg1;
- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(id)arg2;
- (void)loadCoverFlowArtworkImageForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadBestTimedArtworkImageDataForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(id)arg4;
- (void)loadBestArtworkImageDataForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3;
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)arg1;
- (id)errorResolverForMediaItem:(id)arg1;
- (void)downloadItemWithIdentifier:(long long)arg1 completionHandler:(id)arg2;
- (BOOL)hasGeniusMixes;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(id)arg2 progressHandler:(id)arg3;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)disconnect;
- (id)uniqueIdentifier;
- (id)name;
- (void)dealloc;

@end
