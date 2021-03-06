//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUVideoControl.h"

@class NSMutableDictionary, UIImageView;

@interface PPVideoControl : QYUVideoControl
{
    NSMutableDictionary *_playerDic;
    UIImageView *_playImageView;
    UIImageView *_pp_placeView;
}

@property(retain, nonatomic) UIImageView *pp_placeView; // @synthesize pp_placeView=_pp_placeView;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) NSMutableDictionary *playerDic; // @synthesize playerDic=_playerDic;
- (void).cxx_destruct;
- (void)p_layoutSubviews;
- (_Bool)p_initIcon;
- (void)initIcon;
- (void)layoutSubviews;
- (void)setup;
- (void)decodeFeed:(id)arg1;
- (void)turn2SeriesVCWithPingback:(_Bool)arg1;
- (void)turn2SeriesVC;
- (void)addPlayerView;
- (_Bool)isSameWithPlayingFeed;
- (_Bool)isPlayByMode0;
- (_Bool)isFakeFeed;
- (void)setData:(id)arg1;
- (void)p_refershPlayBtn;
- (void)setPlayBtn:(id)arg1;
- (id)playBtn;
- (void)p_layoutSubviews;
- (_Bool)p_initIcon;
- (id)getAdViewModel;

@end

