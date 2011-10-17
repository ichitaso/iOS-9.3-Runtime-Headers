/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
 */

@class NSURL, NSMutableDictionary;

@interface LBItem : NSObject  {
    NSURL *_url;
    NSMutableDictionary *_attributes;
    id _replacement;
}

@property id replacement;


- (id)attributeForName:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)path;
- (id)attributesForNames:(id)arg1;
- (id)attributeNames;
- (id)initWithURL:(id)arg1;
- (id)url;
- (id)_attributes;
- (void)dealloc;
- (void)updateInfo:(id)arg1;
- (void)setReplacement:(id)arg1;
- (id)initWithURL:(id)arg1 itemUpdateInfo:(id)arg2;
- (id)replacement;

@end
