/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol UIWebPDFViewDelegate

@optional
- (id)passwordForPDFView:(id)arg1;
- (void)handleLongPressOnLink:(id)arg1 atPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 contentRect:(struct CGRect)arg4;
- (void)handleLinkClick:(id)arg1 inRect:(struct CGRect)arg2;
- (void)resetZoom:(id)arg1;
- (void)pdfView:(id)arg1 zoomToRect:(struct CGRect)arg2 forPoint:(struct CGPoint)arg3 considerHeight:(BOOL)arg4;
- (void)didDetermineDocumentBounds:(id)arg1;
@end

