//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface GameCenterPlayInfoView : UIView
{
    UIView *_leftBanner;
    UILabel *_playInfoSummaryView;
}

+ (double)calViewHeight:(id)arg1 maxWidth:(double)arg2;
@property(retain, nonatomic) UILabel *playInfoSummaryView; // @synthesize playInfoSummaryView=_playInfoSummaryView;
@property(retain, nonatomic) UIView *leftBanner; // @synthesize leftBanner=_leftBanner;
- (void).cxx_destruct;
- (void)makeView:(id)arg1;
- (id)initWithPlayInfo:(struct CGRect)arg1 playInformation:(id)arg2;

@end

