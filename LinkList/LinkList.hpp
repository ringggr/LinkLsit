//
//  LinkList.hpp
//  LinkList
//
//  Created by lanouhn on 17/7/12.
//  Copyright © 2017年 JackyHou. All rights reserved.
//

#ifndef LinkList_hpp
#define LinkList_hpp

#include <stdio.h>
#include <stdlib.h>



//单链表
typedef struct LNode{
    int data = 0;
    LNode *next;
}LNode, *LinkList;
//头结点的优点：
//1、链表的第一个位置上的操作和在表的其他位置的操作保持统一。无须特殊处理。
//2、无论表是否为空，其头指针是指向头结点的非空指针，空表和非空表的处理得到也统一。

//头插法
LinkList CreateList(LinkList &L);
//尾插法
LinkList CreateList2(LinkList &L);
//输出
void Output(LinkList &L);
//按序号查找节点值
LNode *GetElem(LinkList &L, int i);
//按值查找表节点
LNode *LocateElem(LinkList &L, int e);
//插入节点操作
void InsertNextElem(LinkList &L, int e, int i);//后插
void InsertPrevElem(LinkList &L, int e, int i);//前插 与后插一样，不过再交换前一节点的data达到“前插”的效果
//删除节点操作
void DeleteElem(LinkList &L, int i);
void DeleteElem(LinkList &L, LNode *s);//通过节点来删除
int Length(LinkList &L);//长度

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
//双向链表
typedef struct DNode
{
    int data;
    DNode *prior, *next;
}DNode, *DLinklist;

DLinklist CreateDList(DLinklist &L);
void Output(DLinklist &L);
DNode *GetElem(DLinklist &L, int i);
DNode *LocateElem(DLinklist &L, int e);
void InsertNextElem(DLinklist &L, int e, int i);
void DeleteElem(DLinklist &L, int i);




#endif /* LinkList_hpp */
