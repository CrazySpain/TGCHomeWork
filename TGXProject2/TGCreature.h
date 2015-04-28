//
//  TGCreature.h
//  TGCHomeWork
//
//  Created by Tora on 4/28/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TGCreature : NSObject
@property (nonatomic, retain) NSString *name;
@property (nonatomic, assign) NSInteger age;
@property (nonatomic, assign) float weight;
@property (nonatomic, readonly) NSArray *kids;

+ (instancetype)creature;

- (void)sayHi;

- (void)addKid:(TGCreature *)kid;
- (void)killKid:(TGCreature *)kid;

- (void)performGenderSpecificOperation;

@end
