//
//  TGCreature.h
//  TGCHomeWork
//
//  Created by Tora on 4/8/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef TGCHomeWork_TGCreature_h
#define TGCHomeWork_TGCreature_h

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

- (void)sayHi;
- (void)goToWar;
- (TGCreature *)babyWithGender:(TGGender)gender;

- (void)addKid:(TGCreature *)kid;
- (void)killKid:(TGCreature *)kid;

@end

#endif
