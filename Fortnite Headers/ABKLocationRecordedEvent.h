//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKEvent.h"

@class CLLocation;

@interface ABKLocationRecordedEvent : ABKEvent
{
    CLLocation *_location;
}

@property(copy) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getDataAsJson;
- (id)getType;
- (id)initWithLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

