//
//  Quote+CoreDataProperties.h
//  Quotes
//
//  Created by Rupesh Chhetri on 2/2/16.
//  Copyright © 2016 Rupesh. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Quote.h"

NS_ASSUME_NONNULL_BEGIN

@interface Quote (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *content;
@property (nullable, nonatomic, retain) NSDate *createdAt;
@property (nullable, nonatomic, retain) Author *author;

@end

NS_ASSUME_NONNULL_END
