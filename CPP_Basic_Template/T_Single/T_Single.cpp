//
//  T_Single.cpp
//  CPP_Basic_Template
//
//  Created by kong on 2017/7/10.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "T_Single.hpp"
#include <iostream>
using namespace std;

template <typename T>
class A
{
    
public:
    void printA()
    {
        cout << "t = " << t << endl;
    }
    A(T t)
    {
        this -> t = t;
    }
protected:
    T t;
};

void useA(A<int> &a) //必须先指定类型 分配内存
{
    a.printA();
}

class B : public A<int> //告诉编译器 指定类型
{
    
public:
    B(int a, int b): A<int>(a) // 指定类型
    {
        this -> b = b;
    }
    void printB()
    {
        cout << "a = " << t << "b = " << b << endl;
    }
private:
    int b;
};

template <typename T1>
class C : public A<T1> // 指定类型为泛型
{
    
public:
    C(T1 a, T1 c) : A<T1>(a) //指定类型为泛型
    {
        this -> c = c;
    }
    void printC()
    {
        cout << "a = " << this -> t << " c = " << c << endl;
    }
private:
    T1 c;
};

void testSingle_T()
{
    A<int> a1(10), a2(11), a3(20); //指定类型 分配内存
    useA(a1);
    useA(a2);
    useA(a3);
    
    B b1(2, 3);
    b1.printB();
    
    C<int> c1(66, 33); // 指定类型 分配内存
    c1.printC();
    
}
