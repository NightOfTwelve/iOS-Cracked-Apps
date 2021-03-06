//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QYCinemaMovieCastBaseInfoData : NSObject
{
    NSString *_name;
    NSString *_region;
    NSString *_gender;
    NSString *_occupation;
    NSString *_constellation;
    NSString *_bloodType;
    NSString *_birthPlace;
    NSString *_descript;
    NSString *_aliasName;
    NSString *_englishName;
    NSString *_pic;
    NSString *_height;
    NSString *_birthday;
    NSString *_weight;
    NSString *_graduationSchool;
    NSString *_hobby;
}

@property(retain, nonatomic) NSString *hobby; // @synthesize hobby=_hobby;
@property(retain, nonatomic) NSString *graduationSchool; // @synthesize graduationSchool=_graduationSchool;
@property(retain, nonatomic) NSString *weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *englishName; // @synthesize englishName=_englishName;
@property(retain, nonatomic) NSString *aliasName; // @synthesize aliasName=_aliasName;
@property(retain, nonatomic) NSString *descript; // @synthesize descript=_descript;
@property(retain, nonatomic) NSString *birthPlace; // @synthesize birthPlace=_birthPlace;
@property(retain, nonatomic) NSString *bloodType; // @synthesize bloodType=_bloodType;
@property(retain, nonatomic) NSString *constellation; // @synthesize constellation=_constellation;
@property(retain, nonatomic) NSString *occupation; // @synthesize occupation=_occupation;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)constellationToChinese:(id)arg1;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

