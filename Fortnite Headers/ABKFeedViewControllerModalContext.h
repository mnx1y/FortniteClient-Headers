//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKFeedViewControllerGenericContext.h"

@class NSString;
@protocol ABKFeedViewControllerModalContextDelegate;

@interface ABKFeedViewControllerModalContext : ABKFeedViewControllerGenericContext
{
    id <ABKFeedViewControllerModalContextDelegate> _closeButtonDelegate;
}

@property __weak id <ABKFeedViewControllerModalContextDelegate> closeButtonDelegate; // @synthesize closeButtonDelegate=_closeButtonDelegate;
- (void).cxx_destruct;

// Remaining properties
@property(retain) NSString *navigationBarTitle; // @dynamic navigationBarTitle;

@end

