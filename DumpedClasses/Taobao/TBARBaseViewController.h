//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBBaseWebViewController.h"

@class UIButton;

@interface TBARBaseViewController : TBBaseWebViewController
{
    _Bool _naviBarControlEnabled;
    UIButton *_backButton;
}

@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool naviBarControlEnabled; // @synthesize naviBarControlEnabled=_naviBarControlEnabled;
- (void).cxx_destruct;
- (void)setupBackButton;
- (void)backAction;
- (void)setLoadUrlL:(id)arg1;
- (void)bringWebviewToFront;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithWebVC:(id)arg1;
- (_Bool)isEnterCurrentViewController;

@end

