/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, NSData;

@interface ML3MusicLibrary_SortMapEntry : NSObject  {
    long long _nameOrder;
    NSString *_name;
    NSData *_sortKey;
    int _nameSection;
}


- (id)initWithStatement:(struct sqlite3_stmt { }*)arg1;
- (id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3;
- (id)description;
- (void)dealloc;

@end
