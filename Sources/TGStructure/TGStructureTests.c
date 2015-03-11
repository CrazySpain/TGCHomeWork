//
//  TGStructureTests.c
//  TGStructure
//
//  Created by Tora on 2/23/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include <stdlib.h>
#include <assert.h>
#include "TGStructureTests.h"
#include "TGStructure.h"

#define TGOffsetOfPropertyTest(property, desireValue, structureType) \
    do { \
            size_t offset = offsetof(structureType, property); \
            printf("Offset value for "#property": %lu\n", offset); \
            assert(offset == desireValue); \
        } \
    while(0);

void TGOffSetStructureTest() {
    TGOffsetOfPropertyTest(longLongValue, 0, TGSerialStructure);
    TGOffsetOfPropertyTest(doubleValue, 8, TGSerialStructure);
    TGOffsetOfPropertyTest(stringValue, 16, TGSerialStructure);
    TGOffsetOfPropertyTest(floatValue, 24, TGSerialStructure);
    TGOffsetOfPropertyTest(integerValue, 28, TGSerialStructure);
    TGOffsetOfPropertyTest(shortValue1, 32, TGSerialStructure);
    TGOffsetOfPropertyTest(shortValue2, 34, TGSerialStructure);
    TGOffsetOfPropertyTest(shortValue3, 36, TGSerialStructure);
    TGOffsetOfPropertyTest(boolValue1, 38, TGSerialStructure);
    TGOffsetOfPropertyTest(boolValue2, 39, TGSerialStructure);
    TGOffsetOfPropertyTest(boolValue3, 40, TGSerialStructure);
    TGOffsetOfPropertyTest(boolValue4, 41, TGSerialStructure);
    TGOffsetOfPropertyTest(boolValue5, 42, TGSerialStructure);
    TGOffsetOfPropertyTest(boolValue6, 43, TGSerialStructure);
}

#undef TGOffsetOfPropertyTest

void TGSerialStructureSizeTest() {
    TGSerialStructure structure = {};
    TGRandomStructure randomStructure = {};
    
    assert(sizeof(structure) < sizeof(randomStructure));
}
