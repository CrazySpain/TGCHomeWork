//
//  TGArray.h
//  TGCHomeWork
//
//  Created by Tora on 3/29/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef __TGCHomeWork__TGArray__
#define __TGCHomeWork__TGArray__

#include "TGObject.h"

#include <stdio.h>

typedef struct TGArray TGArray;

struct TGArray {
    TGObject *_object;
    
    void *_array;
    size_t _length;
};

extern
void __TGArrayDealloc(TGArray *array);

extern
void *TGArrayGetArray(TGArray *array);

extern
void TGArraySetArray(TGArray *array, void *dataArray);

extern
size_t TGArrayGetLength(TGArray *array);

extern
void TGArraySetLength(TGArray *array, size_t length);

#endif /* defined(__TGCHomeWork__TGArray__) */
