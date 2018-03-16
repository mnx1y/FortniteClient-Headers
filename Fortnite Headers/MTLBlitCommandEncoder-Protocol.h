//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLCommandEncoder-Protocol.h"

@protocol MTLBuffer, MTLFence, MTLResource, MTLTexture;

@protocol MTLBlitCommandEncoder <MTLCommandEncoder>
- (void)waitForFence:(id <MTLFence>)arg1;
- (void)updateFence:(id <MTLFence>)arg1;
- (void)copyFromBuffer:(id <MTLBuffer>)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id <MTLBuffer>)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;
- (void)fillBuffer:(id <MTLBuffer>)arg1 range:(struct _NSRange)arg2 value:(unsigned char)arg3;
- (void)generateMipmapsForTexture:(id <MTLTexture>)arg1;
- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id <MTLBuffer>)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;
- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id <MTLBuffer>)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;
- (void)copyFromBuffer:(id <MTLBuffer>)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id <MTLTexture>)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;
- (void)copyFromBuffer:(id <MTLBuffer>)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id <MTLTexture>)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;
- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id <MTLTexture>)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;
- (void)synchronizeTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)synchronizeResource:(id <MTLResource>)arg1;
@end

