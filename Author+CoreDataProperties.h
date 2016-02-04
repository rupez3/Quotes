//
//  Author+CoreDataProperties.h
//  Quotes
//
//  Created by Rupesh Chhetri on 2/2/16.
//  Copyright © 2016 Rupesh. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Author.h"

NS_ASSUME_NONNULL_BEGIN

@interface Author (CoreDataProperties)

@property (nullable, nonatomic, retain) NSData *image;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSSet<NSManagedObject *> *quote;

@end

@interface Author (CoreDataGeneratedAccessors)

- (void)addQuoteObject:(NSManagedObject *)value;
- (void)removeQuoteObject:(NSManagedObject *)value;
- (void)addQuote:(NSSet<NSManagedObject *> *)values;
- (void)removeQuote:(NSSet<NSManagedObject *> *)values;

@end

NS_ASSUME_NONNULL_END
