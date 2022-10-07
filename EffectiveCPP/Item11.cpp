//
//  Item11.cpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/7.
//

#include "Item11.hpp"

Widget2::Widget2() {
    pb = new Bitmap();
}
Widget2& Widget2::operator=(const Widget2& rhs) {
    Bitmap* pOrig = pb;
    pb = new Bitmap(*rhs.pb);
    delete pOrig;
    return *this;
}

void testItem11() {
    Widget2 w1;
    Widget2* pw2 = &w1;
    Widget2& w2 = *pw2;
    w1 = w2;
}
