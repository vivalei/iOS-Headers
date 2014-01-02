/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBUIAnimationAlertToPhoneBase.h"

@class SBDisableAppStatusBarAlphaChangesAssertion, UIView;

@interface SBUIAnimationFadeAlertToPhone : SBUIAnimationAlertToPhoneBase
{
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAlphaChangeAssertion;
    long long _launchingOrientation;
    UIView *_fakeStatusBarViewContainer;
    _Bool _appIsTranslucent;
}

- (void)_removeFakeStatusBarIfNecessary;
- (void)_showFakeStatusBarIfNecessary;
- (void)_setupFakeStatusBarIfNecessary;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)dealloc;

@end
