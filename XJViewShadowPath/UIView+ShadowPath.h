//
//  UIView+ShadowPath.h
//  XJViewShadowPath
//
//  Created by LXJ on 2017/11/27.
//  Copyright © 2017年 LianLuo. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSInteger {
    
    ShadowPathLeft,
    ShadowPathRight,
    ShadowPathTop,
    ShadowPathBottom,
    ShadowPathAround
    
} ShadowPathSide;

@interface UIView (ShadowPath)


/**
 设置UIView阴影

 @param shadowColor 阴影颜色
 @param shadowOpacity 阴影透明度
 @param shadowRadius 阴影半径
 @param shadowPathSide 阴影位置
 @param shadowPathWidth 阴影宽度
 */
- (void)setShadowPathWith:(UIColor *)shadowColor
            shadowOpacity:(CGFloat)shadowOpacity
             shadowRadius:(CGFloat)shadowRadius
           shadowPathSide:(ShadowPathSide)shadowPathSide
          shadowPathWidth:(CGFloat)shadowPathWidth;

@end
