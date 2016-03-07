//
//  CGHRefreshControl.h
//  CGHRefreshControlDemo
//
//  Created by caigehui on 16/3/7.
//  Copyright © 2016年 caigehui. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^RefreshingBlock)();

@interface CGHRefreshControl : UIControl



/**
 * 创建一个control
 * retrun a "CGHRefreshControl" instance
 */
+ (CGHRefreshControl *)controlWithScrollView:(UIScrollView *)scrollView
                             refreshingBlock:(RefreshingBlock)refreshingBlock;

/**
 *  创建一个tintColor的control
 */
+ (CGHRefreshControl *)controlWithScrollView:(UIScrollView *)scrollView
                                   tintColor:(UIColor *)tintColor
                             refreshingBlock:(RefreshingBlock)refreshingBlock;

/**
 * 开始执行刷新
 * make the control start refreshing
 */
- (void)startRefreshing;

/**
 * 结束刷新
 * make the control end refreshing
 */
- (void)endRefrshing;

@end
