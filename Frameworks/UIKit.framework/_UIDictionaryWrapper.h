/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL, NSString;

@interface _UIDictionaryWrapper : NSObject  {
    const struct __DCSDictionary { } *dictionary;
    NSURL *fileURL;
    NSString *indexLanguage;
    NSString *definitionLanguage;
    int type;
}

@property(readonly) struct __DCSDictionary { }* dictionary;
@property(readonly) NSURL * fileURL;
@property(readonly) NSString * indexLanguage;
@property(readonly) NSString * definitionLanguage;
@property(readonly) int type;
@property(readonly) unsigned int definitionLanguageDirection;

+ (id)dictionariesWithDictionary:(struct __DCSDictionary { }*)arg1;

- (id)markupForString:(id)arg1;
- (unsigned int)definitionLanguageDirection;
- (id)initWithDictionary:(struct __DCSDictionary { }*)arg1 language:(id)arg2;
- (id)definitionLanguage;
- (int)compareToDictionary:(id)arg1;
- (id)indexLanguage;
- (id)fileURL;
- (int)type;
- (BOOL)hasMarkupForString:(id)arg1;
- (struct __DCSDictionary { }*)dictionary;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;

@end
