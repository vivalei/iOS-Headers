/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <BookmarkDAV/BookmarkDAVSyncDriver.h>

@interface BookmarkDAVSyncDriver (BulkUploadSupport)
- (void)_finishInitialSyncShouldPushChanges:(_Bool)arg1;
- (_Bool)_applyReturnedBookmarks:(id)arg1 withPushedBookmarks:(struct __CFArray *)arg2;
- (_Bool)_applyReturnedFolders:(id)arg1 parentToArrayOfChildrenFolders:(struct __CFDictionary *)arg2 topmostFolders:(struct __CFArray *)arg3 postedToURL:(id)arg4;
- (_Bool)_matchParsedFolders:(id)arg1 toPushedFolders:(struct __CFDictionary *)arg2 unmatchedParsedFolders:(id)arg3 parsedSetsOfChildrenFoldersByParentURL:(id)arg4 arraysOfChildrenByNameByParent:(struct __CFDictionary *)arg5;
- (void)_setRootCTag:(id)arg1 rootSyncToken:(id)arg2 knownOrderings:(id)arg3;
- (_Bool)_applyUnmatchedParsedFolders:(id)arg1;
- (void)_removeTempIdsFromFoldersInDict:(struct __CFDictionary *)arg1;
- (id)_bookmarkXBELDataForBookmarkChanges:(struct __CFArray *)arg1 pushedBookmarks:(struct __CFArray *)arg2 maxResources:(long long)arg3 maxSize:(long long)arg4;
- (id)_folderXBELDataForTopmostFolderChanges:(struct __CFArray *)arg1 foldersToAddByServerId:(struct __CFDictionary *)arg2 parentToArrayOfChildrenFolderChanges:(struct __CFDictionary *)arg3 pushedParentToArrayOfChildrenFolders:(struct __CFDictionary *)arg4 pushedTopmostFolders:(struct __CFArray *)arg5 maxResources:(long long)arg6 maxSize:(long long)arg7;
- (_Bool)_addChange:(void *)arg1 toData:(id)arg2 numActionsP:(int *)arg3 runningSizeP:(int *)arg4 maxResources:(long long)arg5 maxSize:(long long)arg6 foldersToAddByServerId:(struct __CFDictionary *)arg7 parentToArrayOfChildrenFolderChanges:(struct __CFDictionary *)arg8 pushedParentToArrayOfChildrenFolders:(struct __CFDictionary *)arg9;
- (_Bool)_handleErrorItem:(id)arg1 forBAItem:(void *)arg2;
@end
