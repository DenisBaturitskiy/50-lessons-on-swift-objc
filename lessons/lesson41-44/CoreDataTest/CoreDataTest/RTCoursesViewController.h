//
//  RTCoursesViewController.h
//  CoreDataTest
//
//  Created by Руслан on 19.01.17.
//  Copyright © 2017 Ruslan Timchenko. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RTCoreDataTableViewController.h"

@class RTUniversity;

@interface RTCoursesViewController : RTCoreDataTableViewController

@property (strong, nonatomic) RTUniversity *university;

@end