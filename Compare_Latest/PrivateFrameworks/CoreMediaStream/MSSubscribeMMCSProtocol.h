/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreMediaStream/MSMMCSProtocol.h>

#import "MSSubscribeStorageProtocol-Protocol.h"

@class NSMutableDictionary;

@interface MSSubscribeMMCSProtocol : MSMMCSProtocol <MSSubscribeStorageProtocol>
{
    id <MSSubscribeStorageProtocolDelegate> _delegate;
    unsigned int _itemCount;
    NSMutableDictionary *_itemIDToAssetDict;
    unsigned long long *_itemIDs;
    const char **_signatures;
    char **_authTokens;
}

@property id <MSSubscribeStorageProtocolDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_requestCompleted;
- (void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3;
- (void)retrieveAssets:(id)arg1;
- (void)_tellDelegateProtocolDidFinishRetrievingAssetParams:(id)arg1;
- (void)dealloc;
- (void)deactivate;
- (id)initWithPersonID:(id)arg1;

@end
