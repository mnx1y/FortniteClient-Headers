//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class ABKFeedViewController, NSString;
@protocol ABKFeedViewControllerDelegate;

@interface ABKFeedViewControllerGenericContext : UINavigationController <UINavigationControllerDelegate>
{
    ABKFeedViewController *_feedViewController;
    NSString *_retainedNavigationBarTitle;
}

@property(retain) NSString *retainedNavigationBarTitle; // @synthesize retainedNavigationBarTitle=_retainedNavigationBarTitle;
@property(retain) ABKFeedViewController *feedViewController; // @synthesize feedViewController=_feedViewController;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableUnreadIndicator;
@property unsigned long long categories;
@property __weak id <ABKFeedViewControllerDelegate> appboyDelegate;
@property double minimumCardMarginForiPad;
@property double minimumCardMarginForiPhone;
@property double cardWidthForiPad;
@property double cardWidthForiPhone;
- (id)navigationBarTitle;
- (void)setNavigationBarTitle:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)viewDidLoad;
- (void)setupNavigationBarAndFeedViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

