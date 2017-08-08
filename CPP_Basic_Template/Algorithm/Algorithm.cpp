//
//  Algorithm.cpp
//  CPP_Basic_Template
//
//  Created by kong on 2017/7/19.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "Algorithm.hpp"
#include <iostream>

#include <cctype>

/*
 斐波那契数列
 Fn =
     {
        0 , n = 0;
        1 , n = 1;
        Fn-1 + Fn-2 , n = 2,3,4..
     }
 计算第n项的值
 */

int getSequenceValue(int i)
{
    if (i == 0)
    {
        return i;
    }
    else if (i == 1 || i == 2)
    {
        return 1;
    }
    
    int result = getSequenceValue(i - 1) + getSequenceValue(i - 2);
    return result;
}

void testFibSequence()
{
    for (int i = 0; i <= 10; i++)
    {
        printf("fib(%d) = %d\n",i,getSequenceValue(i));
    }
}

void testString()
{
    int j = 0;
    char string[] = "wgdhQRDGDsra";
    for (int i = 0; i < strlen(string); i ++)
    {
        if (islower(string[i]) == 0)
        {
            std::cout << "UPPER char is " << string[i] << std::endl;
            j++;
        }
    }
    std::cout << "j = " << j << std::endl;
}

void testAlgorithm()
{
    testFibSequence();
    testString();
    
}
