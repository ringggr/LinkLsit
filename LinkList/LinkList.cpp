//
//  LinkList.cpp
//  LinkList
//
//  Created by lanouhn on 17/7/12.
//  Copyright © 2017年 JackyHou. All rights reserved.
//

#include "LinkList.hpp"

//头插法
LinkList CreateList(LinkList &L)
{
    //从表尾到表头逆向建立单链表，每次均在头结点之后插入元素。
    LNode *s;
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    scanf("%d", &x);
    while (x != 9999)
    {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        L->data++;
        scanf("%d", &x);
    }
    return L;
}


LinkList CreateList2(LinkList &L)
{
    //从表头到表尾正向建立单链表，每次均在表尾插入元素
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    LNode *s, *r = L;
    scanf("%d", &x);
    while (x != 9999)
    {
        
        //s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        L->data++;
        scanf("%d", &x);
    }
    s->next = NULL;
    return L;
}

LNode *GetElem(LinkList &L, int i)
{
    //本算法取出单链表L(带头结点）中第i个位置的节点指针
    LNode *p = L->next;
    int j = 1;
    if (i == 0)
    {
        return L;
    }
    if (i < 0)
    {
        return NULL;
    }
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    return p;
}

LNode *LocateElem(LinkList &L, int e)
{
    //本算法查找单链表L(带头结点)中数据域值等于e的节点指针，否则返回NULL
    LNode *p = L->next;
    while (p && p->data != e)
    {
        p = p->next;
    }
    return p;
}

void InsertElem(LinkList &L, int e, int i)
{
    //后插
    LNode *p = GetElem(L, i), *s;
    s->next = p->next;
    s->data = e;
    p->next = s;
}
void InsertElem2(LinkList &L, int e, int i)
{
    //前插
    LNode *p = GetElem(L, i), *s;
    s->next = p->next;
    s->data = p->data;
    p->next = s;
    p->data = e;
}


void DeleteElem(LinkList &L, int i)
{
    LNode *p = GetElem(L, i - 1);
    LNode *s = p->next;
    p->next = s->next;
    free(s);
}
void DeleteElem(LinkList &L, LNode *s)//通过节点来删除
{
    LNode *p = L;
    while (p != s && p != NULL)
    {
        p = p->next;
    }
    if (p != NULL)
    {
        LNode *q = p->next;
        p->data = q->data;
        p->next = q->next;
        free(q);
    }
}