/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class LSApplicationProxy, NSString, NSArray;

@interface LSApplicationProxy : LSResourceProxy  {
    unsigned int _flags;
    NSArray *_privateDocumentIconNames;
    LSApplicationProxy *_privateDocumentTypeOwner;
}

@property(readonly) NSString * applicationIdentifier;
@property(readonly) NSString * roleIdentifier;

+ (id)applicationProxyForIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1 roleIdentifier:(id)arg2;

- (id)applicationIdentifier;
- (id)localizedName;
- (id)roleIdentifier;
- (BOOL)privateDocumentIconAllowOverride;
- (id)iconStyleDomain;
- (id)resourcesDirectoryURL;
- (id)containerURL;
- (id)privateDocumentIconNames;
- (id)_initWithApplicationIdentifier:(id)arg1 name:(id)arg2 containerURL:(id)arg3 resourcesDirectoryURL:(id)arg4 iconsDictionary:(id)arg5 iconFileNames:(id)arg6 iconIsPrerendered:(BOOL)arg7;
- (id)privateDocumentTypeOwner;
- (void)setPrivateDocumentIconNames:(id)arg1;
- (void)setPrivateDocumentIconAllowOverride:(BOOL)arg1;
- (void)setPrivateDocumentTypeOwner:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;
- (struct CGSize { float x1; float x2; })_defaultStyleSize:(id)arg1;

@end
