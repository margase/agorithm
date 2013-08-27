//
//  BubbleSort1.c
//  agorithm
//
//  Created by MR on 13-8-25.
//  Copyright (c) 2013年 MaryMa. All rights reserved.
//

#include <stdio.h>
#include "BubbleSort.h"

void BubbleSort1(SqList *L){
    int i,j;
    for(i=L->length;i>1;i--){
        for(j=i;j>1;j--){
            if(L->r[j-1]>L->r[j]){
                swap(L,i,j);
            }
        }
    }
}

