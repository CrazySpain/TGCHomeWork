//
//  TGRoom.h
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TGPerson.h"

@interface TGRoom : NSObject

- (TGPerson *)availablePersonWithClass:(Class)personClass;

- (void)addWorker:(TGPerson *)worker;
- (void)removeWorker:(TGPerson *)worker;

@end
