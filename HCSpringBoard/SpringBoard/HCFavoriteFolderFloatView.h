//
//  HCFavoriteFolderFloatView.h
//  HCSpringBoard
//
//  Created by 刘海川 on 16/3/7.
//  Copyright © 2016年 Haichuan Liu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HCFavoriteFolderModel.h"
#import "HCFavoriteFolderView.h"
#import "HCAssistant.h"

@interface HCFavoriteFolderFloatView : UIControl <UITextFieldDelegate>

@property (nonatomic, assign) id myControllerDelegate;
@property (nonatomic, assign) id mySpringBoardDelegate;
@property (nonatomic, strong) HCFavoriteFolderModel *loveFolderModel;
@property (nonatomic, strong) HCFavoriteFolderView *loveFolderView;

@property (nonatomic, strong) NSMutableArray *loveMainModels;

- (instancetype)initWithModel:(HCFavoriteFolderModel *)model;

- (void)hideFloatView:(UIControl *)control;

@end
