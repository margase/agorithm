//
//  SelectSort.c
//  agorithm
//
//  Created by MR on 13-8-25.
//  Copyright (c) 2013年 MaryMa. All rights reserved.
//

#define MAXSIZE 10

typedef struct{
    int r[MAXSIZE];
    int length;
}SqList;

void SelectSort(SqList *L){
    for(int i=1;i<L->length;i++){
        int temp = i;
        L->r[0]=L->r[temp];
        for(int j=i+1;j<=L->length;j++){
            if(L->r[j]<L->r[0]){
                temp=j;
                L->r[0]=L->r[temp];
            }
        }
        L->r[temp]=L->r[i];
        L->r[i]=L->r[0];
    }
}

#include <stdio.h>
int main(){
    SqList sqList;
    printf("数据个数：");
    scanf("%d",&sqList.length);
    for(int i=1;i<=sqList.length;i++){
        scanf("%d",&sqList.r[i]);
    }
    SelectSort(&sqList);
    int i;
    for(i=1;i<=sqList.length;i++){
        printf("%d ",sqList.r[i]);
    }
    return 0;
}
