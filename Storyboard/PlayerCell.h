//
//  PlayerCell.h
//  Storyboard
//
//  Created by Lucas César  Nogueira Fonseca on 29/12/16.
//  Copyright © 2016 Lucas César  Nogueira Fonseca. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *gameLabel;
@property (weak, nonatomic) IBOutlet UIImageView *ratingImageView;

@end
