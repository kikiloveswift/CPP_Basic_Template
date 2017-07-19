//
//  AdvancedPointer.cpp
//  CPP_Basic_Template
//
//  Created by kong on 2017/7/19.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "AdvancedPointer.hpp"
#include <stdio.h>
#include <stdlib.h>
static int count = 0;
typedef void (*funp)(int);

void funx(int a)
{
    printf("第%d次 a = %d\n",(++count),a);
}

void funplink(funp fp, int a)
{
    fp(a);
}

void testAP_01()
{
    funplink(funx, 10);
    funplink(funx, 20);
}


//test2
/*
 C语言标准规定，对于一个符号的定义总是从它的名字开始读取，
 然后按照优先级顺序依次解析。从名字开始。
 int *p1[6]; => p1先与[]结合 再与指针 结合， p1是一个拥有6个int*元素的数组，也就是指针数组
 int (*p3)[6] => p3是个指针，剩下的是 int [6] 是p3指向的数据类型，他是一个拥有6个元素的数组，
 p3是一个指针，指向拥有6个int元素数组。
 int (*p4)(int, int) => p4是个指针，p4是一个指向 int func(int, int) 的函数的指针。
 char *(*c[10])(int **p) => (*c[10]) 是一个指针数组, (int **p)在右侧 说明是一个函数
 int **p 是函数参数 char* 是函数的返回值类型 合起来就是 c是一个拥有10个元素的指针数组，每一个
 指针指向一个原型为 char *func(int **p)的函数
 
 */

void testAdvancedPointer()
{
    testAP_01();
}
