//
//  TGBooker.m
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import "TGBooker.h"

@implementation TGBooker

#pragma mark -
#pragma mark Public Methods

- (void)countMoney {
    self.busy = YES;
    NSLog(@"Counted money!");
    self.busy = NO;
}

@end
