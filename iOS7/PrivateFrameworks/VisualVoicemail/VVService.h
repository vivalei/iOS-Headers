/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError, NSRecursiveLock, NSString, PCPersistentTimer;

@interface VVService : NSObject
{
    NSRecursiveLock *_lock;
    unsigned int _capabilities;
    int _mailboxUsage;
    double _trashCompactionAge;
    unsigned int _unreadCount;
    unsigned int _trashedCount;
    NSError *_passwordError;
    NSError *_activationError;
    NSString *_password;
    NSString *_passwordMailboxName;
    struct __CFArray *_retryIntervals;
    PCPersistentTimer *_retryTimer;
    PCPersistentTimer *_trashCompactionTimer;
    PCPersistentTimer *_notificationFallbackTimer;
    struct __CFDate *_notificationFallbackWakeDate;
    struct __CFDate *_nextRetryWakeDate;
    struct __CFDate *_nextTrashCompactionWakeDate;
    int _retryIntervalIndex;
    unsigned int _pmNotifier;
    struct IONotificationPort *_pmNotifierPort;
    unsigned int _pmRootPort;
    struct __CFRunLoopSource *_pmRunLoopSource;
    id _carrierParameters;
    Class _notificationInterpreter;
    struct {
        unsigned int offline:1;
        unsigned int subscribed:1;
        unsigned int initialSetupRequired:1;
        unsigned int fakeInitialSetup:1;
        unsigned int launchedWithFakeInitialSetup:1;
        unsigned int mwiState:1;
        unsigned int notificationFallbackEnabled:1;
        unsigned int capabilitiesLoaded:1;
    } _serviceFlags;
}

+ (void)setInsomniaEnabled:(BOOL)arg1;
+ (void)_resetInsomniaState;
+ (void)_suppressInsomniaState;
+ (void)_setInsomniaState:(BOOL)arg1;
+ (unsigned int)_voicemailPowerAssertion;
+ (BOOL)sharedServiceIsSubscribed;
+ (BOOL)_lockedSharedServiceIsSubscribed;
+ (id)sharedService;
+ (void)_handleSIMChange;
+ (void)initialize;
- (void)_attemptScheduledTrashCompaction;
- (void)_cancelAutomatedTrashCompaction;
- (void)cancelAutomatedTrashCompaction;
- (void)_scheduleAutomatedTrashCompaction;
- (void)scheduleAutomatedTrashCompaction;
- (void)scheduleDelayedSynchronize;
- (struct __CFArray *)_retryIntervals;
- (void)_attemptDelayedSynchronize:(id)arg1;
- (void)_attemptDelayedSynchronize;
- (void)resetDelayedSynchronizationAttemptCount;
- (void)cancelDelayedSynchronize;
- (void)_deregisterForPowerEventsIfNecessary;
- (void)_registerForPowerEventsIfNecessary;
- (void)reportError:(id)arg1;
- (void)moveRecordFromTrash:(void *)arg1;
- (void)moveRecordToTrash:(void *)arg1;
- (void)setGreetingType:(int)arg1 withData:(id)arg2 duration:(unsigned int)arg3;
- (BOOL)greetingAvailable;
- (void)retrieveGreeting;
- (void)changePassword:(id)arg1 fromPassword:(id)arg2;
- (void)clearRemoteUIDsForDetachedMessages;
- (void)retrieveDataForRecord:(void *)arg1;
- (void)synchronize:(BOOL)arg1;
- (BOOL)greetingFetchExistsProgressiveLoadInProgress:(char *)arg1;
- (BOOL)synchronizationPending;
- (BOOL)headerChangesPending;
- (BOOL)dataForRecordPending:(void *)arg1 progressiveLoadInProgress:(char *)arg2;
- (void)progressiveDataLengthsForRecord:(void *)arg1 expected:(unsigned int *)arg2 current:(unsigned int *)arg3;
- (BOOL)taskOfTypeExists:(int)arg1;
- (BOOL)shouldScheduleAutoTrashOnMailboxUsageChange;
- (BOOL)doesClientManageTrashCompaction;
- (id)carrierParameterValueForKey:(id)arg1;
- (int)mailboxGreetingType;
- (BOOL)passwordChangeRequiresEnteringOldPassword;
- (int)maximumPasswordLength;
- (int)minimumPasswordLength;
- (int)maximumRecordedNameDuration;
- (int)maximumGreetingDuration;
- (void)cancelPasswordRequest;
- (void)handlePasswordNotificationResponse:(id)arg1;
- (void)displayPasswordRequestIfNecessary;
- (void)handlePasswordRequestCancellation;
- (id)provisionalPassword;
- (void)setProvisionalPassword:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)passwordIgnoringSubscription:(BOOL)arg1;
- (id)password;
- (void)handleIndicatorNotification:(struct __CFDictionary *)arg1;
- (BOOL)respectsMWINotifications;
- (void)handleNotification:(id)arg1 isMWI:(BOOL)arg2;
- (Class)notificationInterpreterClass;
- (void)_cancelIndicatorAction;
- (void)_reactToIndicator;
- (void)setMessageWaiting:(BOOL)arg1;
- (BOOL)isMessageWaiting;
- (BOOL)isInSync;
- (void)_scheduleFallbackTimerIfNecessary;
- (void)_enterFallbackMode:(id)arg1;
- (void)_deliverFallbackNotification;
- (void)cancelNotificationFallback;
- (void)clearActivationError;
- (id)activationError;
- (void)_contextActivationSucceeded:(id)arg1;
- (void)_contextActivationFailed:(id)arg1;
- (void)_setActivationError:(id)arg1;
- (void)_handleCallStatusChange:(struct __CFDictionary *)arg1;
- (void)handleDataContextDeactivated;
- (void)_updateOnlineStatusWithDataStatusDict:(struct __CFDictionary *)arg1;
- (BOOL)isOfflineDueToRoaming;
- (BOOL)_isOfflineDueToRoamingWithDataStatusDict:(struct __CFDictionary *)arg1;
- (struct __CFString *)connectionServiceType;
- (void)setOnline:(BOOL)arg1;
- (void)_setOnline:(BOOL)arg1 fallbackMode:(BOOL)arg2;
- (BOOL)isOnline;
- (void)updateLoggingSettings;
- (void)removeAllNonDetachedRecords;
- (void)removeAllRecords;
- (void)resetCounts;
- (void)updateCountsForChangedFlags:(unsigned int)arg1 currentRecordFlags:(unsigned int)arg2;
- (void)setTrashedCount:(unsigned int)arg1;
- (unsigned int)trashedCount;
- (void)setUnreadCount:(unsigned int)arg1;
- (unsigned int)unreadCount;
- (void)setMailboxUsage:(int)arg1;
- (int)mailboxUsage;
- (BOOL)sharedSubscriptionRequiresSetup;
- (void)setMailboxRequiresSetup:(BOOL)arg1;
- (BOOL)mailboxRequiresSetup;
- (id)mailboxName;
- (void)kill;
- (void)setSubscribed:(BOOL)arg1;
- (BOOL)isSubscribed;
- (unsigned int)capabilities;
- (void)dealloc;
- (id)init;
- (BOOL)doTrashCompaction;
- (BOOL)shouldTrashCompactRecord:(void *)arg1;
- (double)trashCompactionAge;

@end
