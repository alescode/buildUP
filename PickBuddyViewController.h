//
//  EditFriendsTableViewController.h
//  buildUP
//
//  Created by Alejandro Machado on 14/5/6.
//  Copyright (c) 2014 M-ITI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface PickBuddyViewController : UITableViewController

@property (nonatomic, strong) NSArray *allUsers;
@property (nonatomic, strong) PFUser *currentUser;
@property (nonatomic, strong) NSString *buddyUsername;

@end
