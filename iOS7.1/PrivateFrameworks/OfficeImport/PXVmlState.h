//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OAVState.h>

@class ESDObject, PBPresentationReaderState;

__attribute__((visibility("hidden")))
@interface PXVmlState : OAVState
{
    ESDObject *mLegacyTextGlobals;
    PBPresentationReaderState *mLegacyPresentationState;
}

- (void)setLegacyPresentationState:(id)arg1;
- (id)legacyPresentationState;
- (void)setLegacyTextGlobals:(id)arg1;
- (id)legacyTextGlobals;
- (void)dealloc;

@end
