//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "STPDelegateProxy.h"

#import "UITextFieldDelegate.h"

@class NSString;

@interface STPTextFieldDelegateProxy : STPDelegateProxy <UITextFieldDelegate>
{
    _Bool _selectionEnabled;
    long long _autoformattingBehavior;
}

@property(nonatomic) _Bool selectionEnabled; // @synthesize selectionEnabled=_selectionEnabled;
@property(nonatomic) long long autoformattingBehavior; // @synthesize autoformattingBehavior=_autoformattingBehavior;
- (id)unformattedStringForString:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

