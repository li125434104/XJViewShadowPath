//
//  TUUIMacro.h
//
//
//  Created by cn on 16/3/26.
//  Copyright © 2016年 cn. All rights reserved.
//

#ifndef TUUIMacro_h
#define TUUIMacro_h

// 屏幕大小
#ifndef kScreenSize
#define kScreenSize     [[UIScreen mainScreen] bounds].size
#endif

#ifndef kScreenWidth
#define kScreenWidth    [[UIScreen mainScreen] bounds].size.width
#endif

#ifndef kScreenHeight
#define kScreenHeight   [[UIScreen mainScreen] bounds].size.height
#endif

#ifndef kScreenScale
#define kScreenScale ([UIScreen mainScreen].scale)
#endif

#ifndef kScreenOneScale
#define kScreenOneScale (1.0 / kScreenScale)
#endif

#define kScreenFrame    [[UIScreen mainScreen] bounds]
#define kWindow         [UIApplication sharedApplication].keyWindow

/* UIColor创建 ===============================================================================*/
#pragma mark - UIColor

#ifndef kColorFromRGBA
#define kColorFromRGBA(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
#endif

#ifndef kColorFromRGB
#define kColorFromRGB(r,g,b) kColorFromRGBA((r),(g),(b),1)
#endif

#ifndef kColorFromHexA
#define kColorFromHexA(hex,a) \
[UIColor colorWithRed:((float)(((hex) & 0xFF0000) >> 16))/255.0 \
green:((float)(((hex) & 0xFF00) >> 8))/255.0 \
blue:((float)((hex) & 0xFF))/255.0 alpha:a]
#endif

#ifndef kColorFromHex
#define kColorFromHex(hex) kColorFromHexA((hex),1)
#endif

#define Color_White              [UIColor whiteColor]
#define Color_Clear              [UIColor clearColor]
#define Color_ButtonBG           kColorFromHex(0xff49a7fe)
#define Color_line               kColorFromHex(0xffdcdcdc)
#define Color_Nav                kColorFromHex(0xff49a9fe)

#define Color_Environment_You      kColorFromHex(0xff53e98f)
#define Color_Environment_Liang    kColorFromHex(0xff0bf0f3)
#define Color_Environment_Qingdu   kColorFromHex(0xffffe75d)
#define Color_Environment_Zhongdu  kColorFromHex(0xfff29055)
#define Color_Environment_Yanzhong kColorFromHex(0xffbb4d51)


#define Color_Background kColorFromHex(0xfff7f7f7)
#define Color_Border kColorFromHex(0xfffeaeaea)

#define LOAD_NIB(name)  [[[NSBundle mainBundle] loadNibNamed:name owner:nil options:nil] lastObject]

/* 屏幕尺寸判断 ===============================================================================*/
/** 判断是否为3.5inch 320*480 640*960 */
#ifndef kIs_Inch3_5
#define kIs_Inch3_5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#endif

/** 判断是否为4.0inch 320*568 640*1136 */
#ifndef kIs_Inch4_0
#define kIs_Inch4_0 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#endif
/** 判断是否为4.7inch 375*667 750*1334 */
#ifndef kIs_Inch4_7
#define kIs_Inch4_7 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)
#endif

/** 判断是否为5.5inch 414*1104 1242*2208 */
#ifndef kIs_Inch5_5
#define kIs_Inch5_5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)
#endif

/** 判断是否为5.8inch 375*812 1125*2436 */
#ifndef kIs_Inch5_8
#define kIs_Inch5_8 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
#endif

#endif /* TUUIMacro_h */
