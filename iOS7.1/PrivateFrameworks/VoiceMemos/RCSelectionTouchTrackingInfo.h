//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UITouch;

@interface RCSelectionTouchTrackingInfo : NSObject
{
    float _lastLocation;
    UITouch *_touch;
    float _trackingOffset;
    int _selectionBarType;
    int _selectionAffinity;
}

@property(nonatomic) int selectionAffinity; // @synthesize selectionAffinity=_selectionAffinity;
@property(nonatomic) int selectionBarType; // @synthesize selectionBarType=_selectionBarType;
@property(nonatomic) float trackingOffset; // @synthesize trackingOffset=_trackingOffset;
@property(nonatomic) __weak UITouch *touch; // @synthesize touch=_touch;
- (void).cxx_destruct;
- (id)description;
- (void)updateTrackingInfo;

@end

