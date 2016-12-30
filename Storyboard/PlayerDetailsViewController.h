//
//  PlayerDetailsViewController.h
//  Storyboard
//
//  Created by Lucas César  Nogueira Fonseca on 29/12/16.
//  Copyright © 2016 Lucas César  Nogueira Fonseca. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Players.h"
#import "GamePickerViewController.h"

@class PlayerDetailsViewController;
@class Players;

@protocol PlayerDetailsViewControllerDelegate <NSObject>
- (void)playerDetailsViewControllerDidCancel:(PlayerDetailsViewController *)controller;
- (void)playerDetailsViewController:(PlayerDetailsViewController *)controller didAddPlayer:(Players *)player;
@end
@interface PlayerDetailsViewController : UITableViewController <GamePickerViewControllerDelegate>
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;

@property (nonatomic, weak) id <PlayerDetailsViewControllerDelegate> delegate;

- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;

@end
