/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSThread, PLManagedObjectContext, NSRecursiveLock, NSMutableArray;

@interface PLImporter : NSObject  {
    NSRecursiveLock *_accessLock;
    NSMutableArray *_importQueue;
    NSThread *_workerThread;
    BOOL _cancelCurrentImport;
}

@property(readonly) PLManagedObjectContext * managedObjectContext;

+ (BOOL)importInProgress;
+ (id)identifierForNewImportSession;
+ (id)sharedImporter;

- (void)checkDirectoriesInOrphanChecklist;
- (void)_removeOrphanedMediaFilesFromDirectories:(id)arg1;
- (BOOL)_testAndClearCancelImportFlag;
- (void)_removeOrphanedMediaFilesFromDirectory:(id)arg1;
- (void)notifySuccessOnMainThread:(id)arg1;
- (void)notifyFailureOnMainThread:(id)arg1;
- (void)notifyOnMainThread:(id)arg1;
- (void)workerThread:(id)arg1;
- (void)queueImportFilesAtDirectoryPath:(id)arg1 baseName:(id)arg2 sidecarFileInfo:(id)arg3 intoEvent:(struct NSObject { Class x1; }*)arg4 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg5 importSessionIdentifier:(id)arg6;
- (int)queuedImportCount;
- (void)addDirectoryToOrphanChecklist:(id)arg1;
- (id)cancelAllImports;
- (void)removeDirectoryFromOrphanChecklist:(id)arg1;
- (void)queueImportFileAtPath:(id)arg1 intoEvent:(struct NSObject { Class x1; }*)arg2 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg3 importSessionIdentifier:(id)arg4;
- (id)managedObjectContext;
- (id)init;
- (void)dealloc;

@end
