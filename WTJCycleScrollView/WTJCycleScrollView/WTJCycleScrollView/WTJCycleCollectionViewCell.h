//
//  WTJCycleCollectionViewCell.h
//  WTJCycleScrollView
//
//  Created by wtj on 16/6/8.
//  Copyright © 2016年 com.yibei.renrenmeishu. All rights reserved.
//

#import <UIKit/UIKit.h>
#define WTJCycleCollectionViewCellKey @"WTJCycleCollectionViewCellKey"
@interface WTJCycleCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *title;

@property (nonatomic, strong) UIColor *titleLabelTextColor;
@property (nonatomic, strong) UIFont *titleLabelTextFont;
@property (nonatomic, strong) UIColor *titleLabelBackgroundColor;
@property (nonatomic, assign) CGFloat titleLabelHeight;

@property (nonatomic, assign) BOOL hasConfigured;

/** 只展示文字轮播 */
@property (nonatomic, assign) BOOL onlyDisplayText;
@end