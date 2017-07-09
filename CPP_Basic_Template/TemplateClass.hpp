//
//  TemplateClass.hpp
//  CPP_Basic_Template
//
//  Created by kong on 2017/7/3.
//  Copyright © 2017年 konglee. All rights reserved.
//

#ifndef TemplateClass_hpp
#define TemplateClass_hpp

#include <stdio.h>

template <typename A>

class TemplateClass_A
{
public:
    
    TemplateClass_A(A a = 0)
    {
        this -> a = a;
    }
    
    void printT();
    
private:
    A a;
};

//类模板函数继承的时候 一定要指定类型 C++编译器会提前分配好内存
class TemplateClass_Son : public TemplateClass_A<int>
{
    TemplateClass_Son(int a = 0, int b = 0) : TemplateClass_A<int> (a)
    {
        this -> b = b;
    }
public:
    
private:
    int b;
};

template <typename T2>

class C :public TemplateClass_A<T2>
{
    
public:
    C(T2 a = 0, T2 c = 0) : TemplateClass_A <T2>(a)
    {
        this -> c = c;
    }
protected:
    T2 c;
    
};



#endif /* TemplateClass_hpp */
