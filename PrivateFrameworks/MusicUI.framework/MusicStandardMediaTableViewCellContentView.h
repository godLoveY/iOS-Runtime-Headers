/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSArray;

@interface MusicStandardMediaTableViewCellContentView : MusicMediaTableViewCellContentView {
}

@property(copy,readonly) NSArray * rightAccessoryViews;
@property(readonly) double rightContentInset;
@property(readonly) long long titleLabelNumberOfLines;

+ (id)_subtitleRegularTextAttributes;
+ (id)_titleRegularTextAttributes;
+ (struct CGSize { double x1; double x2; })artworkSize;
+ (void)contentSizeCategoryDidChange;
+ (id)detailEmphasizedTextAttributes;
+ (id)detailRegularTextAttributes;
+ (double)interLabelLeading;
+ (id)subtitleEmphasizedTextAttributes;
+ (id)subtitleRegularTextAttributes;
+ (double)textLeadingDistance;
+ (double)textLeadingDistanceFromArtwork;
+ (id)titleEmphasizedTextAttributes;
+ (id)titleRegularTextAttributes;

- (void)layoutSubviews;
- (void)reloadContent;
- (id)rightAccessoryViews;
- (double)rightContentInset;
- (void)setDisplayAsDisabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)titleLabelNumberOfLines;

@end