//
//  Macro.h
//  Macro
//
//  Created by Tora on 2/18/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#ifndef Macro_Macro_h
#define Macro_Macro_h
#include <stdio.h>

#define TGGeneratePrintFunction(type, specifier)\
    static void TGMacro_##type(type value) { \
        printf("value = %"#specifier" type = "#type"\n", value); \
    }

#define TGPrintFunction(type, value) \
    TGMacro_##type(value);


    


#endif
