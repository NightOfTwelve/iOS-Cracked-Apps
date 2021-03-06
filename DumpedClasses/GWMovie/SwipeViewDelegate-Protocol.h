//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SwipeView;

@protocol SwipeViewDelegate <NSObject>

@optional
- (void)swipeView:(SwipeView *)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)swipeView:(SwipeView *)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (void)swipeViewDidEndScrollingAnimation:(SwipeView *)arg1;
- (void)swipeViewDidEndDecelerating:(SwipeView *)arg1;
- (void)swipeViewWillBeginDecelerating:(SwipeView *)arg1;
- (void)swipeViewDidEndDragging:(SwipeView *)arg1 willDecelerate:(_Bool)arg2;
- (void)swipeViewWillBeginDragging:(SwipeView *)arg1;
- (void)swipeViewCurrentItemIndexDidChange:(SwipeView *)arg1;
- (void)swipeViewDidScroll:(SwipeView *)arg1;
- (struct CGSize)swipeViewItemSize:(SwipeView *)arg1;
@end

