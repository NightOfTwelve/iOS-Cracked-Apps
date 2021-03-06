//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KKViewElement.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UITableView;

@interface KKTableViewElement : KKViewElement <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    NSMutableArray *_rows;
    struct CGSize _layoutSize;
    CDUnknownBlockType _onDidScroll;
    CDUnknownBlockType _onCellElement;
}

+ (id)elementWithTableView:(id)arg1;
+ (id)elementWithName:(id)arg1 parent:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType onCellElement; // @synthesize onCellElement=_onCellElement;
@property(copy, nonatomic) CDUnknownBlockType onDidScroll; // @synthesize onDidScroll=_onDidScroll;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *rows; // @synthesize rows=_rows;
- (void)didAddChildren:(id)arg1;
- (void)didRemoveChildren:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *visibleRowElements;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)rowElementInIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)withTableView:(CDUnknownBlockType)arg1;
- (id)addFooterElement:(id)arg1 with:(CDUnknownBlockType)arg2;
- (id)addFooterElement:(id)arg1;
- (id)addHeaderElement:(id)arg1 with:(CDUnknownBlockType)arg2;
- (id)addHeaderElement:(id)arg1;
- (id)addRow:(id)arg1 with:(CDUnknownBlockType)arg2;
- (id)addRow:(id)arg1;
- (id)addCellElement:(id)arg1 with:(CDUnknownBlockType)arg2;
- (id)addCellElement:(id)arg1;
- (id)copyElementWithZone:(struct _NSZone *)arg1;
- (id)initWithTableView:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) UITableView *tableView;
- (void)onObserver:(id)arg1 weakObject:(id)arg2 funcValue:(CDUnknownBlockType)arg3;
- (void)setProperty:(struct KKProperty *)arg1 value:(id)arg2 keyPath:(id)arg3 outlet:(id)arg4 observer:(id)arg5 weakObject:(id)arg6 funcValue:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

