//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ExploreItemActionManager, NSArray, NSDictionary, NSNumber, WDTipsStructModel;

@interface WDNeedMeToAnswerViewModel : NSObject
{
    NSDictionary *_gdExtJson;
    NSDictionary *_apiParameter;
    NSArray *_tableModelArray;
    WDTipsStructModel *_tips;
    NSNumber *_hasMore;
    NSNumber *_hasMoreToRefresh;
    NSNumber *_refreshBeHotTime;
    NSNumber *_loadMoreBeHotTime;
    ExploreItemActionManager *_itemActionManager;
}

+ (id)questionEntitiesWithInviteModels:(id)arg1;
+ (void)ignoreQuestionWithQid:(id)arg1 apiParameter:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)loadMoreDataWithMaxBeHotTime:(id)arg1 apiParameter:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)refreshDataWithMinBeHotTime:(id)arg1 apiParameter:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) ExploreItemActionManager *itemActionManager; // @synthesize itemActionManager=_itemActionManager;
@property(nonatomic) NSNumber *loadMoreBeHotTime; // @synthesize loadMoreBeHotTime=_loadMoreBeHotTime;
@property(nonatomic) NSNumber *refreshBeHotTime; // @synthesize refreshBeHotTime=_refreshBeHotTime;
@property(readonly, nonatomic) NSNumber *hasMoreToRefresh; // @synthesize hasMoreToRefresh=_hasMoreToRefresh;
@property(retain, nonatomic) NSNumber *hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) WDTipsStructModel *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSArray *tableModelArray; // @synthesize tableModelArray=_tableModelArray;
@property(copy, nonatomic) NSDictionary *apiParameter; // @synthesize apiParameter=_apiParameter;
@property(copy, nonatomic) NSDictionary *gdExtJson; // @synthesize gdExtJson=_gdExtJson;
- (void).cxx_destruct;
- (void)setRefreshLoadMoreTime:(id)arg1;
- (id)getCathedNewestDataArray;
- (unsigned long long)indexOfQuestionEntity:(id)arg1;
- (id)wendaCategoryPlaceHolder;
- (void)deleteDataWithQid:(id)arg1;
- (void)ignoreQuestionWithQid:(id)arg1 questionType:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)loadMoreWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithGdExtJson:(id)arg1 apiParameter:(id)arg2;

@end

