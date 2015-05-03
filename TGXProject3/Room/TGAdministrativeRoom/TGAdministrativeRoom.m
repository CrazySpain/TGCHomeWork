//
//  TGAdministrativeRoom.m
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import "TGAdministrativeRoom.h"

#import "NSObject+TGExtensions.h"

@implementation TGAdministrativeRoom

#pragma mark -
#pragma mark Initialisations and Deallocations

- (instancetype)init {
    if (self = [super init]) {
        [self addWorker:[TGBooker object]];
        [self addWorker:[TGDirector object]];
    }
    
    return self;
}

#pragma mark -
#pragma mark Public Methods

- (id)availableBooker {
    return [self availablePersonWithClass:[TGBooker class]];
}

- (id)availableDirector {
    return [self availablePersonWithClass:[TGDirector class]];
}

@end
