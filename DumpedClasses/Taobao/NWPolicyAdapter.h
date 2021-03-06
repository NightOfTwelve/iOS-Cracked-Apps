//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NWPolicyAdapter : NSObject
{
    id _policyCenter;
}

+ (id)shareInstance;
@property(retain, nonatomic) id policyCenter; // @synthesize policyCenter=_policyCenter;
- (void).cxx_destruct;
- (_Bool)hostBelongAserver:(id)arg1;
- (void)updatePolicy:(id)arg1 withUpdateType:(int)arg2 withStatus:(_Bool)arg3 withIsLast:(_Bool)arg4;
- (id)searchPoliciesWithHost:(id)arg1 withScheme:(id)arg2 withType:(int)arg3;
- (id)getCNameWithHost:(id)arg1;
- (void)queryPolicyFromAMDC:(id)arg1 force:(_Bool)arg2;
- (id)queryHostScheme:(id)arg1;
- (void)convertSchema:(id)arg1;
- (_Bool)isPolicyModuleInstalled;
- (id)init;

@end

