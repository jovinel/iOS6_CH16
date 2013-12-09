//
//  BIDConstants.h
//  QuartzFun
//
//  Created by Crescens Techstars on 12/9/13.
//  Copyright (c) 2013 Crescens Techstars. All rights reserved.
//

#ifndef QuartzFun_BIDConstants_h
#define QuartzFun_BIDConstants_h

typedef enum {
    kLineShape = 0,
    kRectShape,
    kEllipseShape,
    kImageShape
} ShapeType;

typedef enum {
    kRedColorTab = 0,
    kBlueColorTab,
    kYellowColorTab,
    kGreenColorTab,
    kRandomColorTab
} ColorTabIndex;

#define degreesToRadian(x) (M_PI * (x) / 180.0)



#endif
