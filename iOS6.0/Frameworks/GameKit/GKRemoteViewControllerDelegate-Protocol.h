/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class GKGame;

@protocol GKRemoteViewControllerDelegate <NSObject>
@property(retain, nonatomic) GKGame *game;
- (void)setCurrentGame:(id)arg1 andLocalPlayer:(id)arg2 withReply:(id)arg3;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(id)arg3;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidFinish;

@optional
- (void)setCurrentViewState:(id)arg1;
- (void)nudge;
@end
