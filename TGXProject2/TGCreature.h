//
//  TGCreature.h
//  TGCHomeWork
//
//  Created by Tora on 4/28/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    TGMale,
    TGFemale
} TGGender;

@interface TGCreature : NSObject
@property (nonatomic, assign) TGGender gender;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, assign) NSInteger age;
@property (nonatomic, assign) float weight;
@property (nonatomic, readonly) NSArray *kids;

+ (instancetype)creature;
+ (instancetype)creatureWithGender:(TGGender)gender
                              name:(NSString *)name
                               age:(NSInteger)age
                            weight:(float)weight;

- (void)sayHi;
- (void)goToWar;
- (TGCreature *)babyWithGender:(TGGender)gender;

- (void)addKid:(TGCreature *)kid;
- (void)killKid:(TGCreature *)kid;

@end
