//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

@class NSDictionary, NSString, RUIObjectModel<RUIAlertViewDelegate>, UIAlertController;

@interface RUIAlertView : RUIElement
{
    UIAlertController *_alertController;
    RUIObjectModel<RUIAlertViewDelegate> *_objectModel;
    NSString *_title;
    NSString *_message;
    int _buttonIndex;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) int buttonIndex; // @synthesize buttonIndex=_buttonIndex;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak RUIObjectModel<RUIAlertViewDelegate> *objectModel; // @synthesize objectModel=_objectModel;
- (void).cxx_destruct;
- (void)runAlertInController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)alertController;
- (void)setCancelButtonTitle:(id)arg1;
- (void)addButtonWithTitle:(id)arg1 URL:(id)arg2 destructive:(BOOL)arg3 attributes:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSDictionary *attributes;

@end

