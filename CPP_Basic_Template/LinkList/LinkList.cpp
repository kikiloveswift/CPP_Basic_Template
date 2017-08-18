//
//  LinkList.cpp
//  CPP_Basic_Template
//
//  Created by kong on 2017/8/4.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "LinkList.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>

class Student
{
    
public:
    float score;
    std::string name;
    Student *node;
    Student(std::string name, int score)
    {
        this -> name = name;
        this -> score = score;
    }
    ~Student()
    {
        std::cout << "dead" << std::endl;
    }
};

void testrandom()
{
    time_t times;
    unsigned int t = (int)time(&times);
    srand(t);
    int a[10];
    for (int i = 0; i < 10; i ++)
    {
        a[i] = rand() % 100;
        printf("a[%d] = %d\n",i,a[i]);
    }
    std::cout << std::hex << a << std::endl;
    
    
    
}


void testSeqList1()
{
    Student s1("s1",10);
    Student s2("s2",20);
    Student s3("s3",30);
    Student s4("s4",40);
    Student s5("s5",50);
    s1.node = &s2;
    s2.node = &s3;
    s3.node = &s4;
    s4.node = &s5;
    s5.node = NULL;
    
    Student header = s1;
    do
    {
        std::cout << "student name is " << header.name << " score is " << header.score << std::endl;
        header = *(header.node);
    }
    while (header.node != NULL);
    testrandom();
    
}


