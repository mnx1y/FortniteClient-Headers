//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AKFAdvancedUIManaging-Protocol.h"
#import "AKFConfiguring-Protocol.h"
#import "AKFTheming-Protocol.h"

@protocol AKFViewControllerDelegate;

@protocol AKFViewController <AKFAdvancedUIManaging, AKFConfiguring, AKFTheming>
@property(readonly, nonatomic) unsigned long long loginType;
@property(nonatomic) __weak id <AKFViewControllerDelegate> delegate;
@end

