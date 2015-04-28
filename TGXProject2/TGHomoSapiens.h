//
//  TGCreature.h
//  TGCHomeWork
//
//  Created by Tora on 4/28/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TGHomoSapiens : NSObject
@property (nonatomic, retain) NSString *name;
@property (nonatomic, assign) NSInteger age;
@property (nonatomic, assign) float weight;
@property (nonatomic, readonly) NSArray *kids;

- (void)sayHi;

- (void)addKid:(TGHomoSapiens *)kid;
- (void)killKid:(TGHomoSapiens *)kid;

- (void)performGenderSpecificOperation;

@end
