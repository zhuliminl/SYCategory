//
//  UITableViewCell+SYCategory.h
//  zhangshaoyu
//
//  Created by zhangshaoyu on 16/11/28.
//  Copyright © 2016年 zhangshaoyu. All rights reserved.
//

#import <UIKit/UIKit.h>

/// 显示样式（只显示顶端，只显示底端，两者都显示，两者都不显示。默认都不显示）
typedef NS_ENUM(NSInteger, CellLineShowType)
{
    /// 两者都不显示
    CellLineShowNone = 0,
    
    /// 两者都显示
    CellLineShowAll = 1,
    
    /// 只显示顶端
    CellLineShowTop = 2,
    
    /// 只显示底端
    CellLineShowButtom = 3,
};

@interface UITableViewCell (SYCategory)

/// 设置分割线
- (void)cellLineShow:(CGFloat)offX color:(UIColor *)lineColor type:(CellLineShowType)type;

/// 顶端分割线
@property (nonatomic, strong) UIImageView *lineViewTop;
/// 底端分割线
@property (nonatomic, strong) UIImageView *lineViewButtom;

/// 设置系统分割线缩进样式
- (void)cellSeparatorInset:(UIEdgeInsets)edge;

/// UITableViewCell复用实例化
+ (UITableViewCell *)dequeueReusableCellWithTable:(UITableView *)table style:(UITableViewCellStyle)style;

@end
