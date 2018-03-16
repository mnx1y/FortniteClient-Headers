//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBDisplayAdAdapterDelegate-Protocol.h"

@class FBANInstreamAdAdapter, NSString;
@protocol FBInstreamAdRendererViewDelegate;

@interface FBInstreamAdRendererView : UIView <FBDisplayAdAdapterDelegate>
{
    _Bool _started;
    id <FBInstreamAdRendererViewDelegate> _delegate;
    FBANInstreamAdAdapter *_instreamAdapter;
}

@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) FBANInstreamAdAdapter *instreamAdapter; // @synthesize instreamAdapter=_instreamAdapter;
@property(nonatomic) __weak id <FBInstreamAdRendererViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)adapterDidUnload:(id)arg1;
- (void)adapterWillUnload:(id)arg1;
- (void)adapterDidFinishHandlingClick:(id)arg1;
- (void)adapterWillLogImpression:(id)arg1;
- (void)adapter:(id)arg1 didFailWithError:(id)arg2;
- (void)adapterDidLoad:(id)arg1;
- (void)adapterDidClick:(id)arg1 url:(id)arg2 playerHandles:(_Bool)arg3;
- (void)failedWithError:(id)arg1;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (void)loadAdFromAdParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
