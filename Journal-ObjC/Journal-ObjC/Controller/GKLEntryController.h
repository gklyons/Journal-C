//
//  GKLEntryController.h
//  Journal-ObjC
//
//  Created by Garrett Lyons on 3/23/20.
//  Copyright © 2020 Turtle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GKLEntry.h"

NS_ASSUME_NONNULL_BEGIN

@interface GKLEntryController : NSObject

+ (GKLEntryController *)sharedController;

@property (nonatomic, strong) NSMutableArray *internalEntries;

@property (nonatomic,strong, readonly) NSArray *entries;
- (void)addEntriesObject:(GKLEntry *)entry;
- (void)removeEntriesObject:(GKLEntry *)entry;

@end

NS_ASSUME_NONNULL_END
