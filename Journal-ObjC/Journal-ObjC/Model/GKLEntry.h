//
//  GKLEntry.h
//  Journal-ObjC
//
//  Created by Garrett Lyons on 3/23/20.
//  Copyright © 2020 Turtle. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GKLEntry : NSObject

@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, copy, readonly) NSString *bodyText;
@property (nonatomic, copy, readonly) NSDate *timeStamp;

-(instancetype) initWithTitle:(NSString *)title
                     bodyText:(NSString *)bodyText
                    timeStamp:(NSDate *)timeStamp;

@end

NS_ASSUME_NONNULL_END
