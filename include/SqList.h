//
// Created by admin on 2020/8/6.
//
#ifndef GOGO_DATASTRUCT_SQLIST_H
#define GOGO_DATASTRUCT_SQLIST_H

#define ElemType int
#define MaxSize 50
//定义结构体
typedef struct
{
    ElemType data[MaxSize];
    int length;
}SqList;
//初始化顺序表
SqList* CreateSqList(SqList *L,ElemType a[],int n);

#endif //GOGO_DATASTRUCT_SQLIST_H
