//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface Neighbour : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIp; // @dynamic hasIp;
@property(nonatomic) _Bool hasMac; // @dynamic hasMac;
@property(nonatomic) _Bool hasVendor; // @dynamic hasVendor;
@property(nonatomic) int ip; // @dynamic ip;
@property(copy, nonatomic) NSString *mac; // @dynamic mac;
@property(copy, nonatomic) NSString *vendor; // @dynamic vendor;

@end

