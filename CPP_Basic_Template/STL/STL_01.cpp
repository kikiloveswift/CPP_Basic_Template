//
//  STL_01.cpp
//  CPP_Basic_Template
//
//  Created by kong on 2017/7/11.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "STL_01.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Teacher
{
public:
    
    Teacher(int a, string s)
    {
        age = a;
        name = s;
    }
public:
    int age;
    string name;
};

//Vector 装普通数据类型
void testSTL1()
{
    vector<int> v1;
    cout << "v1.size before " << v1.size() << endl;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    cout << "v1.size after " << v1.size() << endl;
    
    for (vector<int>::iterator pt = v1.begin(); pt != v1.end(); pt++)
    {
        cout << "v1 element is " << *pt << endl;
    }
}

//Vector 装类
void testSTL2()
{
    vector<Teacher> v1;
    cout << "t1.size before " << v1.size() << endl;
    Teacher *t1 = new Teacher(21, "huahua"); //开辟栈区 t1内存 指向 堆区TT1
    Teacher *t2 = new Teacher(24, "dd");
    Teacher *t3 = new Teacher(27, "ss");
    v1.push_back(*t1); //把t1指向的内容压进去
    v1.push_back(*t2);
    v1.push_back(*t3);
    for (vector<Teacher>::iterator pt = v1.begin(); pt != v1.end(); pt ++)
    {
        Teacher t = *pt; //此时指针指向的是压进去的 堆区的内容 故写成 t 而非*t
        cout << "t name is " << t.name << "t age is " <<t.age << endl;
    }
    cout << "t1.size after " << v1.size() << endl;
}

void testSTL()
{
    testSTL2();
}

