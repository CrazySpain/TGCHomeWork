//
//  TGDirector.m
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import "TGDirector.h"

@implementation TGDirector

#pragma mark -
#pragma mark Public Methods

- (void)profit {
    self.busy = YES;
    NSLog(@"Getting profit!");
    self.busy = NO;
}

@end
