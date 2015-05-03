//
//  TGWasher.m
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import "TGWasher.h"

@implementation TGWasher

#pragma mark -
#pragma mark Public Methods

- (void)washCar:(TGCar *)car {
    self.busy = YES;
    
    NSLog(@"Washing car!");
    
    self.money += car.money;
    car.money = 0;
    car.clean = YES;
    self.busy = NO;
}

@end
