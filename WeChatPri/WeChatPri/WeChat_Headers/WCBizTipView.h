//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "ILinkEventExt-Protocol.h"

@class NSString, RichTextView, UIImageView;
@protocol WCBizTipViewDelegate;

@interface WCBizTipView : UIView <CAAnimationDelegate, ILinkEventExt>
{
    NSString *_title;
    NSString *_content;
    NSString *_imageName;
    UIImageView *_backgroundView;
    UIImageView *contentImageView;
    RichTextView *richTextView;
    id <WCBizTipViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCBizTipViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (id)getContentImageView;
- (void)onCloseIntroView;
- (void)dealloc;
- (void)showAnimation;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 andTittle:(id)arg2 andContent:(id)arg3 andImage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
