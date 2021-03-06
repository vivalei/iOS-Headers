//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderSampleReferenceOutputInternal, AVAssetTrack;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput
{
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)arg1;
- (BOOL)_enableTrackExtractionReturningError:(id *)arg1;
- (BOOL)_trimsSampleDurations;
- (id)_asset;
- (id)mediaType;
@property(readonly, nonatomic) AVAssetTrack *track;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithTrack:(id)arg1;
- (id)init;

@end

