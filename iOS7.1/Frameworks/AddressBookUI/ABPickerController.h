//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSIndexPath, NSString, UITableViewController;

@interface ABPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    BOOL _allowsCustomItems;
    NSString *_selectedItem;
    NSArray *_builtinItems;
    NSArray *_customItems;
    UITableViewController *_tableViewController;
    NSIndexPath *_selectedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(nonatomic) BOOL allowsCustomItems; // @synthesize allowsCustomItems=_allowsCustomItems;
@property(copy, nonatomic) NSArray *customItems; // @synthesize customItems=_customItems;
@property(copy, nonatomic) NSArray *builtinItems; // @synthesize builtinItems=_builtinItems;
@property(retain, nonatomic) NSString *selectedItem; // @synthesize selectedItem=_selectedItem;
- (id)_itemAtIndexPath:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)customLabelUpdated:(id)arg1;
- (void)donePicker:(id)arg1;
- (void)cancelPicker:(id)arg1;
- (id)titleForAddCustomItem;
- (id)titleForPickerItem:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(nonatomic) id <ABPickerControllerDelegate> delegate;

@end

