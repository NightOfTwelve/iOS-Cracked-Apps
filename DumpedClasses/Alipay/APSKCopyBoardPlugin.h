//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APSKShareBasePlugin.h"

@interface APSKCopyBoardPlugin : APSKShareBasePlugin
{
    id <APSKPluginDelegate> _delegate;
}

+ (_Bool)isChannelAppInstalled;
@property(nonatomic) __weak id <APSKPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doCopyURL:(id)arg1 whenDone:(CDUnknownBlockType)arg2;
- (void)shareContent:(id)arg1 toChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareMessage:(id)arg1 toChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

