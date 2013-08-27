//
//  main.c
//  agorithm
//
//  Created by MR on 13-8-24.
//  Copyright (c) 2013年 MaryMa. All rights reserved.
//  冒泡排序

#include <stdio.h>

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

void BubbleSort0(SqList *L){
    int i,j;
    for(i=1;i<L->length;i++){
        for(j=i+1;j<=L->length;j++){
            if(L->r[i]>L->r[j]){
                swap(L,i,j);
            }
        }
    }
}

void BubbleSort1(SqList *L){
    int i,j;
    for(i=1;i<L->length;i++){
        for(j=L->length;j>=i;j--){
            if(L->r[j]>L->r[j+1]){
                swap(L,j,j+1);
            }
        }
    }
}

void BubbleSort3(SqList *L){
    int i,j;
    int flag=1;
    for(i=1;i<L->length&&flag;i++){
        printf("Time：%d",i);
        flag=0;
        for(j=L->length;j>i;j--){
            if(L->r[j-1]>L->r[j]){
                swap(L,j-1,j);
                flag=1;
            }
        }
    }
}

//int main(int argc, const char * argv[])
//{
//    SqList sqList;
//    printf("数据个数：");
//    scanf("%d",&sqList.length);
//    for(int i=1;i<=sqList.length;i++){
//        scanf("%d",&sqList.r[i]);
//    }
//    BubbleSort3(&sqList);
//    int i;
//    for(i=1;i<=sqList.length;i++){
//        printf("%d ",sqList.r[i]);
//    }
//    return 0;
//}

