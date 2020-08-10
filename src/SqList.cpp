//
// Created by admin on 2020/8/6.
//
#include "SqList.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
//建立线性表表
void SqList_Create(SqList * &L,ElemType a[],int n)
{
    int i=0,k=0;
    L=(SqList*)malloc(sizeof(SqList));
    while(i<n){
        L->data[k]=a[i];
        k++,i++;
    }
    L->length=k;
}
//初始化线性表
void SqList_Init(SqList * &L)
{
    L=(SqList *)malloc(sizeof(SqList));
    L->length=0;
}
//销毁线性表
void SqList_Destroy(SqList * &L)
{
    free(L);
}
//判断线性表是否为空表
bool SqList_isEmpty(SqList *L)
{
    if(L->length==0)return true;
    else return false;
}
//求线性表的长度
int SqList_Length(SqList *L)
{
    return L->length;
}
//输出线性表
void SqList_Disp(SqList *L)
{
    for(int i=0;i<L->length-1;i++)
    {
        cout<<L->data[i]<<' ';
    }
    cout<<L->data[L->length-1]<<endl;
}
//求线性表中某个数据的元素值
bool SqList_isGetElem(SqList *L,int i,ElemType &e)
{
    if(i<1||i>L->length)return false;
    e=L->data[i-1];
    return true;
}
//按照元素值查找,返回第一个逻辑序列号
int SqList_LocateElem(SqList *L,ElemType e)
{
    int i=0;
    while(i<L->length&&L->data[i]!=e)
        i++;
    if(i>=L->length)return false;
    else return i+1;
}
//插入数据元素,插入成功返回true
bool SqList_isInsert(SqList *L,int i,ElemType e)
{
    if(i<1||i>L->length)return false;
    i--;
    for(int j=L->length;j>i;j--)
    {
        L->data[j]=L->data[j-1];
    }
    L->data[i]=e;
    L->length++;
    return true;
}
//删除数据元素
bool SqList_isDel(SqList *L,int i)
{
    if(i<1||L->length)return false;
    i--;
    for(int j =i;j<L->length-1;j++)
    {
        L->data[j]=L->data[j+1];
    }
    L->length--;
    return true;
}
