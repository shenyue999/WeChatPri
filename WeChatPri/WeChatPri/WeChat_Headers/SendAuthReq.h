//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString;

@interface SendAuthReq : BaseReq
{
    NSString *scope;
    NSString *state;
}

@property(retain, nonatomic) NSString *state; // @synthesize state;
@property(retain, nonatomic) NSString *scope; // @synthesize scope;
- (void).cxx_destruct;
- (id)init;

@end
