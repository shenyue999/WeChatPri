//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "CSettingExt-Protocol.h"
#import "EmoticonRecommendMgrExt-Protocol.h"
#import "IHeadImageExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "ISettingExtChange-Protocol.h"
#import "IWCCardPkgExt-Protocol.h"
#import "IWCLabsMgrExt-Protocol.h"
#import "IWCSettingRedPointMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMPatternLockLogicDelegate-Protocol.h"
#import "MMPatternLockMgrExt-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "MyFavoritesViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCMallLogicMgrExt-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"

@class MMAnimationTipView, MMTableViewInfo, MMTimer, MyFavoritesViewController, NSString, UpdateWechatRedDotConfig, WCBizLoadingView;

@interface MoreViewController : MMTabBarBaseViewController <MMPatternLockMgrExt, MyFavoritesViewControllerDelegate, ISettingExtChange, IWCSettingRedPointMgrExt, IWCLabsMgrExt, IMsgExt, MessageObserverDelegate, IHeadImageExt, CSettingExt, WCPayLogicMgrExt, EmoticonRecommendMgrExt, MMKernelExt, WCMallLogicMgrExt, IWCCardPkgExt, WCActionSheetDelegate, MMPatternLockLogicDelegate>
{
    vector_a9c0768e m_vecMesssageIdToListen;
    MMTableViewInfo *m_tableViewInfo;
    UpdateWechatRedDotConfig *m_oUpdateWechatRedDotConfig;
    MyFavoritesViewController *m_favViewController;
    MMTimer *m_favCacheTimer;
    _Bool _bIsShareCardListShowSvrRedDot;
    _Bool _bIsEnterShareCardListFromOuterJump;
    unsigned int _patternLockLogicTag;
    WCBizLoadingView *_loadingView;
    MMAnimationTipView *_resultToastView;
}

@property(nonatomic) _Bool bIsEnterShareCardListFromOuterJump; // @synthesize bIsEnterShareCardListFromOuterJump=_bIsEnterShareCardListFromOuterJump;
@property(nonatomic) _Bool bIsShareCardListShowSvrRedDot; // @synthesize bIsShareCardListShowSvrRedDot=_bIsShareCardListShowSvrRedDot;
@property(retain, nonatomic) MMAnimationTipView *resultToastView; // @synthesize resultToastView=_resultToastView;
@property(retain, nonatomic) WCBizLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned int patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onWechatEntranceRedPointChange;
- (void)onWCSettingRedPointChange;
- (void)checkDBAutoRecover;
- (void)initDeepLinkConfig;
- (void)cardDeeplink;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)onPatternLockSvrCheckStatusFail;
- (void)onPatternLockSvrCheckStatusBack:(unsigned long long)arg1;
- (void)onPatternLockLogicOperateSuccess;
- (void)onPatternLockLogicOperateCancel;
- (id)getEnteranceViewContoller;
- (void)onWCCardTips;
- (void)onWCCardLayoutRedDotChanged;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)OnWCMallShowStatusInMoreViewChanged;
- (void)OnWCMallActivityChanged;
- (void)OnEmoticonRecommendNewStateChanged:(_Bool)arg1;
- (void)OnGetBankCardReddotData;
- (void)ReloadWallet;
- (void)OnStatusChangedOrderListCountChanged:(unsigned int)arg1;
- (void)onSettingExtChanged:(int)arg1;
- (void)onWCCardMessageEntryTipChanged:(id)arg1;
- (void)onSettingChanged:(int)arg1;
- (void)onHeadImageChange:(id)arg1;
- (void)updateHead:(id)arg1;
- (id)getSettingHeadImage;
- (void)pluginsChanged:(id)arg1;
- (void)onGetUpdateInfoOk;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)didReceiveMemoryWarning;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)updateTabBarBadge;
- (unsigned int)getTotalCount;
- (void)onCloseFavTimeOut;
- (void)onFavoritesClose;
- (void)checkReload;
- (_Bool)isNeedShowWCPayInTabNew;
- (_Bool)isNeedShowWCPay;
- (void)showPrivateSettingWithContactVerify:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showWcRecentPrivacySetting:(unsigned long long)arg1;
- (void)showPrivateSetting;
- (void)showChangeLanguage;
- (void)showSettingView;
- (void)showEmoticonStoreView;
- (void)showShareCardView;
- (void)showShareCardViewInternal;
- (void)showWCCardView;
- (void)showOverseaNativePayView;
- (void)openWCPayView;
- (void)showHtml5PayView;
- (void)showWCPayView;
- (void)reportNativeWCPayClick;
- (void)showFavoriteView;
- (void)showMyWCView;
- (void)showMyQRCodeInProfileView;
- (void)onShowMyQrCode;
- (void)showAppleWatchUpdateView;
- (void)showAppleWatchView;
- (void)showProfileView;
- (void)makeWCCardView:(id)arg1;
- (void)makeWCPayView:(id)arg1;
- (void)makeWCCell:(id)arg1;
- (void)makeProfileCell:(id)arg1;
- (void)showToastTipsViewWithText:(id)arg1 isSuccess:(_Bool)arg2;
- (void)stopLoading;
- (void)startLoading;
- (void)initLoadingView;
- (void)addSettingSection;
- (void)addFunctionSection;
- (void)addWCMallSection;
- (void)addProfileSection;
- (void)showKitchen;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reloadMoreView;
- (void)willAppear;
- (void)initView;
- (void)viewDidLoad;
- (void)initMessageIdToListen;
- (id)init;
- (void)dealloc;
- (id)getUpdateWechatRedDotConfig;
- (void)setUpdateWechatRedDotConfig:(id)arg1;
- (void)initUpdateWechatRedDotConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

