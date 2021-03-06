//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BDHUploadDelegate.h"

@class DynaDoodleUploadItem, NSString, QQMessageModel;

@interface DoodleFileUploader : NSObject <BDHUploadDelegate>
{
    unsigned int _fileCookie;
    long long _bdhTaskID;
    NSString *_strDoodleDoodlePath;
    NSString *_strFileName;
    NSString *_strFileMd5;
    unsigned int _doodleOffset;
    DynaDoodleUploadItem *_uploadItem;
    id <DoodleFileUploadDelegate> _uploadDelegate;
    QQMessageModel *_msgModel;
    long long _chatMsgType;
    id <DynaDoodleAIODelegate> _aioDelegate;
}

@property(nonatomic) __weak id <DynaDoodleAIODelegate> aioDelegate; // @synthesize aioDelegate=_aioDelegate;
- (void).cxx_destruct;
- (void)saveMsgReadState;
- (void)sendDynaDoodleMsg:(id)arg1;
- (void)notifyBDHCancel:(long long)arg1 uploadDetail:(id)arg2;
- (void)notifyBDHFail:(long long)arg1 uploadDetail:(id)arg2 fail:(id)arg3;
- (void)notifyBDHSuccess:(long long)arg1 uploadDetail:(id)arg2;
- (void)notifyBDHProgress:(long long)arg1 uploadDetail:(id)arg2 progress:(float)arg3;
- (void)insertMessageToAio:(id)arg1 aioDelegate:(id)arg2;
- (void)uploadDoodleFile:(unsigned int)arg1 uploadItem:(id)arg2 uploadDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

