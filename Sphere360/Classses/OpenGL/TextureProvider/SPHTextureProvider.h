//
//  SPHTextureProvider.h
//  Sphere360
//
//  Created by Kirill on 12/1/14.
//  Copyright (c) 2014 Kirill Gorbushko. All rights reserved.
//

@interface SPHTextureProvider : NSObject

+ (CGImageRef)imageWithCVPixelBufferUsingUIGraphicsContext:(CVPixelBufferRef)pixelBuffer;

@end
