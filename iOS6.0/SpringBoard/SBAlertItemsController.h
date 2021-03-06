/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBObserverDelegate-Protocol.h"

@class BBObserver, CPDistributedNotificationCenter, NSArray, NSMutableArray, NSMutableSet, NSTimer;

@interface SBAlertItemsController : NSObject <BBObserverDelegate>
{
    NSMutableArray *_lockedAlertItems;
    NSMutableArray *_unlockedAlertItems;
    NSMutableArray *_pendingAlertItems;
    NSMutableArray *_superModalAlertItems;
    NSTimer *_autoDismissTimer;
    CPDistributedNotificationCenter *_notificationCenter;
    unsigned int _notificationClientCount;
    BOOL _systemShuttingDown;
    NSMutableSet *_forceAlertsToPendReasons;
    BBObserver *_bbObserver;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSArray *lockedAlertItems; // @synthesize lockedAlertItems=_lockedAlertItems;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (void)_buddyDidExit;
- (void)_notificationClientEnded:(id)arg1;
- (void)_notificationClientStarted:(id)arg1;
- (void)moveActiveAlertsToPendingWithAnimation:(BOOL)arg1;
- (void)setForceAlertsToPend:(BOOL)arg1 forReason:(id)arg2;
- (void)noteSystemShuttingDown;
- (void)notifySystemOfAlertItemActivation:(id)arg1;
- (void)_postAlertPresentedNotificationForType:(int)arg1 sender:(id)arg2 date:(id)arg3;
- (void)noteVolumeOrLockPressedOverLockedAlerts;
- (void)deactivateAlertItemsForAlertActivationAndPendMiniAlerts:(BOOL)arg1;
- (BOOL)dontLockOverAlertItems;
- (BOOL)deactivateAlertForMenuClickOrSystemGestureWithAnimation:(BOOL)arg1;
- (BOOL)canDeactivateAlertForMenuClickOrSystemGesture;
- (id)visibleAlertItem;
- (BOOL)hasVisibleAlert;
- (BOOL)hasAlerts;
- (BOOL)hasAlertOfClass:(Class)arg1;
- (id)alertItemsOfClass:(Class)arg1;
- (id)alertItemOfClass:(Class)arg1;
- (void)autoDismissAlertItem:(id)arg1;
- (void)deactivateVisibleAlertItemOfClass:(Class)arg1 reason:(int)arg2;
- (void)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 animated:(BOOL)arg3;
- (void)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2;
- (void)deactivateAlertItemsOfClass:(Class)arg1;
- (void)deactivateAlertItem:(id)arg1;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(BOOL)arg3;
- (void)activatePendedAlertsIfNecessary;
- (void)_activateSuperModalAlertsIfNecessary;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2;
- (void)activateAlertItem:(id)arg1;
- (void)resetAutoDismissTimer;
- (void)convertUnlockedAlertsToLockedAlerts;
- (id)description;
- (BOOL)hasVisibleSuperModalAlert;
- (void)dealloc;
- (id)init;

@end

