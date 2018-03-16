//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface ABKEventLog : NSObject <NSCoding, NSCopying>
{
    NSMutableArray *_eventList;
    NSObject *_eventListLock;
}

@property(retain) NSObject *eventListLock; // @synthesize eventListLock=_eventListLock;
@property(retain) NSMutableArray *eventList; // @synthesize eventList=_eventList;
- (void).cxx_destruct;
- (void)updateAnonymousEventsWithUserId:(id)arg1;
- (id)proxyForJson;
- (id)getEvents;
- (void)removeEvents:(id)arg1;
- (void)addEvent:(id)arg1;
- (_Bool)isEmpty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

