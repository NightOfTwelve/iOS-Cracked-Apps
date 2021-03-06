//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIColor, UIView;

@protocol FBPullToRefreshContentViewProtocol
@property(readonly, nonatomic) UIView *backgroundView;
@property(nonatomic) double triggerThreshold;
@property(nonatomic) double height;
@property(nonatomic) struct UIEdgeInsets contentInsets;
@property(nonatomic, getter=isVisible) _Bool visible;
- (_Bool)isLoading;
- (void)setLoading:(_Bool)arg1 isUserInitiated:(_Bool)arg2;
- (void)scrollViewDidScroll:(double)arg1 withVelocity:(struct CGPoint)arg2 isUserInitiated:(_Bool)arg3 isProgrammaticallyScrolling:(_Bool)arg4;
- (id)initWithTintColor:(UIColor *)arg1 backgroundView:(UIView *)arg2;
@end

