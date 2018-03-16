//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FApplePlatformObject.h"

@class FMetalTessellationPipelineDesc;
@protocol MTLComputePipelineState, MTLRenderPipelineState;

@interface FMetalShaderPipeline : FApplePlatformObject
{
    id <MTLRenderPipelineState> _RenderPipelineState;
    id <MTLComputePipelineState> _ComputePipelineState;
    FMetalTessellationPipelineDesc *_TessellationPipelineDesc;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (CDStruct_eb6fb79d *)classAllocator;
@property(retain, nonatomic) FMetalTessellationPipelineDesc *TessellationPipelineDesc; // @synthesize TessellationPipelineDesc=_TessellationPipelineDesc;
@property(retain, nonatomic) id <MTLComputePipelineState> ComputePipelineState; // @synthesize ComputePipelineState=_ComputePipelineState;
@property(retain, nonatomic) id <MTLRenderPipelineState> RenderPipelineState; // @synthesize RenderPipelineState=_RenderPipelineState;
- (void)dealloc;

@end
