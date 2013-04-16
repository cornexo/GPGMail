/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "ColorBackgroundView.h"

#import "BannerContainer-Protocol.h"

@class MessageViewingPaneController, MultiSelectionPlaceholderView, NSTableView, NSView;

@interface MessageViewingPane : ColorBackgroundView <BannerContainer>
{
    MessageViewingPaneController *_controller;
    NSTableView *_collectionView;
    MultiSelectionPlaceholderView *_selectionPlaceholderView;
    NSView *_bannerView;
    unsigned long long _innerShadow;
    BOOL _isDoingLayout;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
@property(nonatomic) unsigned long long innerShadow;
- (void)drawRect:(struct CGRect)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)showBanner:(id)arg1;
- (id)bannerView;
- (void)removeBanner;
- (void)layoutSubviews;
- (void)updateSelectionDisplayWithMessages:(id)arg1;
- (BOOL)isDisplayingSelectionPlaceholderView;
@property(nonatomic) MessageViewingPaneController *controller; // @synthesize controller=_controller;

@end
