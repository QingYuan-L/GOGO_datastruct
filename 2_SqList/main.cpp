//
// Created by lqy on 2020/8/9.
//
#include <stdio.h>
#include "SqList.h"
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int t;
    t =a;
    a = b;
    b = t;
}     //标准的交换两个数的函数

//例2.3 删除一个顺序表中值等于x的元素，要求时间o(n),空间o(1)
void eg2_2_3 (SqList L,ElemType e)
{
    int k=0;
    for(int i = 0;i<L.length;i++){//只循环一次，时间o(n)
        if(L.data[i]!=e){
            L.data[k]=L.data[i];//不占用其他空间，空间o(1)
            k++;
        }
    }
    L.length=k;
    SqList_Disp(&L);//打印结果
}
//例2.4 以第一个元素为基准，将所有小的移到它前面，大的到后面
void eg2_2_4 (SqList L)
{
    int i =0;
    int j = L.length-1;
    ElemType key = L.data[0];
    while(i<j){
        while(i<j&&L.data[j]>=key)j--;//注意”=“号
        L.data[i]=L.data[j];
        while (i<j&&L.data[i]<=key)i++;
        L.data[j]=L.data[i];
    }
    L.data[i]=key;
    SqList_Disp(&L);
}
//例2.5 将所有奇数移动到偶数前面
void eg2_2_5 (SqList L)
{
    int i = 0;
    int j = L.length-1;
    while(i<j){
        while(i<j&&(L.data[i]%2==1))i++;
        while(i<j&&(L.data[j]%2==0))j--;
        swap(L.data[i],L.data[j]);
    }
    SqList_Disp(&L);
}
//练习7 将元素x插入到一个有序队列的适当位置
void ex2_2_7 (SqList L,ElemType x)
{
    for(int i;i<L.length-1;i++)
    {
        if(x<L.data[i+1]){
            SqList_isInsert(&L,i+1,x);
            break;
        }
    }
    SqList_Disp(&L);
}



int main() {
    SqList *L;
    int a[7] ={4,2,3,4,5,6,6};
    SqList_Create(L,a,7);
    SqList List = *L;

    //eg2_3(List,4);
    //ex2_2_7(List,3);
    //eg2_2_4(List);
    eg2_2_5(List);
    return 0;
}