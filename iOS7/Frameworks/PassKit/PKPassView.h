/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "PKPassFaceDelegate-Protocol.h"

@class NSString, PKPass, PKPassBackFaceView, PKPassColorProfile, PKPassFaceView, PKPassFrontFaceView;

@interface PKPassView : UIView <PKPassFaceDelegate>
{
    PKPassFrontFaceView *_frontFace;
    PKPassBackFaceView *_backFace;
    PKPassFaceView *_visibleFace;
    PKPassFaceView *_otherFace;
    PKPassColorProfile *_colorProfile;
    id <WLCardViewDelegate> _delegate;
    _Bool _backFaceIsTall;
    PKPass *_pass;
    long long _contentMode;
    long long _suppressedContent;
}

@property(nonatomic) long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(nonatomic) _Bool backFaceIsTall; // @synthesize backFaceIsTall=_backFaceIsTall;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) id <WLCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_flipPass:(_Bool)arg1 fromLeft:(_Bool)arg2 notify:(_Bool)arg3;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)unregisterForEnterBackgroundNotification;
- (void)registerForEnterBackgroundNotification;
- (void)_updateBackFaceSuppressedContent;
- (void)_updateFrontFaceSuppressedContent;
- (_Bool)_visibleFaceShouldClipForCurrentViewMode:(double *)arg1;
- (long long)_regionsForCurrentModes;
- (long long)_frontFaceBackgroundModeForContentMode;
- (void)_applyContentMode;
- (void)passFaceShareButtonPressed:(id)arg1;
- (void)passFaceFlipButtonPressed:(id)arg1;
- (_Bool)passFaceDeleteButtonEnabled;
- (void)passFaceDeleteButtonPressed:(id)arg1;
- (void)flipPass:(_Bool)arg1 fromLeft:(_Bool)arg2 notify:(_Bool)arg3;
- (void)createBackFaceIfNecessary;
- (void)updateValidityDisplay;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1 withDuration:(double)arg2;
- (void)setDimmer:(double)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool frontFaceBodyContentCreated;
@property(readonly, nonatomic) _Bool showingFront;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)item;
- (void)prepareForFlip;
- (id)snapshotOfFrontFace;
- (struct CGRect)frameOfVisibleFace;
- (struct CGSize)sizeOfFrontFace;
- (struct CGSize)sizeOfBackFace;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithPass:(id)arg1 content:(long long)arg2;
- (id)initWithPass:(id)arg1;

@end

