//
//  Item10.hpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/7.
//

#ifndef Item10_hpp
#define Item10_hpp

#include <stdio.h>

class Widget {
public:
    Widget& operator=(const Widget& rhs);
    
    Widget& operator+=(const Widget& rhs);
    
    Widget& operator=(int rhs);
};

void testItem10();

#endif /* Item10_hpp */
