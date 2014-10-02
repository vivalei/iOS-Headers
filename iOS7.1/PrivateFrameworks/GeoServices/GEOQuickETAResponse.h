//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOLocation;

__attribute__((visibility("hidden")))
@interface GEOQuickETAResponse : NSObject
{
    GEOLocation *_sourceLocation;
    GEOLocation *_destinationLocation;
    unsigned int _liveETASeconds;
    unsigned int _historicalETASeconds;
    unsigned int _distance;
}

@property(readonly, nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) unsigned int historicalETASeconds; // @synthesize historicalETASeconds=_historicalETASeconds;
@property(readonly, nonatomic) unsigned int liveETASeconds; // @synthesize liveETASeconds=_liveETASeconds;
@property(readonly, nonatomic) GEOLocation *destinationLocation; // @synthesize destinationLocation=_destinationLocation;
@property(readonly, nonatomic) GEOLocation *sourceLocation; // @synthesize sourceLocation=_sourceLocation;
- (void)dealloc;
- (id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2;
- (id)initWithETAResult:(id)arg1 fromRequest:(id)arg2;

@end
