//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SKUIItemOfferButtonDelegate.h"

@class MPUChronologicalProgressView, MPUItemOfferButton, MPUMediaControlsTitlesView, MPUMediaControlsVolumeView, MPUSkipLimitView, MPUSystemBuyButtonConfiguration, MPUTransportControlsView, NSString;

@interface MPUSystemMediaControlsView : UIView <SKUIItemOfferButtonDelegate>
{
    MPUItemOfferButton *_buyTrackButton;
    MPUItemOfferButton *_buyAlbumButton;
    int _prefsChangedNotifyToken;
    id <MPUSystemMediaControlsViewDelegate> _delegate;
    int _style;
    MPUSkipLimitView *_skipLimitView;
    MPUTransportControlsView *_transportControlsView;
    MPUChronologicalProgressView *_timeInformationView;
    MPUMediaControlsTitlesView *_trackInformationView;
    MPUMediaControlsVolumeView *_volumeView;
    MPUSystemBuyButtonConfiguration *_buyTrackConfiguration;
    MPUSystemBuyButtonConfiguration *_buyAlbumConfiguration;
}

@property(readonly, nonatomic) MPUSystemBuyButtonConfiguration *buyAlbumConfiguration; // @synthesize buyAlbumConfiguration=_buyAlbumConfiguration;
@property(readonly, nonatomic) MPUSystemBuyButtonConfiguration *buyTrackConfiguration; // @synthesize buyTrackConfiguration=_buyTrackConfiguration;
@property(readonly, nonatomic) MPUMediaControlsVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(readonly, nonatomic) MPUMediaControlsTitlesView *trackInformationView; // @synthesize trackInformationView=_trackInformationView;
@property(readonly, nonatomic) MPUChronologicalProgressView *timeInformationView; // @synthesize timeInformationView=_timeInformationView;
@property(readonly, nonatomic) MPUTransportControlsView *transportControlsView; // @synthesize transportControlsView=_transportControlsView;
@property(readonly, nonatomic) MPUSkipLimitView *skipLimitView; // @synthesize skipLimitView=_skipLimitView;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) __weak id <MPUSystemMediaControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setDownloadProgress:(float)arg1 forBuyButton:(id)arg2;
- (void)_setProgressType:(unsigned int)arg1 forBuyButton:(id)arg2;
- (void)_setConfirmationState:(BOOL)arg1 forBuyButton:(id)arg2;
- (void)_updateBuyButton:(id)arg1 withOffer:(id)arg2;
- (id)_createBuyButtonWithTitle:(id)arg1 style:(int)arg2;
- (id)_buyButtonForConfiguration:(id)arg1;
- (id)_createBuyButtonConfiguration;
- (struct UIEdgeInsets)_controlsInsets;
- (void)_setBuyButtonVisibility:(BOOL)arg1 forButton:(id)arg2;
- (BOOL)_systemwideBuyButtonsEnabled;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_buyButtonPurchaseAction:(id)arg1;
- (void)_buyButtonShowConfirmationAction:(id)arg1;
- (void)_buyButtonCancelConfirmationAction:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updatePlaybackState:(BOOL)arg1;
- (void)_layoutBuyButtonsControlCenteriPad;
- (void)_layoutSubviewsControlCenteriPad;
- (void)_layoutBuyButtons;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
