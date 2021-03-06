/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMProperty.h>

@class TSUColor;

// Not exported
@interface CMColorProperty : CMProperty
{
    TSUColor *wdValue;
}

+ (float)transformedAlphaFromOADColor:(id)arg1;
+ (id)cssStringFromOADColor:(id)arg1;
+ (id)cssStringFromTSUColor:(id)arg1;
+ (id)cssStringFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)nsColorFromShading:(id)arg1;
+ (id)nsColorFromOADColor:(id)arg1 state:(id)arg2;
+ (id)nsColorFromOADFill:(id)arg1 state:(id)arg2;
+ (id)cssStringFromOADGradientFill:(id)arg1 state:(id)arg2;
+ (struct CGColor *)copyCGColorFromOADFill:(id)arg1 state:(id)arg2;
+ (struct CGColor *)copyCGColorFromOADColor:(id)arg1 state:(id)arg2;
- (id)cssStringForName:(id)arg1;
- (id)cssString;
- (_Bool)isEqualTo:(id)arg1;
- (id)initWithColor:(id)arg1;
- (id)value;

@end

