//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKCalendarItem, EKCalendarItemEditor;

@protocol EKCalendarItemEditorDelegate <NSObject>

@optional
- (void)editor:(EKCalendarItemEditor *)arg1 didChangeHeightAnimated:(BOOL)arg2;
- (void)editor:(EKCalendarItemEditor *)arg1 didCompleteWithAction:(int)arg2;
- (void)editor:(EKCalendarItemEditor *)arg1 prepareCalendarItemForEdit:(EKCalendarItem *)arg2;
@end

