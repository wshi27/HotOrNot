//
//  QCLoginViewController.h
//  HotOrNot2
//
//  Created by Eliot Arntz on 6/20/13.
//  Copyright (c) 2013 self.edu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QCLoginViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIButton *loginButton;
- (IBAction)loginButtonPressed:(UIButton *)sender;

@end