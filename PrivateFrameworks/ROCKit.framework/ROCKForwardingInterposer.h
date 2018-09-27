/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKForwardingInterposer : NSObject {
    <NSObject> * _remoteObject;
}

@property (nonatomic, retain) <NSObject> *remoteObject;

+ (id)forwardingInterposerWithRemoteObject:(id)arg1;

- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1;
- (void)forwardCallWithInvocation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithRemoteObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)remoteObject;
- (bool)respondsToSelector:(SEL)arg1;
- (id)rockEncodeWithSessionManager:(id)arg1 error:(id*)arg2;
- (void)setRemoteObject:(id)arg1;

@end