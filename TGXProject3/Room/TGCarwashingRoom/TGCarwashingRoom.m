//
//  TGCarwashingRoom.m
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import "TGCarwashingRoom.h"

#import "NSObject+TGExtensions.h"

@interface TGCarwashingRoom ()
@property (nonatomic, retain) NSMutableArray *cars;

@end

@implementation TGCarwashingRoom

#pragma mark -
#pragma mark Initialisations and Deallocations

- (void)dealloc {
    self.cars = nil;
    
    [super dealloc];
}

- (instancetype)init {
    if (self = [super init]) {
        self.cars = [NSMutableArray array];
        [self addWorker:[TGWasher object]];
    }
    
    return self;
}

#pragma mark -
#pragma mark Public Methods

- (TGWasher *)availableWasher {
    return [self availablePersonWithClass:[TGWasher class]];
}

- (TGCar *)availableCar {
    NSMutableArray *cars = self.cars;
    for (TGCar *car in cars) {
        if (!car.clean) {
            return car;
        }
    }
    
    return nil;
}

- (void)addCar:(TGCar *)car {
    NSMutableArray *cars = self.cars;
    if (![cars containsObject:car]) {
        [cars addObject:car];
    }
}

- (void)removeCar:(TGCar *)car {
    [self.cars removeObject:car];
}

@end
