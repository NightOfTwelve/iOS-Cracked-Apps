//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKProductsRequestDelegate-Protocol.h"

@class NSString, SKProductsResponse;

@interface _PTHSKProductsRequestDelegate : NSObject <SKProductsRequestDelegate>
{
    CDUnknownBlockType _completion;
    SKProductsResponse *_response;
}

@property(retain, nonatomic) SKProductsResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

