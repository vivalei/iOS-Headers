/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TouchRemote/TRPacketEvent.h>

@class NSString;

@interface TRKeyboardUserEntryPacketEvent : TRPacketEvent
{
    long long _commandType;
    unsigned long long _sessionID;
    NSString *_text;
}

+ (unsigned int)_packetEventType;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) long long commandType; // @synthesize commandType=_commandType;
- (void).cxx_destruct;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (id)initWithCommandType:(long long)arg1 sessionID:(unsigned long long)arg2 text:(id)arg3;

@end

