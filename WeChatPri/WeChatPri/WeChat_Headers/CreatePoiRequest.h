//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, LbsLocation, NSMutableArray, NSString;

@interface CreatePoiRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *categories; // @dynamic categories;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSString *district; // @dynamic district;
@property(retain, nonatomic) LbsLocation *loc; // @dynamic loc;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *photoUrl; // @dynamic photoUrl;
@property(retain, nonatomic) NSString *street; // @dynamic street;
@property(retain, nonatomic) NSString *telephone; // @dynamic telephone;

@end

