//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFAttachment.h"

@class NSString;

@interface MFAttachment (Utilities)
- (BOOL)hasCalendarMetadata;
@property(retain, nonatomic) NSString *icsRepresentation;
@property(retain, nonatomic) NSString *meetingStorePersistentID;
@property(retain, nonatomic) NSString *eventID;
- (void)writeToDiskWithData:(id)arg1;
- (id)filenameStrippingZipIfNeededUseApplications:(BOOL)arg1;
- (BOOL)isDisplayableInlineWithData:(id)arg1;
- (BOOL)isDisplayableInsidePluginWithData:(id)arg1;
- (BOOL)isDisplayableInline;
- (BOOL)isDisplayableInsidePlugin;
- (BOOL)isDisplayableByWebKit;
- (BOOL)isDisplayableImage;
- (BOOL)isContentOpenable;
- (BOOL)isContentTypeDisplayableByMobileMail;
- (BOOL)isCalendarFile;
- (BOOL)isRFC822;
- (BOOL)isPDFFile;
- (BOOL)isMedia;
- (BOOL)isImageFile;
- (BOOL)isRestrictedMIMEType;
- (id)fileAttributes;
- (id)contentType;
- (id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1;
@end
