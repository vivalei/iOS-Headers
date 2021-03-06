//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSArray, NSFetchRequest, NSObject<OS_dispatch_queue>, PHBatchFetchingArray, PHQuery, _PHFetchRequestWrapper;

@interface PHFetchResult : NSObject <NSCopying, NSFastEnumeration>
{
    PHBatchFetchingArray *_fetchedObjects;
    NSArray *_seedOIDs;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    BOOL _registeredForChangeNotificationDeltas;
    unsigned int _photosCount;
    unsigned int _videosCount;
    unsigned int _audiosCount;
    _PHFetchRequestWrapper *_fetchRequestWrapper;
    int _chunkSizeForFetch;
    PHQuery *_query;
}

+ (id)_batchFetchingArrayForObjectIDs:(id)arg1 fetchResult:(id)arg2;
+ (id)fetchObjectIDs:(id)arg1;
+ (id)bulkFetchResultForAssetsWithObjectIDs:(id)arg1 changeDetails:(BOOL)arg2;
+ (id)pl_fetchResultForStandInAssetCollection:(id)arg1;
+ (id)pl_fetchResultForAssetContainerList:(id)arg1;
+ (id)pl_filterPredicateForAssetContainer:(id)arg1;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1;
@property(readonly) PHQuery *query; // @synthesize query=_query;
@property int chunkSizeForFetch; // @synthesize chunkSizeForFetch=_chunkSizeForFetch;
- (void).cxx_destruct;
- (id)description;
- (void)getMediaTypeCounts;
- (unsigned int)countOfAssetsWithMediaType:(int)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectsAtIndexes:(id)arg1;
@property(readonly, nonatomic) id lastObject;
@property(readonly, nonatomic) id firstObject;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)indexOfObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
@property(readonly) unsigned int count;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (BOOL)interestedInChange:(id)arg1;
- (void)setRegisteredForChangeNotificationDeltas:(BOOL)arg1;
- (BOOL)isRegisteredForChangeNotificationDeltas;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)objectIDAtIndex:(unsigned int)arg1;
@property(readonly) NSArray *fetchedObjectIDs;
- (id)containerIdentifier;
- (int)collectionFetchType;
@property(readonly) NSArray *fetchedObjects;
@property(readonly) NSFetchRequest *fetchRequest;
- (id)changeHandlingValue;
- (id)changeHandlingKey;
- (id)photoLibrary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 oids:(id)arg2 registerIfNeeded:(BOOL)arg3;
- (id)initWithQuery:(id)arg1;
- (id)pl_photoLibraryObject;

@end

