//
//  GKLEntryController.m
//  Journal-ObjC
//
//  Created by Garrett Lyons on 3/23/20.
//  Copyright © 2020 Turtle. All rights reserved.
//

#import "GKLEntryController.h"

@implementation GKLEntryController

+ (GKLEntryController *) sharedController {
    static GKLEntryController *shared = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        shared = [GKLEntryController new];
    });
    return shared;
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        _internalEntries = [NSMutableArray array];
    }
    return self;
}

@end
