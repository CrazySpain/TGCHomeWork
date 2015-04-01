//
//  TGPropertyAccessors.h
//  TGCHomeWork
//
//  Created by Tora on 4/1/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef __TGCHomeWork__TGPropertyAccessors__
#define __TGCHomeWork__TGPropertyAccessors__

#include <stdio.h>

extern
void TGRetainPropertySetter(void *owner, void **oldData, void *newData);

#define TGRetainPropertySetter(owner, oldData, newData) \
    TGRetainPropertySetter(owner, (void **)oldData, newData)

extern
void TGAssignPropertySetter(void *owner, void **oldData, void *newData);

#define TGAssignPropertySetter(owner, oldData, newData) \
    TGAssignPropertySetter(owner, (void **)oldData, newData)

#endif /* defined(__TGCHomeWork__TGPropertyAccessors__) */
