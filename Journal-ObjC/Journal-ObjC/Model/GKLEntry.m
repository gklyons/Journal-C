//
//  GKLEntry.m
//  Journal-ObjC
//
//  Created by Garrett Lyons on 3/23/20.
//  Copyright © 2020 Turtle. All rights reserved.
//

#import "GKLEntry.h"

@implementation GKLEntry

- (instancetype)initWithTitle:(NSString *)title bodyText:(NSString *)bodyText timeStamp:(NSDate *)timeStamp
{
    self = [super init];
    if (self) {
        _title = title;
        _bodyText = bodyText;
        _timeStamp = timeStamp;
    }
    return self;
}
@end
