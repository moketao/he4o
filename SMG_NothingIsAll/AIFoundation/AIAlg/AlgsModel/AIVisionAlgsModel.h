//
//  AIVisionAlgsModel.h
//  SMG_NothingIsAll
//
//  Created by jiaxiaogang on 2018/11/19.
//  Copyright © 2018年 XiaoGang. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 *  MARK:--------------------视觉算法结果模型--------------------
 *  1. 用于输入到ThinkingControl;
 */
@interface AIVisionAlgsModel : NSObject

//size
@property (assign,nonatomic) CGFloat sizeWidth;
@property (assign,nonatomic) CGFloat sizeHeight;

//color
@property (assign,nonatomic) NSInteger colorRed;
@property (assign,nonatomic) NSInteger colorGreen;
@property (assign,nonatomic) NSInteger colorBlue;

//radius
@property (assign,nonatomic) CGFloat radius;

//origin
@property (assign,nonatomic) CGFloat originX;
@property (assign,nonatomic) CGFloat originY;

//speed
@property (assign,nonatomic) CGFloat speed;

@end
