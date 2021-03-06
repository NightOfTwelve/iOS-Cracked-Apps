//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGTableViewDelegate.h"
#import "UITableViewDataSource.h"

@class KGScrollView, KGTableView, KGThemeButton, NSArray, NSString;

@interface PersonalInfoReportViewController : KGViewController <KGTableViewDelegate, UITableViewDataSource>
{
    unsigned long long _selectedIndex;
    _Bool _isAddToBlacklist;
    _Bool _isPopingView;
    long long _hisID;
    long long _source;
    id <PersonalInfoReportViewControllerDelegate> _delegate;
    NSArray *_reasonTitlesArray;
    KGTableView *_tableView;
    KGScrollView *_backgroundScrollView;
    KGThemeButton *_reportButton;
}

@property(retain, nonatomic) KGThemeButton *reportButton; // @synthesize reportButton=_reportButton;
@property(retain, nonatomic) KGScrollView *backgroundScrollView; // @synthesize backgroundScrollView=_backgroundScrollView;
@property(retain, nonatomic) KGTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *reasonTitlesArray; // @synthesize reasonTitlesArray=_reasonTitlesArray;
@property(nonatomic) __weak id <PersonalInfoReportViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long hisID; // @synthesize hisID=_hisID;
- (void).cxx_destruct;
- (void)postNotificationToUpdateRelationshipWithTargetID:(long long)arg1;
- (void)popView;
- (void)onClickedReportButton:(id)arg1;
- (void)clickedSwitchForValueChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)showPlayBarWay;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

