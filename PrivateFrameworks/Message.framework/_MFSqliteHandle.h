/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMailMessageLibrary;

@interface _MFSqliteHandle : NSObject  {
    MFMailMessageLibrary *library;
    struct sqlite3 { } *db;
}

+ (id)handleForDB:(struct sqlite3 { }*)arg1 library:(id)arg2;

- (void)closeConnection;

@end
