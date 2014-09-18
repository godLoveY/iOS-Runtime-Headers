/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSBundle, NSString, NSURL;

@interface TSATemplateInfo : NSObject {
    NSString *_displayName;
    NSString *_identifier;
}

@property(copy) NSString * displayName;
@property(readonly) NSURL * documentURL;
@property(readonly) NSString * identifier;
@property(readonly) bool isAvailable;
@property(readonly) bool isUserTemplate;
@property(readonly) NSBundle * localizationBundle;
@property(readonly) NSURL * previewImageURL;

- (void)dealloc;
- (id)displayName;
- (id)documentURL;
- (id)identifier;
- (id)initWithDisplayName:(id)arg1;
- (bool)isAvailable;
- (bool)isUserTemplate;
- (id)localizationBundle;
- (id)makeIdentifier;
- (void)prepareForNewDocumentWithQueue:(id)arg1 completionHandler:(id)arg2;
- (id)previewImageURL;
- (void)setDisplayName:(id)arg1;

@end