//
//  BOTableViewController.h
//  Bohr
//
//  Created by David Román Aguirre on 31/5/15.
//  Copyright (c) 2015 David Roman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BOTableViewSection.h"

@interface BOTableViewController : UITableViewController

/// The array of BOTableViewSections of the controller.
@property (nonatomic, readonly) NSArray *sections;

/// The setup method for the controller.
- (void)setup NS_REQUIRES_SUPER;

/// Adds a new section to the controller.
- (void)addSection:(BOTableViewSection *)section;

/// Add header to the controller
- (void)addHeaderWithTitle:(NSString *)headerTitle andSubtitle:(NSString *)headerSubtitle;

/// change colors
+ (instancetype)sharedInstance;
- (void)updateUIAppearnce;

@end
