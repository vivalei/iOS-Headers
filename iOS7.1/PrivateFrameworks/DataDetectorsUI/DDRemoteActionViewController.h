//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

@class DDAction, DDActionController;

__attribute__((visibility("hidden")))
@interface DDRemoteActionViewController : _UIRemoteViewController
{
    BOOL _proxyConfigured;
    DDAction *_action;
    DDActionController *_actionController;
    BOOL _waitingForRemoteConfiguration;
}

+ (id)prepareViewController:(id)arg1 forAction:(id)arg2 actionController:(id)arg3;
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property DDActionController *actionController; // @synthesize actionController=_actionController;
@property(retain) DDAction *action; // @synthesize action=_action;
- (void)actionDidFinish;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewControllerReadyAndIsModal:(BOOL)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)_prepareForAction:(id)arg1 inActionController:(id)arg2;

@end

