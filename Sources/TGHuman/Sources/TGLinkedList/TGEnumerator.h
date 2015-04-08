//
//  TGEnumerator.h
//  TGCHomeWork
//
//  Created by Tora on 4/6/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef __TGCHomeWork__TGEnumerator__
#define __TGCHomeWork__TGEnumerator__

#include <stdio.h>
#include <stdbool.h>

#include "TGObject.h"

typedef struct TGEnumerator TGEnumerator;
typedef struct TGLinkedList TGLinkedList;
typedef struct TGNode TGNode;

struct TGEnumerator {
    TGObject _object;
    
    TGLinkedList *_list;
    TGNode *_node;
    
    uint64_t _mutationsCount;
    bool _isValid;
};

extern
void *TGEnumeratorGetNextObject(TGEnumerator *enumerator);

extern
bool TGEnumeratorIsValid(TGEnumerator *enumerator);

extern
TGEnumerator *TGEnumeratorCreateWithLinkedList(TGLinkedList *list);

extern
void __TGEnumeratorDealloc(TGEnumerator *enumerator);

#endif /* defined(__TGCHomeWork__TGEnumerator__) */
