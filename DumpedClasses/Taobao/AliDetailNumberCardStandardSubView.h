//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailBaseContainerView.h"

#import "AliDetailContractPhoneViewProtocal.h"

@class AliDetailContractPhoneDataEngine, AliDetailContractPhoneNavigationBar, NSArray<AliDetailSkuContractNetStandard>, NSMutableArray, NSString, UIScrollView;

@interface AliDetailNumberCardStandardSubView : AliDetailBaseContainerView <AliDetailContractPhoneViewProtocal>
{
    AliDetailContractPhoneDataEngine *_dataEngine;
    CDUnknownBlockType _selectBlock;
    AliDetailContractPhoneNavigationBar *_navigationBar;
    UIScrollView *_scrollView;
    NSMutableArray *_buttonsArray;
    long long _selectedIndex;
    NSArray<AliDetailSkuContractNetStandard> *_dataArray;
}

@property(retain, nonatomic) NSArray<AliDetailSkuContractNetStandard> *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) AliDetailContractPhoneNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) __weak AliDetailContractPhoneDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
- (void).cxx_destruct;
- (void)clearData;
- (void)prepareData;
- (void)onClickedPackageButton:(id)arg1;
- (id)createButton:(id)arg1;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

