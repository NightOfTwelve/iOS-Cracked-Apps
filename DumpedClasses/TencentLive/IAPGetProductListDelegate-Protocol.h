//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RequestInfo;

@protocol IAPGetProductListDelegate <NSObject>
- (void)onLaunProductListFailue:(RequestInfo *)arg1 withErrorMessage:(NSString *)arg2 withErrorCode:(int)arg3;
- (void)onLaunProductListFinish:(RequestInfo *)arg1 withJsoninfo:(NSString *)arg2;
@end

