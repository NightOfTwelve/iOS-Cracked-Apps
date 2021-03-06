//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTRDynamicPlugin.h"

#import "SSActivityViewDelegate.h"

@class NSString, NSTimer, SDWebImageManager, SSActivityView, TTActivityShareManager, TTDetailContainerViewModel;

@interface TTRShare : TTRDynamicPlugin <SSActivityViewDelegate>
{
    TTActivityShareManager *_shareManager;
    SDWebImageManager *_imageManager;
    NSTimer *_imageDownloadTimeoutTimer;
    long long _curShareSourceType;
    SSActivityView *_phoneShareView;
    TTDetailContainerViewModel *_detailModel;
    NSString *_userID;
    NSString *_mediaID;
    CDUnknownBlockType _callback;
}

+ (id)defaultIconImg;
+ (unsigned long long)instanceType;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) TTDetailContainerViewModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) SSActivityView *phoneShareView; // @synthesize phoneShareView=_phoneShareView;
@property(nonatomic) long long curShareSourceType; // @synthesize curShareSourceType=_curShareSourceType;
@property(retain, nonatomic) NSTimer *imageDownloadTimeoutTimer; // @synthesize imageDownloadTimeoutTimer=_imageDownloadTimeoutTimer;
@property(retain, nonatomic) SDWebImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) TTActivityShareManager *shareManager; // @synthesize shareManager=_shareManager;
- (void).cxx_destruct;
- (void)activityView:(id)arg1 didCompleteByItemType:(int)arg2;
- (id)sharedPlatformForData:(id)arg1;
- (void)timeoutTimer:(id)arg1;
- (void)sendVideoSubjectShareTrackWithItemType:(int)arg1;
- (void)sendPGCShareTrackWithItemType:(int)arg1;
- (void)shareWithmediaID:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)shareWithUserID:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)shareWithArticle:(id)arg1;
- (void)shareWithExploreEntry:(id)arg1;
- (void)shareWithImage:(id)arg1 data:(id)arg2;
- (void)startShareWithData:(id)arg1;
- (void)systemShareWithParam:(id)arg1 callback:(CDUnknownBlockType)arg2 webView:(id)arg3 controller:(id)arg4;
- (void)sharePanelWithParam:(id)arg1 callback:(CDUnknownBlockType)arg2 webView:(id)arg3 controller:(id)arg4;
- (void)sharePGCWithParam:(id)arg1 callback:(CDUnknownBlockType)arg2 webView:(id)arg3 controller:(id)arg4;
- (void)shareWithParam:(id)arg1 callback:(CDUnknownBlockType)arg2 webView:(id)arg3 controller:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

