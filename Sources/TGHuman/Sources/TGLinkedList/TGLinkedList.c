//
//  TGLinkedList.c
//  TGCHomeWork
//
//  Created by Tora on 4/5/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include "TGLinkedList.h"

#pragma mark -
#pragma mark Private Declaration

static
void TGLinkedListSetNodeCount(TGLinkedList *list, uint64_t count);

static
TGNode *TGLinkedListGetRootNode(TGLinkedList *list);

static
void TGLinkedListAddMutation(TGLinkedList *list);

static
void TGLinkedListSetRootNode(TGLinkedList *list, TGNode *node);

#pragma mark -
#pragma mark Accessors

uint64_t TGLinkedListGetNodeCount(TGLinkedList *list) {
    if (NULL != list) {
        return list->_nodeCount;
    }
    
    return 0;
}

void TGLinkedListSetNodeCount(TGLinkedList *list, uint64_t count) {
    if (NULL != list) {
        list->_nodeCount++;
    }
}

TGNode *TGLinkedListGetRootNode(TGLinkedList *list) {
    if (NULL != list) {
        return list->_rootNode;
    }
    
    return NULL;
}

void TGLinkedListSetRootNode(TGLinkedList *list, TGNode *node) {
    if (NULL != list) {
        TGNode *rootNode = TGLinkedListGetRootNode(list);
        if (rootNode != node) {
            if (NULL != node) {
                TGObjectRetain(node);
            }
            
            if (NULL != rootNode) {
                TGObjectRelease(rootNode);
            }
            
            list->_rootNode = node;
        }
    }
}

#pragma mark -
#pragma mark Public Implementation

void __TGLinkedListDealloc(TGLinkedList *list) {
    TGLinkedListClear(list);
    
    __TGObjectDealloc(list);
}

void TGLinkedListAddObject(TGLinkedList *list, void *object) {
    if ((NULL != list) && (NULL != object)) {
        TGNode *rootNode = TGLinkedListGetRootNode(list);
        TGNode *node = TGNodeWithDataAndNextNode(object, rootNode);
        
        TGLinkedListAddMutation(list);

        TGLinkedListSetRootNode(list, node);
        TGLinkedListSetNodeCount(list, (TGLinkedListGetNodeCount(list) + 1));
    }
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

#pragma mark -
#pragma mark Private Implementation

void TGLinkedListAddMutation(TGLinkedList *list) {
    if (NULL != list) {
        list->_mutationCount++;
    }
}
