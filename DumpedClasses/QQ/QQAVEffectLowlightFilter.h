//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAVEffectFilterGroup.h"

@class QQAVEffectFilter, QQAVEffectLowlightBaseFilter, QQAVEffectSaturationFilter, UIImage;

@interface QQAVEffectLowlightFilter : QQAVEffectFilterGroup
{
    UIImage *inputImage;
    QQAVEffectFilter *pictureFilter;
    QQAVEffectLowlightBaseFilter *lowlightBaseFilter;
    QQAVEffectSaturationFilter *saturationFilter;
}

- (void)renderPicture:(_Bool)arg1;
- (void)initPictureWithTex:(unsigned int)arg1 withSize:(struct CGSize)arg2;
- (id)init;

@end

