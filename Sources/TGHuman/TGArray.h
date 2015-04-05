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
    TGObject _object;
    
    void **_array;
    size_t _length;
    size_t _count;
};

extern
size_t TGArrayGetLength(TGArray *array);

extern
void TGArraySetLength(TGArray *array, size_t length);

extern
size_t TGArrayGetCount(TGArray *array);

extern
void __TGArrayDealloc(TGArray *array);

extern
TGArray *TGArrayCreate();

extern
void *TGArrayGetObjectAtIndex(TGArray *array, uint32_t index);

extern
void TGArrayAddObject(TGArray *array, void *object);

extern
uint32_t TGArrayIndexOfObject(TGArray *array, void *object);

extern
void TGArrayRemoveObject(TGArray *array, void *object);

extern
void TGArrayRemoveObjectAtIndex(TGArray *array, uint32_t index);

#endif /* defined(__TGCHomeWork__TGArray__) */
