//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary, WePkgMetaInfo, WePkgParser, WePkgRegularConfig;

@interface WePkgPackage : MMObject
{
    id _oUsingWebView;
    WePkgRegularConfig *_regularConfig;
    WePkgParser *_parser;
    NSMutableDictionary *_dicRid2FileIdxObj;
    NSMutableDictionary *_dicRid2DataItem;
    WePkgMetaInfo *_metaInfo;
}

+ (id)packageWithPkgId:(id)arg1;
@property(retain, nonatomic) WePkgMetaInfo *metaInfo; // @synthesize metaInfo=_metaInfo;
@property(retain, nonatomic) NSMutableDictionary *dicRid2DataItem; // @synthesize dicRid2DataItem=_dicRid2DataItem;
@property(retain, nonatomic) NSMutableDictionary *dicRid2FileIdxObj; // @synthesize dicRid2FileIdxObj=_dicRid2FileIdxObj;
@property(retain, nonatomic) WePkgParser *parser; // @synthesize parser=_parser;
@property(retain, nonatomic) WePkgRegularConfig *regularConfig; // @synthesize regularConfig=_regularConfig;
@property(nonatomic) __weak id oUsingWebView; // @synthesize oUsingWebView=_oUsingWebView;
- (void).cxx_destruct;
- (id)genRidFromUrl:(id)arg1;
- (void)updateLastUsedTime;
- (void)parseResourceFile;
- (int)checkPkgFileModified;
- (_Bool)isValid;
- (id)getCurrentPkgKey;
- (id)getCacheDataForUrl:(id)arg1;
- (id)initWithRegularConfig:(id)arg1;

@end
