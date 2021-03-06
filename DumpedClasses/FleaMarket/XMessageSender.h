//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XMessageSender : NSObject
{
    CDUnknownBlockType _processor[6];
}

- (void).cxx_destruct;
- (void)onMessageSendingMsg:(id)arg1 inContainer:(id)arg2 withResult:(id)arg3;
- (void)processorStart:(id)arg1 inContainer:(id)arg2 forRunning:(id)arg3;
- (void)processorRepeat:(id)arg1 inContainer:(id)arg2;
- (void)processorNext:(id)arg1 inContainer:(id)arg2;
- (id)_buildMessage:(id)arg1 inContainer:(id)arg2;
- (void)sendMessage:(id)arg1 to:(id)arg2 on:(CDUnknownBlockType)arg3;
- (void)sendContent:(id)arg1 to:(id)arg2 on:(CDUnknownBlockType)arg3;
- (id)giveRunningFor:(id)arg1;
- (void)processorUploadVideoProgress:(id)arg1 inContainer:(id)arg2 withPercent:(float)arg3;
- (void)processorUploadVideoResult:(id)arg1 inContainer:(id)arg2 forUpload:(id)arg3 withResult:(id)arg4;
- (void)processorUploadVideo:(id)arg1 inContainer:(id)arg2;
- (void)processorUploadAudioProgress:(id)arg1 inContainer:(id)arg2 withPercent:(float)arg3;
- (void)processorUploadAudioResult:(id)arg1 inContainer:(id)arg2 forUpload:(id)arg3 withResult:(id)arg4;
- (void)processorUploadAudio:(id)arg1 inContainer:(id)arg2;
- (void)processorUploadImageProgress:(id)arg1 inContainer:(id)arg2 withPercent:(unsigned long long)arg3;
- (void)processorUploadImageResult:(id)arg1 inContainer:(id)arg2 forUpload:(id)arg3 withResult:(id)arg4;
- (void)processorUploadImage:(id)arg1 inContainer:(id)arg2;
- (void)processorSendTextResult:(id)arg1 inContainer:(id)arg2 withRes:(id)arg3;
- (void)processorSendText:(id)arg1 inContainer:(id)arg2;
- (id)init;

@end

