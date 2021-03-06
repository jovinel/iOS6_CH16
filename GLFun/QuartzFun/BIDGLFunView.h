//
//  BIDGLFunView.h
//  GLFun
//
//  Created by Crescens Techstars on 12/10/13.
//  Copyright (c) 2013 Crescens Techstars. All rights reserved.
//

#import "BIDConstants.h"
#import "OpenGLES2DView.h"

@class Texture2D;

@interface BIDGLFunView : OpenGLES2DView
@property CGPoint firstTouch;
@property CGPoint lastTouch;
@property (nonatomic, strong) UIColor *currentColor;
@property BOOL useRandomColor;
@property ShapeType shapeType;
@property (nonatomic, strong) Texture2D *sprite;
@end