//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayF2FVoiceCgiArgument : NSObject
{
    unsigned int _m_uiAmount;
    NSString *_m_nsPrefix;
    NSString *_m_nsSuffix;
    NSString *_m_nsOutTradeNo;
}

@property(retain, nonatomic) NSString *m_nsOutTradeNo; // @synthesize m_nsOutTradeNo=_m_nsOutTradeNo;
@property(retain, nonatomic) NSString *m_nsSuffix; // @synthesize m_nsSuffix=_m_nsSuffix;
@property(nonatomic) unsigned int m_uiAmount; // @synthesize m_uiAmount=_m_uiAmount;
@property(retain, nonatomic) NSString *m_nsPrefix; // @synthesize m_nsPrefix=_m_nsPrefix;
- (void).cxx_destruct;

@end
