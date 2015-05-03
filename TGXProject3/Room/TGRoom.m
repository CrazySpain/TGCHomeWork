//
//  TGRoom.m
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import "TGRoom.h"

@interface TGRoom ()
@property (nonatomic, retain) NSMutableArray *workers;

@end

@implementation TGRoom

#pragma mark -
#pragma mark Initialisations and Deallocations

- (void)dealloc {
    self.workers = nil;
    
    [super dealloc];
}

- (instancetype)init {
    if (self = [super init]) {
        self.workers = [NSMutableArray array];
    }
    
    return self;
}

#pragma mark -
#pragma mark Public Methods

- (TGPerson *)availablePersonWithClass:(Class)personClass {
    NSMutableArray *workers = self.workers;
    for (TGPerson *person in workers) {
        if ([person isKindOfClass:personClass] && !person.busy) {
            return person;
        }
    }
    
    return nil;
}

- (void)addWorker:(TGPerson *)worker {
    NSMutableArray *workers = self.workers;
    if (![workers containsObject:worker]) {
        [workers addObject:worker];
    }
}

- (void)removeWorker:(TGPerson *)worker {
    [self.workers removeObject:worker];
}

@end
