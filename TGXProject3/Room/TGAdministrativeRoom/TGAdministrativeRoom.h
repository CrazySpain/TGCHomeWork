//
//  TGAdministrativeRoom.h
//  TGCHomeWork
//
//  Created by Tora on 5/3/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#import "TGRoom.h"

#import "TGBooker.h"
#import "TGDirector.h"

@interface TGAdministrativeRoom : TGRoom

- (TGBooker *)availableBooker;
- (TGDirector *)availableDirector;

@end
