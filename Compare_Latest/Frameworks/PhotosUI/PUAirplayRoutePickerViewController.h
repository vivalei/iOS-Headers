//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class PUAirplayRoute, PUAirplayRouteTableViewDataSource;

@interface PUAirplayRoutePickerViewController : UITableViewController
{
    PUAirplayRouteTableViewDataSource *_dataSource;
    PUAirplayRoute *_markedRoute;
    BOOL _shouldShowDoneButton;
    BOOL _makeRouteCurrentBeforeReturning;
    CDUnknownBlockType _completionHandler;
}

@property(nonatomic) BOOL makeRouteCurrentBeforeReturning; // @synthesize makeRouteCurrentBeforeReturning=_makeRouteCurrentBeforeReturning;
@property(nonatomic) BOOL shouldShowDoneButton; // @synthesize shouldShowDoneButton=_shouldShowDoneButton;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_userSelectedRoute:(id)arg1 fromTableView:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)setMarkedRoute:(id)arg1;
- (void)_updateRoutes;
- (id)init;

@end
