//
//  Item11.hpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/7.
//

#ifndef Item11_hpp
#define Item11_hpp

#include <stdio.h>

class Bitmap {
    
};

class Widget2 {
public:
    Widget2();
    Widget2& operator=(const Widget2& rhs);
private:
    Bitmap* pb;
};
void testItem11();

#endif /* Item11_hpp */
