//
//  TGStructure.h
//  TGStructure
//
//  Created by Tora on 2/23/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef __TGStructure__TGStructure__
#define __TGStructure__TGStructure__

#include <stdio.h>
#include <stdbool.h>

struct TGRandomStructure {
    bool boolValue1;
    float floatVaue;
    bool boolValue2;
    int integerValue;
    bool boolValue3;
    long long longLongValue;
    bool boolValue4;
    short shortValue1;
    bool boolValue5;
    short shortValue2;
    bool boolValue6;
    char *stringValue;
    short shortValue3;
    double doubleValue;

};
typedef struct TGRandomStructure TGRandomStructure;

struct TGSerialStructure {
    long long longLongValue;
    double doubleValue;
    char *stringValue;
    float floatValue;
    int integerValue;
    short shortValue1;
    short shortValue2;
    short shortValue3;
    bool boolValue1;
    bool boolValue2;
    bool boolValue3;
    bool boolValue4;
    bool boolValue5;
    bool boolValue6;
};
typedef struct TGSerialStructure TGSerialStructure;

struct TGBitFieldSerialStruct {
    union {
        struct {
            bool bit0 : 1;
            bool bit1 : 1;
            bool bit2 : 1;
            bool bit3 : 1;
            bool bit4 : 1;
            bool bit5 : 1;
        } bits;
        uint8_t flags;
    } boolUnion;
};
typedef struct TGBitFieldSerialStruct TGBitFieldSerialStruct;

#endif /* defined(__TGStructure__TGStructure__) */
