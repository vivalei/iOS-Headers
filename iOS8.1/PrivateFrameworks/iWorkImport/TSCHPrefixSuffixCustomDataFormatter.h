//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHCustomDataFormatter.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCHPrefixSuffixCustomDataFormatter : TSCHCustomDataFormatter
{
    NSString *mPrefixString;
    NSString *mSuffixString;
}

+ (id)dataFormatterWithCustomFormatWrapper:(id)arg1 customFormatListKey:(unsigned int)arg2 formatType:(int)arg3 prefixString:(id)arg4 suffixString:(id)arg5;
- (id)convertToSupportedClientFormatObject;
- (id)convertToPersistableStyleObject;
- (id)chartFormattedStringForValue:(id)arg1;
- (id)p_formattedStringWithBodyString:(id)arg1;
- (void)dealloc;
- (id)initWithCustomFormatWrapper:(id)arg1 customFormatListKey:(unsigned int)arg2 formatType:(int)arg3 prefixString:(id)arg4 suffixString:(id)arg5;

@end
