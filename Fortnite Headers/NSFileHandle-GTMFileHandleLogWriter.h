//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileHandle.h>

#import "GTMLogWriter-Protocol.h"

@class NSString;

@interface NSFileHandle (GTMFileHandleLogWriter) <GTMLogWriter>
+ (id)fileHandleForLoggingAtPath:(id)arg1 mode:(unsigned short)arg2;
- (void)logMessage:(id)arg1 level:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

