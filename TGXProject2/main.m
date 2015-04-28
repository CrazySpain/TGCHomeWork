//
//  main.m
//  TGXProject2
//
//  Created by Tora on 4/28/15.
//  Copyright (c) 2015 ___FULLUSERNAME___. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TGHomoSapiens.h"
#import "TGMan.h"
#import "TGWoman.h"

#import "NSObject+TGExtensions.h"

static const NSInteger kTGHomoSapiensesCount    = 20;
static const NSInteger kTGGendersCount          = 2;

typedef NS_ENUM(NSInteger, TGGender) {
    TGHe = 0,
    TGShe
};

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSMutableArray *creatures = [NSMutableArray array];
        
        for (NSInteger count = 0; count < kTGHomoSapiensesCount; count++) {
            NSInteger gender = arc4random_uniform(kTGGendersCount);
            TGHomoSapiens *homoSapiens = nil;
            
            if (gender == TGHe) {
                homoSapiens = [TGMan object];
            } else if (gender == TGShe) {
                homoSapiens = [TGWoman object];
            }
            
            [creatures addObject:homoSapiens];
        }
        
        for (TGHomoSapiens *homoSapiens in creatures) {
            [homoSapiens performGenderSpecificOperation];
        }
    }
    
    return 0;
}
