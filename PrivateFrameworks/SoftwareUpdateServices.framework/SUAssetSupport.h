/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUAssetSupport : NSObject  {
}

+ (id)tryCreateDescriptorFromCachedAsset;
+ (void)cleanupAssets:(id)arg1;
+ (id)localURLForAsset:(struct __MobileAsset { }*)arg1;
+ (id)assetDownloadOptionsFromMetadata:(id)arg1 priority:(int)arg2;
+ (id)defaultAssetDownloadOptionsWithPriority:(int)arg1;
+ (id)tryCreateDocumentationFromAsset:(struct __MobileAsset { }*)arg1;
+ (id)createPossibleDocumentationAssetsFromDescriptor:(id)arg1;
+ (id)createDescriptorFromAsset:(struct __MobileAsset { }*)arg1 state:(id)arg2;
+ (void)cleanupAsset:(struct __MobileAsset { }*)arg1;
+ (id)tryCreateDescriptorFromAsset:(struct __MobileAsset { }*)arg1;
+ (struct __MobileAsset { }*)createUpdateAssetUsingProductType:(id)arg1 productBuild:(id)arg2 productVersion:(id)arg3 releaseType:(id)arg4;
+ (void)cleanupUpdateAndDocumentationForAsset:(struct __MobileAsset { }*)arg1;
+ (struct __MobileAsset { }*)createDefaultUpdateAsset;


@end
