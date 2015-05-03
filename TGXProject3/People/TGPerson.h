//
//  TGPerson.h
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TGPerson : NSObject
@property (nonatomic, assign)   NSUInteger  experience;
@property (nonatomic, assign)   NSUInteger  money;
@property (nonatomic, assign)   float       salary;
@property (nonatomic, assign)   BOOL        busy;

- (void)giveMoneyToPerson:(TGPerson *)person;

@end
