//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiBaseModel.h"

@class NSDictionary<Optional>, NSNumber<Optional>, NSString<Optional>;

@interface TaxiBasePriceModel : TaxiBaseModel
{
    NSNumber<Optional> *_price;
    NSString<Optional> *_ekey;
    NSDictionary<Optional> *_details;
}

@property(copy, nonatomic) NSDictionary<Optional> *details; // @synthesize details=_details;
@property(copy, nonatomic) NSString<Optional> *ekey; // @synthesize ekey=_ekey;
@property(retain, nonatomic) NSNumber<Optional> *price; // @synthesize price=_price;
- (void).cxx_destruct;

@end

