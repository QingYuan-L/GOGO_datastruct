//
// Created by admin on 2020/8/10.
//
#ifndef DATA_STRUCT_LINKNODE_H
#define DATA_STRUCT_LINKNODE_H
#define ElemType int
//定义单链表结构体
typedef struct LNode
{
    ElemType data;
    struct LNode * next;
}LinkNode;
//头插法建立单链表
void LinkNode_CreateF(LinkNode * &L,ElemType a[],int n);
//尾插法建立单链表
void LinkNode_CreateR(LinkNode * &L,ElemType a[],int n);
//初始化单链表
void LinkNode_Init(LinkNode * &L);
//销毁单链表
void LinkNode_Destroy(LinkNode * &L);
//判断单链表是否为空表
bool LinkNode_isEmpty(LinkNode *L);
//求单链表的长度
int LinkNode_Length(LinkNode *L);
//输出单链表
void LinkNode_Disp(LinkNode *L);
//求单链表中某个数据的元素值
bool LinkNode_isGetElem(LinkNode *L,int i,ElemType &e);
//按照元素值查找,返回第一个序列号
int LinkNode_LocateElem(LinkNode *L,ElemType e);
//插入数据元素,插入成功返回true
bool LinkNode_isInsert(LinkNode *L,int i,ElemType e);
//删除数据元素
bool LinkNode_isDel(LinkNode *L,int i);
#endif //DATA_STRUCT_LINKNODE_H
