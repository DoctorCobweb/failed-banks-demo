//
//  FailedBankDetails.h
//  FailedBankCD
//
//  Created by andre on 7/04/2014.
//  Copyright (c) 2014 andre trosky. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankInfo;

@interface FailedBankDetails : NSManagedObject

@property (nonatomic, retain) NSNumber * zip;
@property (nonatomic, retain) NSDate * closeDate;
@property (nonatomic, retain) NSDate * updateDate;
@property (nonatomic, retain) FailedBankInfo *info;

@end
