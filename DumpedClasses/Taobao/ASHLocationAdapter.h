//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASHAdapterBase.h"

#import "ASHLocationProtocol.h"

@class NSString;

@interface ASHLocationAdapter : ASHAdapterBase <ASHLocationProtocol>
{
    id <ASHLocationProtocol> _impObj;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <ASHLocationProtocol> impObj; // @synthesize impObj=_impObj;
- (void).cxx_destruct;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setupLocation:(id)arg1;
- (void)requestLocation:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

