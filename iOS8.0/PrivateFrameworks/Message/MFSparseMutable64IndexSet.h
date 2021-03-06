//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface MFSparseMutable64IndexSet : NSObject <NSCopying, NSMutableCopying>
{
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    unsigned long long *_storage;
}

+ (id)indexSet;
- (id)description;
- (unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1;
- (unsigned long long)firstIndex;
- (unsigned int)count;
- (BOOL)containsIndex:(unsigned long long)arg1;
- (void)removeIndex:(unsigned long long)arg1;
- (void)addIndexes:(id)arg1;
- (void)addIndex:(unsigned long long)arg1;
- (unsigned long)_insertionPositionOfIndex:(unsigned long long)arg1;
- (unsigned long)_positionOfIndex:(unsigned long long)arg1;
- (void)_garbageCollectStorageIfNecessary;
- (void)_incrementStorageIfNecessaryForCount:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

