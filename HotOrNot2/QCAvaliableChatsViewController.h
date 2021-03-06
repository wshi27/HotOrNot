//
//  QCAvaliableChatsViewController.h
//  HotOrNot2
//
//  Created by Eliot Arntz on 7/11/13.
//  Copyright (c) 2013 self.edu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QCChatViewController.h"
#import "QCAvailableChatCell.h"

@interface QCAvaliableChatsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) NSMutableArray *availableChatRoomsArray;
@property (strong, nonatomic) NSArray *chatSubjectImages;

@end
