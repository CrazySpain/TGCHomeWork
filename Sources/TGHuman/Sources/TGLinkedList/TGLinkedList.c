//
//  TGLinkedList.c
//  TGCHomeWork
//
//  Created by Tora on 4/5/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGLinkedList.h"

#pragma mark -
#pragma mark Accessors

uint64_t TGLinkedListGetNodeCount(TGLinkedList *list) {
    if (NULL != list) {
        return list->_nodeCount;
    }
    
    return 0;
}

#pragma mark -
#pragma mark Public Implementation

void __TGLinkedListDealloc(TGLinkedList *list) {
    TGLinkedListClear(list);
    
    __TGObjectDealloc(list);
}

void TGLinkedListAddObject(TGLinkedList *list, void *object) {
    
}

void TGLinkedListRemoveObject(TGLinkedList *list, void *object) {
    
}

void TGLinkedListRemoveFirstObject(TGLinkedList *list) {
    
}

void TGLinkedListClear(TGLinkedList *list) {
    
}

bool TGLinkedListContainsObject(TGLinkedList *list, void *object) {
    return false;
}

void TGLinkedListInsertBeforeObject(TGLinkedList *list, void *insertedObject, void *object) {
    
}

void TGLinkedListInsertAfterObject(TGLinkedList *list, void *insertionPoint, void *object) {
    
}

void *TGLinkedListGetFirstObject(TGLinkedList *list) {
    return NULL;
}
