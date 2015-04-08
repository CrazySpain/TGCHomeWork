//
//  TGLinkedList.h
//  TGCHomeWork
//
//  Created by Tora on 4/5/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef __TGCHomeWork__TGLinkedList__
#define __TGCHomeWork__TGLinkedList__

#include <stdio.h>

#include <stdbool.h>

#include "TGObject.h"
#include "TGNode.h"

typedef struct TGLinkedList TGLinkedList;

struct TGLinkedList {
    TGObject _object;
    
    TGNode *_rootNode;
    
    uint64_t _nodeCount;
    uint64_t _mutationCount;
};

extern
uint64_t TGLinkedListGetNodeCount(TGLinkedList *list);

extern
void __TGLinkedListDealloc(TGLinkedList *list);

extern
void TGLinkedListAddObject(TGLinkedList *list, void *object);

extern
void TGLinkedListRemoveObject(TGLinkedList *list, void *object);

extern
void TGLinkedListRemoveFirstObject(TGLinkedList *list);

extern
void TGLinkedListClear(TGLinkedList *list);

extern
bool TGLinkedListContainsObject(TGLinkedList *list, void *object);

extern
void TGLinkedListInsertBeforeObject(TGLinkedList *list, void *insertedObject, void *object);

extern
void TGLinkedListInsertAfterObject(TGLinkedList *list, void *insertionPoint, void *object);

extern
uint64_t TGLinkedListGetNodeCount(TGLinkedList *list);

extern
void *TGLinkedListGetFirstObject(TGLinkedList *list);


#endif /* defined(__TGCHomeWork__TGLinkedList__) */
