//
// Created by lqy on 2020/8/9.
//
#include <stdio.h>
#include "SqList.h"
int main() {
    SqList *L;
    int a[5] ={1,2,3,4,5};
    L = CreateSqList(L,a,5);
    printf("shuchu%d",L->length);
    return 0;
}