//
//  CALayer+XibConfiguration.h
//  yixia
//
//  Created by Allen.Young on 26/3/15.
//  Copyright (c) 2015 yixia. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

@interface CALayer(XibConfiguration)

// This assigns a CGColor to borderColor.
@property(nonatomic, assign) UIColor* borderUIColor;

@end