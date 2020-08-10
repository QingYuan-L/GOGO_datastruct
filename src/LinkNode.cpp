//
// Created by admin on 2020/8/10.
//
#include "LinkNode.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

//头插法建立单链表
void LinkNode_CreateF(LinkNode * &L,ElemType a[],int n){
    L = (LinkNode *)malloc(sizeof(LinkNode));
    L->next=NULL;
    LinkNode * s;
    for(int i;i<n;i++){
        s=(LinkNode *)malloc(sizeof(LinkNode));
        s->data=a[i];
        s->next=L->next;
        L->next=s;
    }
}
//尾插法建立单链表
void LinkNode_CreateR(LinkNode * &L,ElemType a[],int n){
    L = (LinkNode *)malloc(sizeof(LinkNode));
    L->next=NULL;
    LinkNode * s;
    LinkNode * t;
    t=L;
    for(int i;i<n;i++){
        s=(LinkNode *)malloc(sizeof(LinkNode));
        s->data=a[i];
        t->next=s;
        t=s;
    }
    t->next=NULL;
}
void LinkNode_Init(LinkNode * &L){
    L = (LinkNode *)malloc(sizeof(LinkNode));
    L->next=NULL;
}
//销毁单链表
void LinkNode_Destroy(LinkNode * &L){
    LinkNode * pre=L, *p = L->next;
    while(p!=NULL){
        free(pre);
        pre = p;
        p = pre->next;
    }
    free(pre);
}
//判断单链表是否为空表
bool LinkNode_isEmpty(LinkNode *L){
    if(L->next==NULL)return true;
    else return false;
}
//求单链表的长度
int LinkNode_Length(LinkNode *L){
    int length = 0;
    LinkNode *p=L;
    while(p->next!=NULL){
        p = p->next;
        length++;
    }
    return length;
}

//输出单链表
void LinkNode_Disp(LinkNode *L){
    LinkNode *p=L;
    while(p->next!=NULL){
        p = p->next;
        cout<<p->data<<' ';
    }
    cout<<'\b'<<endl;
}
//求单链表中某个数据的元素值
bool LinkNode_isGetElem(LinkNode *L,int i,ElemType &e){
    LinkNode *p=L;
    if(i<=0)return false;
    while(i--){
        if(p->next==NULL)return false;
        else p=p->next;
    }
    e = p->data;
    return true;
}
//按照元素值查找,返回第一个序列号
int LinkNode_LocateElem(LinkNode *L,ElemType e){
    LinkNode *p=L;
    int i = 0;
    while(p->next!=NULL){
        p=p->next;
        i++;
        if(p->data==e)return i;
    }
    return false;
}
//插入数据元素,插入成功返回true
bool LinkNode_isInsert(LinkNode *L,int i,ElemType e){
    LinkNode *p=L,*s;
    if(i<=0)return false;
    int j=0;
    while(j<i-1&&p!=NULL){
        p=p->next;
        j++;
    }
    if(p==NULL)return false;
    else {
        s = (LinkNode *) malloc(sizeof(LinkNode));
        s->data = e;
        s->next = p->next;
        p->next = s;
        return true;
    }
}
//删除数据元素
bool LinkNode_isDel(LinkNode *L,int i){
    LinkNode *p=L,*s;
    if(i<=0)return false;
    int j=0;
    while(j<i-1&&p!=NULL){
        p=p->next;
        j++;
    }
    if(p==NULL)return false;
    else {
        s = p->next;
        if(s==NULL)return false;
        p->next = s->next;
        free(s);
        return true;
    }
}

