//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLReportListItem : NSObject
{
    NSString *_key;
    NSString *_value;
    NSString *_link;
}

+ (id)itemWithKey:(id)arg1 value:(id)arg2 link:(id)arg3;
+ (id)itemWithKey:(id)arg1 value:(id)arg2;
@property(copy) NSString *link; // @synthesize link=_link;
@property(copy) NSString *value; // @synthesize value=_value;
@property(copy) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

