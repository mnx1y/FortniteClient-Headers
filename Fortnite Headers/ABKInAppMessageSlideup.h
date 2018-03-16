//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKInAppMessage.h"

@class NSString, UIColor;

@interface ABKInAppMessageSlideup : ABKInAppMessage
{
    _Bool _hideChevron;
    long long _inAppMessageSlideupAnchor;
    UIColor *_chevronColor;
    NSString *_UIType;
}

@property(copy) NSString *UIType; // @synthesize UIType=_UIType;
@property(retain) UIColor *chevronColor; // @synthesize chevronColor=_chevronColor;
@property long long inAppMessageSlideupAnchor; // @synthesize inAppMessageSlideupAnchor=_inAppMessageSlideupAnchor;
@property _Bool hideChevron; // @synthesize hideChevron=_hideChevron;
- (void).cxx_destruct;
- (_Bool)isBeveled;
- (id)proxyForJson;
- (id)description;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

