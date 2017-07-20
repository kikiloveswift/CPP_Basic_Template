//
//  Marco.cpp
//  CPP_Basic_Template
//
//  Created by kong on 2017/7/20.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "Marco.hpp"
#include <iostream>

#define FUNCTION(name, a) int fun_##name() { return a;}
FUNCTION(tt, 3);
#undef FUNCTION

#define OUT(P) std::cout << "P IS " << P << std::endl;



void testMarco()
{
    int b = fun_tt();
    
    OUT(b);
}
