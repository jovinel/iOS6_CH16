//
//  BIDQuartzFunView.h
//  QuartzFun
//
//  Created by Crescens Techstars on 12/9/13.
//  Copyright (c) 2013 Crescens Techstars. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BIDConstants.h"

@interface BIDQuartzFunView : UIView

@property (nonatomic) CGPoint firstTouch;
@property (nonatomic) CGPoint lastTouch;
@property (strong, nonatomic) UIColor *currentColor;
@property (nonatomic) ShapeType shapeType;
@property (nonatomic, strong) UIImage *drawImage;
@property (nonatomic) BOOL useRandomColor;
@property (weak, nonatomic) IBOutlet UISegmentedControl *colorControl;
- (IBAction)changeColor:(id)sender;

@end
