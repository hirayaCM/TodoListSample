//
//  AddItemViewController.h
//  TodoListSample
//
//  Created by hiraya.shingo on 13/06/14.
//  Copyright (c) 2013年 hiraya.shingo. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddItemViewControllerDelegate;

@interface AddItemViewController : UITableViewController

@property (weak, nonatomic) id<AddItemViewControllerDelegate> delegate;

@end

@protocol AddItemViewControllerDelegate <NSObject>

- (void)addItemViewControllerDidCancel:(AddItemViewController *)controller;

- (void)addItemViewControllerDidFinish:(AddItemViewController *)controller item:(NSString *)item;

@end