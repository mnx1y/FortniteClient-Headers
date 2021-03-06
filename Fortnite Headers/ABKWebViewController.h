//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class ABKSpinnerView, NSString, NSURL, UIView, UIWebView;

@interface ABKWebViewController : UIViewController <UIWebViewDelegate>
{
    id _popViewObserver;
    _Bool _requestUrlWasNotHttp;
    UIWebView *_webView;
    ABKSpinnerView *_spinnerView;
    NSURL *_url;
    UIView *_noConnectionView;
}

@property(retain, nonatomic) UIView *noConnectionView; // @synthesize noConnectionView=_noConnectionView;
@property _Bool requestUrlWasNotHttp; // @synthesize requestUrlWasNotHttp=_requestUrlWasNotHttp;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) ABKSpinnerView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)viewDidUnload;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

