//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface GEOThrottleKey : NSObject
{
    NSURL *_serverURL;
    unsigned int _requestType;
}

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithRequestType:(unsigned int)arg1 serverURL:(id)arg2;

@end

