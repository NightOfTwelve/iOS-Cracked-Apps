//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBizDataSource.h"

@class NSArray, NSMutableArray, NSNumber, NSString, ONESingleChoicePopupModel, SCarTypeCom, SCarTypeModel;

@protocol SCarTypeComDataSourceProtocal <SBizDataSource>
- (NSMutableArray *)brandCarTypeArrayForCom:(SCarTypeCom *)arg1;
- (long long)seleceIndexForCarTypeCom:(SCarTypeCom *)arg1;
- (void)carTypeCom:(SCarTypeCom *)arg1 didselectedCarType:(NSNumber *)arg2;
- (NSArray *)carTypeArrayForCarTypeCom:(SCarTypeCom *)arg1;
- (long long)currentSelectForCarTypeCom:(SCarTypeCom *)arg1;
- (void)carTypeCom:(SCarTypeCom *)arg1 selectedCarTypeIndex:(unsigned long long)arg2 carTypeModel:(ONESingleChoicePopupModel *)arg3;
- (SCarTypeModel *)dataSourceForCarTypeCom:(SCarTypeCom *)arg1 businessId:(NSString *)arg2;
@end

