/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetWriterHelper, AVAssetWriterInternal, NSArray, NSError, NSString, NSURL;

@interface AVAssetWriter : NSObject
{
    AVAssetWriterInternal *_internal;
}

+ (void)initialize;
+ (id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id *)arg3;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)keyPathsForValuesAffectingError;
- (id)init;
- (id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (void)finalize;
- (id)description;
@property(retain, getter=_helper, setter=_setHelper:) AVAssetWriterHelper *helper;
@property(readonly, copy, nonatomic) NSURL *outputURL;
@property(readonly, copy, nonatomic) NSString *outputFileType;
@property(readonly, nonatomic) NSArray *availableMediaTypes;
@property(readonly) int status;
@property(readonly) NSError *error;
- (CDStruct_1b6d18a9)movieFragmentInterval;
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) BOOL shouldOptimizeForNetworkUse;
- (int)movieTimeScale;
- (void)setMovieTimeScale:(int)arg1;
@property(readonly, nonatomic) NSArray *inputs;
- (BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (BOOL)canAddInput:(id)arg1;
- (void)addInput:(id)arg1;
@property(copy, nonatomic) NSArray *metadata;
- (BOOL)startWriting;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)cancelWriting;
- (BOOL)finishWriting;
- (void)_transitionToFailedStatusWithError:(id)arg1;

@end
