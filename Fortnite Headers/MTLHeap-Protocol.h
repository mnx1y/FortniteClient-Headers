//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTLTextureDescriptor, NSString;
@protocol MTLBuffer, MTLDevice, MTLTexture;

@protocol MTLHeap <NSObject>
@property(readonly) unsigned long long currentAllocatedSize;
@property(readonly) unsigned long long usedSize;
@property(readonly) unsigned long long size;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly) unsigned long long storageMode;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLBuffer>)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
@end

