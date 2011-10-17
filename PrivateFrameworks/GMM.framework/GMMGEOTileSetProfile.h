/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSURL, NSString;

@interface GMMGEOTileSetProfile : NSObject <GEOTileSetProfile> {
    BOOL _isChina;
}

@property BOOL isChina;
@property(readonly) int style;
@property(readonly) NSString * baseURLString;
@property(readonly) NSURL * multiTileURL;
@property(readonly) unsigned int operatingEdition;
@property(readonly) int size;
@property(readonly) int scale;

+ (id)sharedProfile;

- (unsigned int)operatingEdition;
- (id)multiTileURL;
- (id)baseURLString;
- (id)attributionInfoForTileKeys:(id)arg1;
- (void)loadAttributionBadgeDataHiDPI:(BOOL)arg1 isIPad:(BOOL)arg2 handler:(id)arg3;
- (BOOL)needsAttributionBadge;
- (unsigned int)maxZoomLevelForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (unsigned int)minZoomLevelForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (BOOL)isAvailableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (BOOL)isChina;
- (int)maxChinaZoomLevel;
- (void)setIsChina:(BOOL)arg1;
- (int)style;
- (int)scale;
- (int)size;

@end
