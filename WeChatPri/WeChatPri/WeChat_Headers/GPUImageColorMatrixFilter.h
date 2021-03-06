//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageColorMatrixFilter : GPUImageFilter
{
    int colorMatrixUniform;
    int intensityUniform;
    double _intensity;
    struct GPUMatrix4x4 _colorMatrix;
}

@property(nonatomic) struct GPUMatrix4x4 colorMatrix; // @synthesize colorMatrix=_colorMatrix;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
- (id)init;

@end

