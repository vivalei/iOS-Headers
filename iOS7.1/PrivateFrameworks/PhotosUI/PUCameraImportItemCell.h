//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class PUPhotoView, UIActivityIndicatorView, UIImageView;

@interface PUCameraImportItemCell : UICollectionViewCell
{
    PUPhotoView *_photoView;
    UIImageView *_badgeImageView;
    int _badgeType;
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) int badgeType; // @synthesize badgeType=_badgeType;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) PUPhotoView *photoView; // @synthesize photoView=_photoView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setPhotoImage:(id)arg1 withSize:(struct CGSize)arg2 fillMode:(int)arg3;
- (void)_createSpinnerIfNecessary;
- (id)initWithFrame:(struct CGRect)arg1;

@end
