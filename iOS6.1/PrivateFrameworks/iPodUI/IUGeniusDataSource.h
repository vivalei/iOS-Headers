/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUSongsDataSource.h>

@interface IUGeniusDataSource : IUSongsDataSource
{
}

- (void)_backingStoreChangedNotification:(id)arg1;
- (id)_getMoreSongsURL;
- (void)_getMoreSongs:(id)arg1;
- (id)_getMoreSongsLikeThisActionRow;
- (id)_seedItem;
- (void)reloadActionRows;
- (id)playlist;
- (id)title;
- (BOOL)showShuffleButtonWhenApplicable;
- (id)cellConfigurationForIndex:(unsigned int)arg1 shouldLoadArtwork:(BOOL)arg2 artworkLoadingCompletionHandler:(id)arg3;
- (BOOL)moveIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (BOOL)deleteIndexesInRange:(struct _NSRange)arg1;
- (void)_mutateQueriesEntitiesAtIndex:(unsigned int)arg1 withBlock:(id)arg2;
- (id)entitiesForQuery:(id)arg1;
- (id)deleteConfirmationAlertViewForIndex:(unsigned int)arg1;
- (id)deleteConfirmationSheetForIndex:(unsigned int)arg1;
- (BOOL)allowsRearrange;
- (BOOL)allowsDeletion;
- (void)savePlaylist;
- (BOOL)refreshPlaylist:(id *)arg1;
@property(readonly, nonatomic, getter=isDeletablePlaylist) BOOL deletablePlaylist;
@property(readonly, nonatomic, getter=isActivePlaylist) BOOL activePlaylist;
- (BOOL)deletePlaylist;
- (void)dealloc;
- (id)init;

@end

