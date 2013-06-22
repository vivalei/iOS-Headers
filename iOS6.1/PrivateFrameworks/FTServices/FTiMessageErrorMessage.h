/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FTServices/FTiMessagePeerMessage.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface FTiMessageErrorMessage : FTiMessagePeerMessage <NSCopying>
{
    NSString *_failedMessageID;
    NSNumber *_failureReason;
}

@property(copy) NSNumber *failureReason; // @synthesize failureReason=_failureReason;
@property(copy) NSString *failedMessageID; // @synthesize failedMessageID=_failedMessageID;
- (id)messageBody;
- (int)command;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
