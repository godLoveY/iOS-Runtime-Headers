/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFFileCache : NSObject {
    double _accessDateTimeAdjustment;
    <SBFFileCacheDelegate> *_delegate;
    <SBFFileCacheFaultHandler> *_faultHandler;
    NSMutableArray *_manifest;
    double _maxAllowedTimeSinceGeneration;
    double _maxAllowedTimeSinceLastAccess;
    unsigned int _maxTotalFileCount;
    unsigned int _maxTotalFileSize;
    NSObject<OS_dispatch_queue> *_queue;
    <SBFFileCacheStore> *_store;
}

@property double accessDateTimeAdjustment;
@property <SBFFileCacheDelegate> *delegate;
@property (nonatomic, readonly) <SBFFileCacheFaultHandler> *faultHandler;
@property double maxAllowedTimeSinceGeneration;
@property double maxAllowedTimeSinceLastAccess;
@property unsigned int maxTotalFileCount;
@property unsigned int maxTotalFileSize;
@property (nonatomic, readonly) <SBFFileCacheStore> *store;

- (void).cxx_destruct;
- (void)_queue_createManifestEntryForGeneratedFileWrapper:(id)arg1 filename:(id)arg2 usingStore:(id)arg3;
- (void)_queue_evictFileWithInfo:(id)arg1 usingStore:(id)arg2;
- (void)_queue_evictFilesAtManifestIndexes:(id)arg1 usingStore:(id)arg2;
- (void)_queue_evictIfNeededUsingStore:(id)arg1;
- (void)_queue_loadManifestUsingStore:(id)arg1;
- (void)_queue_removeManifestEntryForFilename:(id)arg1 usingStore:(id)arg2;
- (void)_queue_resetManifestUsingStore:(id)arg1;
- (void)_queue_saveManifestUsingStore:(id)arg1;
- (void)_queue_updateManifestForLoadedFileWrapper:(id)arg1 filename:(id)arg2 usingStore:(id)arg3;
- (double)accessDateTimeAdjustment;
- (id)callbackQueue;
- (id)delegate;
- (id)description;
- (id)faultHandler;
- (id)fileNameForIdentifier:(id)arg1;
- (id)init;
- (id)initWithStore:(id)arg1 faultHandler:(id)arg2;
- (void)loadFileWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (double)maxAllowedTimeSinceGeneration;
- (double)maxAllowedTimeSinceLastAccess;
- (unsigned int)maxTotalFileCount;
- (unsigned int)maxTotalFileSize;
- (void)performOnWorkQueueUsingBlock:(id /* block */)arg1;
- (void)removeAllFiles;
- (void)removeFileWithIdentifier:(id)arg1;
- (void)setAccessDateTimeAdjustment:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaxAllowedTimeSinceGeneration:(double)arg1;
- (void)setMaxAllowedTimeSinceLastAccess:(double)arg1;
- (void)setMaxTotalFileCount:(unsigned int)arg1;
- (void)setMaxTotalFileSize:(unsigned int)arg1;
- (id)store;

@end