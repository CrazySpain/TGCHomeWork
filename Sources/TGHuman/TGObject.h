//
//  TGObject.h
//  TGHuman
//
//  Created by Tora on 3/10/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef __TGHuman__TGObject__
#define __TGHuman__TGObject__

#include <stdio.h>

typedef void(*TGDealloc)(void *);
typedef struct TGObject TGObject;

struct TGObject {
    TGDealloc _dealloc;
    uint64_t _referenceCount;
};

extern
void *TGObjectCreate(size_t objectSize, TGDealloc dealloc);

extern
void TGObjectRetain(void *object);

extern
void TGObjectRelease(void *object);

extern
void TGObjectDeallocate(void *object);

#endif /* defined(__TGHuman__TGObject__) */
