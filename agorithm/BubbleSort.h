//
//  BubbleSort.h
//  agorithm
//
//  Created by MR on 13-8-25.
//  Copyright (c) 2013年 MaryMa. All rights reserved.
//

#ifndef agorithm_BubbleSort_h
#define agorithm_BubbleSort_h

#define MAXSIZE 10

typedef struct{
    int r[MAXSIZE];
    int length;
}SqList;

void swap(SqList *L,int i,int j){
    int temp = L->r[i];
    L->r[i]=L->r[j];
    L->r[j]=temp;
}

#endif
