//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, SBWidgetViewControllerHost;

@protocol SBWidgetViewControllerHostDelegate <NSObject>

@optional
- (void)widget:(SBWidgetViewControllerHost *)arg1 didUpdatePreferredSize:(struct CGSize)arg2;
- (void)widget:(SBWidgetViewControllerHost *)arg1 requestsLaunchOfURL:(NSURL *)arg2;
- (void)widget:(SBWidgetViewControllerHost *)arg1 requestsPresentationOfViewController:(NSString *)arg2 presentationStyle:(long long)arg3 context:(NSDictionary *)arg4 completion:(void (^)(void))arg5;
@end
