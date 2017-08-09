//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "WCBizPickerViewDelegate-Protocol.h"

@class NSArray, NSString, UIPickerView, WCAddressStageDataStruct;

@interface WCAddressPickerItem : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate, WCBizPickerViewDelegate>
{
    NSArray *m_arrStage;
    WCAddressStageDataStruct *m_selectProvince;
    WCAddressStageDataStruct *m_selectCity;
    WCAddressStageDataStruct *m_selectDistrict;
    unsigned int m_uiCurProvince;
    unsigned int m_uiCurCity;
    unsigned int m_uiCurDistrict;
    UIPickerView *m_pickerView;
}

- (void).cxx_destruct;
- (void)UIPickerViewDidFinish;
- (void)UIPickerViewDidCancel;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)SetText;
- (void)becomeFirstResponder;
- (void)dealloc;
- (void)initView:(struct CGRect)arg1;
- (id)getSelectDistrict;
- (id)getSelectCity;
- (id)getSelectProvice;
- (void)setSelectStageProvince:(id)arg1 City:(id)arg2 District:(id)arg3;
- (void)setAllAddressStageData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
