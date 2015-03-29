//
//  TGString.h
//  TGCHomeWork
//
//  Created by Tora on 3/22/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef __TGCHomeWork__TGString__
#define __TGCHomeWork__TGString__

#include <stdio.h>

#include "TGObject.h"

typedef struct TGString TGString;

struct TGString {
    TGObject _object;
    
    char *_string;
    size_t _length;
};

extern
void __TGStringDealloc(TGString *string);

extern
char *TGStringGetString(TGString *string);

extern
void TGStringSetString(TGString *string, char *charArray);

extern
size_t TGStringGetLength(TGString *string);

extern
void TGStringSetLength(TGString *string, size_t length);

#endif /* defined(__TGCHomeWork__TGString__) */
