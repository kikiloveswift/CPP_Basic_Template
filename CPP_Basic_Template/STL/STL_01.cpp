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

bool isPreciate(int i )
{
    return (i % 2 == 0);
}

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

//Vector 算法
void testSTL3()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(8);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(1);
    //统计v1中1出现的次数
    int num = (int)count(v1.begin(), v1.end(), 1);
    cout << num << endl;
    
    //统计V1中能被2整除的数的次数
    int num2 = (int)count_if(v1.begin(), v1.end(), isPreciate);
    cout << num2 << endl;
    
    vector<Teacher> v2;
    Teacher t1(21, "a");
    Teacher t2(22, "b");
    Teacher t3(23, "c");
    Teacher t4(24, "d");
    Teacher t5(26, "e");
    v2.push_back(t1);
    v2.push_back(t2);
    v2.push_back(t3);
    v2.push_back(t4);
    v2.push_back(t5);
    int res = (int)count_if(v2.begin(), v2.end(), [](Teacher t){return (t.age % 2 == 0);});
    cout << "res is " << res << endl;
}

void testSTL4()
{
    vector<int> v = { 3, 1, 4 };
    auto vi = rbegin(v);
    cout << *vi << '\n';
    
    int a[] = { -5, 10, 15 };
    auto ai = rbegin(a);
    cout << *ai << '\n';
}

void testSTL()
{
    testSTL4();
}

