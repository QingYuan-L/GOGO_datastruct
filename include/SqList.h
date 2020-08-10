//
// Created by admin on 2020/8/6.
//
#ifndef GOGO_DATASTRUCT_SQLIST_H
#define GOGO_DATASTRUCT_SQLIST_H

#define ElemType int
#define MaxSize 50
//定义线性表结构体
typedef struct SqList
{
    ElemType data[MaxSize];
    int length;
}SqList;
//建立线性表表
void SqList_Create(SqList * &L,ElemType a[],int n);
//初始化线性表
void SqList_Init(SqList * &L);
//销毁线性表
void SqList_Destroy(SqList * &L);
//判断线性表是否为空表
bool SqList_isEmpty(SqList *L);
//求线性表的长度
int SqList_Length(SqList *L);
//输出线性表
void SqList_Disp(SqList *L);
//求线性表中某个数据的元素值
bool SqList_isGetElem(SqList *L,int i,ElemType &e);
//按照元素值查找,返回第一个序列号
int SqList_LocateElem(SqList *L,ElemType e);
//插入数据元素,插入成功返回true
bool SqList_isInsert(SqList *L,int i,ElemType e);
//删除数据元素
bool SqList_isDel(SqList *L,int i);
#endif //GOGO_DATASTRUCT_SQLIST_H
