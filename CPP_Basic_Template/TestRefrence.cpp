//
//  TestRefrence.cpp
//  CPP_Basic_Template
//
//  Created by kong on 2017/7/7.
//  Copyright © 2017年 konglee. All rights reserved.
//
#include <iostream>
using namespace std;

#include "TestRefrence.hpp"

void square(int &a)
{
    a *= a;
}

void testRefrence()
{
    int num = 10;
    square(num);
    
}
