//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WebSearchGuideData : MMObject <PBCoding>
{
    unsigned long long expiredTime;
    NSString *json;
    NSString *searchID;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID;
@property(retain, nonatomic) NSString *json; // @synthesize json;
@property(nonatomic) unsigned long long expiredTime; // @synthesize expiredTime;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

