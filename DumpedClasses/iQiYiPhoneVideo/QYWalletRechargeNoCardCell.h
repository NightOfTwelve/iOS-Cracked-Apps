//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface QYWalletRechargeNoCardCell : UITableViewCell
{
    UILabel *_debitCardLabel;
    UILabel *_noCardLabel;
    UIImageView *_addCardImageView;
    UILabel *_addCardLabel;
}

@property(retain, nonatomic) UILabel *addCardLabel; // @synthesize addCardLabel=_addCardLabel;
@property(retain, nonatomic) UIImageView *addCardImageView; // @synthesize addCardImageView=_addCardImageView;
@property(retain, nonatomic) UILabel *noCardLabel; // @synthesize noCardLabel=_noCardLabel;
@property(retain, nonatomic) UILabel *debitCardLabel; // @synthesize debitCardLabel=_debitCardLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)dealloc;

@end

