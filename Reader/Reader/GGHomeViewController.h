//
//  GGHomeViewController.h
//  Reader
//
//  Created by 戴特长 on 14-7-9.
//  Copyright (c) 2014年 gaga. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AFNetworking.h"
@interface GGHomeViewController : UITableViewController<UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;

@property (nonatomic, strong) NSArray *tableData;

@end
