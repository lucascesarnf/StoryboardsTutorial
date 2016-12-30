//
//  GamePickerViewController.h
//  Storyboard
//
//  Created by Lucas César  Nogueira Fonseca on 30/12/16.
//  Copyright © 2016 Lucas César  Nogueira Fonseca. All rights reserved.
//

#import <UIKit/UIKit.h>
@class GamePickerViewController;

@protocol GamePickerViewControllerDelegate <NSObject>
- (void)gamePickerViewController:(GamePickerViewController *)controller didSelectGame:(NSString *)game;
@end

@interface GamePickerViewController : UITableViewController

@property (nonatomic, weak) id <GamePickerViewControllerDelegate> delegate;
@property (nonatomic, strong) NSString *game;

@end
