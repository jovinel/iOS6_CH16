//
//  BIDQuartzFunView.m
//  QuartzFun
//
//  Created by Crescens Techstars on 12/9/13.
//  Copyright (c) 2013 Crescens Techstars. All rights reserved.
//

#import "BIDQuartzFunView.h"
#import "UIColor+BIDRandom.h"

@implementation BIDQuartzFunView

- (id)initWithCoder:(NSCoder *)coder {
    if (self = [super initWithCoder:coder]) {
        _currentColor = [UIColor redColor];
        _useRandomColor = NO;
        _drawImage = [UIImage imageNamed:@"iphone.png"];
    }
    return self;
}

#pragma mark - Touch Handling

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
    if (_useRandomColor) {
        self.currentColor = [UIColor randomColor];
    }
    UITouch *touch = [touches anyObject];
    _firstTouch = [touch locationInView:self];
    _lastTouch = [touch locationInView:self];
    [self setNeedsDisplay];
}

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
    UITouch *touch = [touches anyObject];
    _lastTouch = [touch locationInView:self];
    
    [self setNeedsDisplay];
}

- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event {
    UITouch *touch = [touches anyObject];
    _lastTouch = [touch locationInView:self];
    
    [self setNeedsDisplay];
}
/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation. */

- (void)drawRect:(CGRect)rect
{
    CGContextRef context = UIGraphicsGetCurrentContext();
    
    CGContextSetLineWidth(context, 2.0);
    CGContextSetStrokeColorWithColor(context, _currentColor.CGColor);
    
    CGContextSetFillColorWithColor(context, _currentColor.CGColor);
    CGRect currentRect = CGRectMake(_firstTouch.x, _firstTouch.y, _lastTouch.x - _firstTouch.x, _lastTouch.y - _firstTouch.y);
    
    switch (_shapeType) {
        case kLineShape:
            CGContextMoveToPoint(context, _firstTouch.x, _firstTouch.y);
            CGContextAddLineToPoint(context, _lastTouch.x, _lastTouch.y);
            CGContextStrokePath(context);
            break;
        case kRectShape:
            CGContextAddRect(context, currentRect);
            CGContextDrawPath(context, kCGPathFillStroke);
            break;
        case kEllipseShape:
            CGContextAddEllipseInRect(context, currentRect);
            CGContextDrawPath(context, kCGPathFillStroke);
            break;
        case kImageShape:
            break;
        default:
            break;
    }
}


@end
