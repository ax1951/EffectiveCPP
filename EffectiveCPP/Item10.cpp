//
//  Item10.cpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/7.
//

#include "Item10.hpp"

Widget& Widget::operator=(const Widget& rhs) {
    // ...
    return *this;
}

Widget& Widget::operator+=(const Widget& rhs) {
    // ...
    return *this;
}

Widget& Widget::operator=(int rhs) {
    // ...
    return *this;
}

void testItem10() {
    Widget w1;
    Widget w2;
    w1 = 5;
    w1 += w2;
}
