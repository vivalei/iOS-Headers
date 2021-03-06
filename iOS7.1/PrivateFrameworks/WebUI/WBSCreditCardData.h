//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface WBSCreditCardData : NSObject
{
    NSString *_cardName;
    NSString *_cardholderName;
    NSString *_cardNumber;
    NSDate *_expirationDate;
}

@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(copy, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
- (id)creditCardDataByMergingCardholderNameAndExpirationDateFromCard:(id)arg1;
- (id)keychainRepresentation;
- (id)initWithKeychainRepresentation:(id)arg1;
- (id)description;
- (id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4;
- (void)dealloc;

@end

