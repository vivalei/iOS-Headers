/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAVCore/IMAVChat.h>

@interface IMAVChat (IMAVChatAudioAdditions)
@property(nonatomic) _Bool isSendingAudio;
@property(readonly, nonatomic) _Bool didRemoteMute;
@property(nonatomic, setter=setRemoteMute:) _Bool isRemoteMute;
- (void)toggleMute;
@property(nonatomic, setter=setMute:) _Bool isMute;
@end
