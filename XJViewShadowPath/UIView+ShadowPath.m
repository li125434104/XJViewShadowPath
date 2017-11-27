

//
//  UIView+ShadowPath.m
//  XJViewShadowPath
//
//  Created by LXJ on 2017/11/27.
//  Copyright © 2017年 LianLuo. All rights reserved.
//

#import "UIView+ShadowPath.h"

@implementation UIView (ShadowPath)

- (void)setShadowPathWith:(UIColor *)shadowColor
            shadowOpacity:(CGFloat)shadowOpacity
             shadowRadius:(CGFloat)shadowRadius
           shadowPathSide:(ShadowPathSide)shadowPathSide
          shadowPathWidth:(CGFloat)shadowPathWidth {
    
    self.layer.masksToBounds = NO;
    self.layer.shadowColor = shadowColor.CGColor;
    self.layer.shadowOpacity = shadowOpacity;
    self.layer.shadowRadius = shadowRadius;
    self.layer.shadowOffset = CGSizeZero;
    
    CGRect shadowRect;
    CGFloat originX = 0;
    CGFloat originY = 0;
    CGFloat originW = self.bounds.size.width;
    CGFloat originH = self.bounds.size.height;
    
    switch (shadowPathSide) {
        case ShadowPathTop:
            shadowRect = CGRectMake(originX, originY - shadowPathWidth / 2, originW, shadowPathWidth);
            break;
        case ShadowPathBottom:
            shadowRect = CGRectMake(originX, originH - shadowPathWidth / 2, originW, shadowPathWidth);
            break;
        case ShadowPathLeft:
            shadowRect = CGRectMake(originX - shadowPathWidth / 2, originY, shadowPathWidth, originH);
            break;
        case ShadowPathRight:
            shadowRect = CGRectMake(originW - shadowPathWidth / 2, originY, shadowPathWidth, originH);
            break;
        case ShadowPathAround:
            shadowRect = CGRectMake(originX - shadowPathWidth / 2, originY - shadowPathWidth / 2, originW + shadowPathWidth, originH + shadowPathWidth);
            break;
        default:
            break;
    }
    
    UIBezierPath *path = [UIBezierPath bezierPathWithRect:shadowRect];
    self.layer.shadowPath = path.CGPath;
}

@end

