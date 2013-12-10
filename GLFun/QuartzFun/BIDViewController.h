//
//  BIDViewController.h
//  QuartzFun
//
//  Created by Crescens Techstars on 12/9/13.
//  Copyright (c) 2013 Crescens Techstars. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDViewController : UIViewController
//- (IBAction)changeShape:(id)sender;
//- (IBAction)changeColor:(id)sender;
//@property (weak, nonatomic) IBOutlet UISegmentedControl *colorControl;
- (IBAction)changeShape:(id)sender;
- (IBAction)changeColor:(id)sender;
@property (weak, nonatomic) IBOutlet UISegmentedControl *colorControl;
@end
