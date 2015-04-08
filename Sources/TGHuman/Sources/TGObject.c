//
//  TGObject.c
//  TGHuman
//
//  Created by Tora on 3/10/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGObject.h"

#include <stdlib.h>

#pragma mark -
#pragma mark Public Implementetion

void *__TGObjectCreate(size_t objectSize, TGDealloc dealloc) {
    TGObject *object = calloc(1, objectSize);
    object->_referenceCount = 1;
    object->_dealloc = dealloc;
    
    return object;
}

void *TGObjectRetain(void *object) {
    if (NULL != object) {
        ((TGObject *)object)->_referenceCount++;
    }
    
    return object;
}

void TGObjectRelease(void *object) {
    if (NULL == object) {
        return;
    }
    
    TGObject *retainedObject = (TGObject *)object;
    retainedObject->_referenceCount--;
    
    if (0 == retainedObject->_referenceCount) {
        retainedObject->_dealloc(object);
    }
}

void __TGObjectDealloc(void *object) {
    free(object);
}
