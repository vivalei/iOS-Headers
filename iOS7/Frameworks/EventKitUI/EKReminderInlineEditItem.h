/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKReminderEditItem.h>

#import "EKExpandingTextViewDelegate-Protocol.h"

@class EKReminderInlineEditItemCell;

@interface EKReminderInlineEditItem : EKReminderEditItem <EKExpandingTextViewDelegate>
{
    EKReminderInlineEditItemCell *_cell;
    _Bool _isListeningToHeightChanges;
}

- (void).cxx_destruct;
- (void)textViewDidChangeContentHeight:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (id)textFromReminder;
- (long long)cellStyle;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 forWidth:(double)arg3;
- (id)newCell;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;
- (void)_applyStylesFromStyleProviderToTextView:(id)arg1;
- (_Bool)shouldPinKeyboard;
- (_Bool)isInline;
- (void)dealloc;
- (id)init;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;

@end

