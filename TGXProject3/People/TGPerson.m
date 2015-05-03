//
//  TGPerson.m
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import "TGPerson.h"

@implementation TGPerson

#pragma mark -
#pragma mark Public Methods

- (void)giveMoneyToPerson:(TGPerson *)person {
    person.money += self.money;
    self.money = 0;
}

@end
