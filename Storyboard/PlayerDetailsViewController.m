//
//  PlayerDetailsViewController.m
//  Storyboard
//
//  Created by Lucas César  Nogueira Fonseca on 29/12/16.
//  Copyright © 2016 Lucas César  Nogueira Fonseca. All rights reserved.
//

#import "PlayerDetailsViewController.h"
#import "Players.h"

@interface PlayerDetailsViewController ()

@end


@implementation PlayerDetailsViewController
{
    NSString *_game;
}
- (void)viewDidLoad {
    [super viewDidLoad];
    self.detailLabel.text = _game;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source
- (void)gamePickerViewController:(GamePickerViewController *)controller didSelectGame:(NSString *)game
{
    _game = game;
    self.detailLabel.text = _game;
    
    [self.navigationController popViewControllerAnimated:YES];
}
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([segue.identifier isEqualToString:@"PickGame"]) {
        GamePickerViewController *gamePickerViewController = segue.destinationViewController;
        gamePickerViewController.delegate = self;
        gamePickerViewController.game = _game;
    }
}
- (id)initWithCoder:(NSCoder *)aDecoder
{
    if ((self = [super initWithCoder:aDecoder])) {
        NSLog(@"init PlayerDetailsViewController");
        _game = @"Chess";
    }
    return self;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (indexPath.section == 0) {
        [self.nameTextField becomeFirstResponder];
    }
}


- (IBAction)cancel:(id)sender
{
    [self.delegate playerDetailsViewControllerDidCancel:self];
}
- (IBAction)done:(id)sender
{
    Players *player = [[Players alloc] init];
    player.name = self.nameTextField.text;
    player.game = _game;  // only this line is changed
    player.rating = 1;
    [self.delegate playerDetailsViewController:self didAddPlayer:player];
}
@end
