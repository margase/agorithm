//
//  main.c
//  agorithm
//
//  Created by MR on 13-8-25.
//  Copyright (c) 2013年 MaryMa. All rights reserved.
//

#include <stdio.h>
#include "BubbleSort.h"

int main(int argc, const char * argv[])
{
    SqList sqList;
    printf("数据个数：");
    scanf("%d",&sqList.length);
    for(int i=1;i<=sqList.length;i++){
        scanf("%d",&sqList.r[i]);
    }
    BubbleSort1(&sqList);
    int i;
    for(i=1;i<=sqList.length;i++){
        printf("%d ",sqList.r[i]);
    }
    return 0;
}