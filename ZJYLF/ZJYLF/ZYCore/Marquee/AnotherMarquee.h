//
//  AnotherMarquee.h
//  ZJYLF
//
//  Created by 刘高洋 on 2018/11/8.
//  Copyright © 2018年 hymac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AnotherMarquee : UIView
/** 标题的字体 默认为14 */
@property(nonatomic)UIFont *titleFont;
/**标题的颜色 默认红色*/
@property(nonatomic)UIColor *titleColor;
/**存放titles的数组 和初始化的数组一致*/
@property(nonatomic)NSArray *titleArr;
//标题
@property (nonatomic, copy)NSString *title;
//回调
@property(nonatomic,copy)void(^handlerTitleClickCallBack)(NSInteger index);

//回调
@property(nonatomic,copy)void(^moreClickCallBack)();

#pragma mark - init Methods
-(instancetype)initWithFrame:(CGRect)frame withTitle:(NSArray *)titles;
@end
