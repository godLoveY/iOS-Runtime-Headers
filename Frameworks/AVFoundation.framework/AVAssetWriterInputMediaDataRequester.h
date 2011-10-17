/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputMediaDataRequester : NSObject  {
    AVAssetWriterInputWritingHelper *_writingHelper;
    struct dispatch_queue_s { } *_requestQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _requestBlock;

}

@property(readonly) id requestBlock;
@property(readonly) struct dispatch_queue_s { }* requestQueue;


- (void)invalidate;
- (void)finalize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)initWithAssetWriterInputWritingHelper:(id)arg1 requestQueue:(struct dispatch_queue_s { }*)arg2 requestBlock:(id)arg3;
- (void)startRequestingMediaData;
- (struct dispatch_queue_s { }*)requestQueue;
- (id)requestBlock;
- (void)_requestMediaDataIfReady;
- (id)init;
- (void)dealloc;

@end