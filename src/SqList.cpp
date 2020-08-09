//
// Created by admin on 2020/8/6.
//
#include "SqList.h"
#include <stdlib.h>
void CreateSqList(SqList * &L,ElemType a[],int n)
{
    int i=0,k=0;
    L=(SqList*)malloc(sizeof(SqList));
    while(i<n){
        L->data[k]=a[i];
        k++,i++;
    }
    L->length=k;
}

