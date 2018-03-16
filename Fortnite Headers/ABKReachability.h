//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ABKReachability : NSObject
{
    struct __SCNetworkReachability *reachabilityRef;
    SEL _observerSelector;
    id _observer;
}

+ (id)reachabilityForApiWithObserver:(id)arg1 andCallbackOnChange:(SEL)arg2;
@property __weak id observer; // @synthesize observer=_observer;
@property SEL observerSelector; // @synthesize observerSelector=_observerSelector;
- (void).cxx_destruct;
- (int)currentReachabilityStatus;
- (_Bool)connectionRequired;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;

@end

