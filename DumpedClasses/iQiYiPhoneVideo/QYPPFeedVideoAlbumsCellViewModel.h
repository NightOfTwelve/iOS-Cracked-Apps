//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewModel.h"

@class NSMutableArray;

@interface QYPPFeedVideoAlbumsCellViewModel : BaseViewModel
{
    NSMutableArray *_cardViewModels;
    long long _albumsViewHeight;
    long long _cellHeight;
}

@property(nonatomic) long long cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) long long albumsViewHeight; // @synthesize albumsViewHeight=_albumsViewHeight;
@property(retain, nonatomic) NSMutableArray *cardViewModels; // @synthesize cardViewModels=_cardViewModels;
- (void).cxx_destruct;
- (struct CGSize)videoAlbumsPlaceholderSize:(long long)arg1;
- (void)transform;

@end

