//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class ABKTriggerAssetManager, NSArray, NSDate, NSDictionary, NSString;

@interface ABKTriggeredAction : NSObject <NSCoding>
{
    _Bool _prefetch;
    NSArray *_triggerConditions;
    NSDate *_startTime;
    NSDate *_endTime;
    long long _priority;
    NSDictionary *_data;
    long long _delay;
    NSString *_Id;
    long long _reEligibility;
    NSDate *_lastTriggeredTime;
    double _timeout;
    double _minSecondsSinceLastTrigger;
    ABKTriggerAssetManager *_assetManager;
}

+ (id)getTriggeredActionFromDictionary:(id)arg1;
@property(retain) ABKTriggerAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property double minSecondsSinceLastTrigger; // @synthesize minSecondsSinceLastTrigger=_minSecondsSinceLastTrigger;
@property double timeout; // @synthesize timeout=_timeout;
@property(retain) NSDate *lastTriggeredTime; // @synthesize lastTriggeredTime=_lastTriggeredTime;
@property long long reEligibility; // @synthesize reEligibility=_reEligibility;
@property(nonatomic) _Bool prefetch; // @synthesize prefetch=_prefetch;
@property(copy) NSString *Id; // @synthesize Id=_Id;
@property long long delay; // @synthesize delay=_delay;
@property(retain) NSDictionary *data; // @synthesize data=_data;
@property long long priority; // @synthesize priority=_priority;
@property(retain) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain) NSArray *triggerConditions; // @synthesize triggerConditions=_triggerConditions;
- (void).cxx_destruct;
- (_Bool)withinTimeout;
- (void)prefetchAssets;
- (id)resourceLinks;
- (void)performTriggeredAction:(id)arg1;
- (_Bool)isEligibleAndWithinSchedule;
- (long long)triggerActionCompare:(id)arg1;
- (_Bool)respondsToTriggerEvent:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
