//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by andre on 7/04/2014.
//  Copyright (c) 2014 andre trosky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
//@property (nonatomic, strong) NSArray *failedBankInfos;

@end
