//
//  TemplateClass.cpp
//  CPP_Basic_Template
//
//  Created by kong on 2017/7/3.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "TemplateClass.hpp"
#include <iostream>
using namespace std;

template <typename T2>

template<> void TemplateClass_A<int>::printT()
{
    cout << "a = "<< a << endl;
}

