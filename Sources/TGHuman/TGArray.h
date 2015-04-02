//
//  TGArray.h
//  TGCHomeWork
//
//  Created by Tora on 3/29/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef __TGCHomeWork__TGArray__
#define __TGCHomeWork__TGArray__

#include <stdio.h>

#include "TGObject.h"

typedef struct TGArray TGArray;

struct TGArray {
    TGObject *_object;
    
    void **_array;
    size_t _length;
};

extern
TGArray *TGArrayCreateWithObject(void *object);

extern
void __TGArrayDealloc(TGArray *array);

extern
void *TGArrayGetObjectAtIndex(TGArray *array, uint32_t index);

extern
void TGArraySetObject(TGArray *array, void *object);

extern
size_t TGArrayGetLength(TGArray *array);

extern
void TGArraySetLength(TGArray *array, size_t length);

extern
void TGArrayRemoveObject(TGArray *array, void *object);

extern
void TGArrayRemoveObjectAtIndex(TGArray *array, uint32_t index);

#endif /* defined(__TGCHomeWork__TGArray__) */
