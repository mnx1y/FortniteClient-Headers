//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GTMLogFormatter-Protocol.h"

@class NSString;

@interface GTMLogBasicFormatter : NSObject <GTMLogFormatter>
{
}

- (id)stringForFunc:(id)arg1 withFormat:(id)arg2 valist:(char *)arg3 level:(int)arg4;
- (id)prettyNameForFunc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

