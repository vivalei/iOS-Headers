//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<TSDAutoscrollDelegate>, NSTimer;

__attribute__((visibility("hidden")))
@interface TSDAutoscroll : NSObject
{
    NSObject<TSDAutoscrollDelegate> *mTarget;
    struct CGPoint mPoint;
    int mDirections;
    double mRepeatInterval;
    NSTimer *mTimer;
    unsigned int mCount;
    BOOL mActive;
    struct CGPoint mLastAutoscrollDelta;
    double mLastFired;
}

+ (void)startAutoscroll:(id)arg1 unscaledPoint:(struct CGPoint)arg2;
@property(readonly, nonatomic) struct CGPoint lastAutoscrollDelta; // @synthesize lastAutoscrollDelta=mLastAutoscrollDelta;
@property(nonatomic) BOOL active; // @synthesize active=mActive;
@property(nonatomic) unsigned int count; // @synthesize count=mCount;
@property(nonatomic) double repeatInterval; // @synthesize repeatInterval=mRepeatInterval;
@property(nonatomic) int directions; // @synthesize directions=mDirections;
@property(nonatomic) struct CGPoint point; // @synthesize point=mPoint;
@property(nonatomic) NSObject<TSDAutoscrollDelegate> *target; // @synthesize target=mTarget;
- (void)timerFired:(id)arg1;
- (unsigned int)p_deltaForCount:(unsigned int)arg1;
- (void)invalidate;
- (BOOL)startAutoscroll:(id)arg1 unscaledPoint:(struct CGPoint)arg2 directions:(int)arg3 repeatInterval:(double)arg4;
- (void)dealloc;

@end
