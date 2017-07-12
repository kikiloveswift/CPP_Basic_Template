//
//  TypeTransfer.cpp
//  CPP_Basic_Template
//
//  Created by kong on 2017/7/10.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "TypeTransfer.hpp"
#include <iostream>
using namespace std;

void changeChar(const char *p)
{
    char *p1 = NULL;
    p1 = const_cast<char *>(p); //把P所指的区域由只读属性改为可读，但是必须保证P所指的区域的内存地址是可以修改的 见T2
    p1[0] = 'Z';
}

void testTypeTransfer()
{
    int a = static_cast<int>(6.43);
    cout << "a = " << a << endl;
    
/*    const_cast<<#type#>>(<#expression#>)
    const_cast操作不能在不同的种类间转换。相反，它仅仅把一个它作用的表达式转换成常量。它可以使一个本来不是const类型的数据转换成const类型的，或者把const属性去掉。
 
    reinterpret_cast<<#type#>>(<#expression#>)
    有着和C风格的强制转换同样的能力。它可以转化任何内置的数据类型为其他任何的数据类型，也可以转化任何指针类型为其他的类型。它甚至可以转化内置的数据类型为指针，无须考虑类型安全或者常量的情形。不到万不得已绝对不用。
 */
    
    char buf[] = "aaaaaaaaa";
    changeChar(buf);
    cout << "buf is " << buf << endl;
    
    //T2 这样就会崩溃 因为mybuf指向的区域是固定的不可修改的
    char *mybuf = "sssssssss";
    changeChar(mybuf);
}
