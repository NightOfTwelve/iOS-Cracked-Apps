//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject, NSString;

@protocol CTHotelFilterTableViewDelegate <NSObject>
- (void)filterCatgoryTableWillScroll;
- (void)getMoreWithGroup:(NSString *)arg1;
- (void)clearHistoryCache;
- (void)hotelFilterCategoryItemSelected:(NSString *)arg1 withItem:(NSObject *)arg2;
@end

