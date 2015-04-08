//
//  TGPropertyAccessors.c
//  TGCHomeWork
//
//  Created by Tora on 4/1/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGObject.h"

#pragma mark -
#pragma mark Accessors

void TGRetainPropertySetter(void *owner, void **oldData, void *newData) {
    if ((NULL != owner) && (*oldData != newData)) {
        TGObjectRetain(newData);
        TGObjectRelease(*oldData);
        
        *oldData = newData;
    }
}

void TGAssignPropertySetter(void *owner, void **oldData, void *newData) {
    if ((NULL != owner) && (*oldData != newData)) {
        *oldData = newData;
    }
}
