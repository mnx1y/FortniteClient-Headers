//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@interface ABKLocationServerConfig : NSObject <NSCoding>
{
    _Bool _enabled;
    _Bool _placeIQEnabled;
    long long _distance;
    double _time;
}

@property double time; // @synthesize time=_time;
@property long long distance; // @synthesize distance=_distance;
@property _Bool placeIQEnabled; // @synthesize placeIQEnabled=_placeIQEnabled;
@property _Bool enabled; // @synthesize enabled=_enabled;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
- (_Bool)isEqualToLocationServerConfig:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
