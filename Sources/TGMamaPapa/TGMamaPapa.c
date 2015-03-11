//
//  TGMamaPapa.c
//  TGMamaPapa
//
//  Created by Tora on 2/18/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include <stdio.h>
#include "TGMamaPapa.h"

TGMamaPapaResult TGMamaPapa(int value) {
    TGMamaPapaResult result = TGMamaPapaResultNone;
    printf("value = %d " , value);
    
    if (0 != value) {
        int mamaDivisor = 3;
        if (0 == (value % mamaDivisor)) {
            printf("Mama@");
            result = result + TGMamaPapaResultMama;
        }
        
        int papaDivisor = 5;
        if (0 == (value % papaDivisor)) {
            printf("Papa@");
            result = result + TGMamaPapaResultPapa;
        }
    }
    
    printf("\n");
    
    return result;
}


