//
//  LinkList.cpp
//  CPP_Basic_Template
//
//  Created by kong on 2017/8/4.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "LinkList.hpp"
#include "seqlist.hpp"

typedef  struct Teacher
{
    char name[64];
    int age;
} T;

void testSeqList1()
{
//    SeqList *list = NULL;
//    list = SeqList_Create(10);
//    T t1,t2,t3,t4;
//    t1.age = 12;
//    t2.age = 13;
//    t3.age = 14;
//    t4.age = 15;
//    int ret = -1;
//    ret = SeqList_Insert(list, (SeqListNode *)&t1, 0);
//    ret = SeqList_Insert(list, (SeqListNode *)&t2, 0);
//    ret = SeqList_Insert(list, (SeqListNode *)&t3, 0);
//    ret = SeqList_Insert(list, (SeqListNode *)&t4, 0);
//    
//    for (int i = 0; i < SeqList_Length(list); i ++)
//    {
//        Teacher *t = (Teacher *)SeqList_Get(list, i);
//        printf("t age is %d",t->age);
//    }
}
