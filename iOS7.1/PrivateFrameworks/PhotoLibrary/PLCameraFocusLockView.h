//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibrary/PLCameraFocusView.h>

@class CAKeyframeAnimation;

@interface PLCameraFocusLockView : PLCameraFocusView
{
    CAKeyframeAnimation *_lockBoundsAnimation;
    BOOL _scalingDown;
    BOOL _shouldEndFocus;
    struct CGAffineTransform _defaultTransform;
}

- (void)focusDidEnd;
- (void)startAnimating;
- (void)animateScaleDown;
- (void)finishedScalingDown;
- (void)animateLock;
- (id)_createLockBoundsAnimation;
- (void)dealloc;
- (id)init;

@end

