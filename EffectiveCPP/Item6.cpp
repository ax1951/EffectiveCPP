//
//  Item6.cpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/1.
//

#include "Item6.hpp"

class Uncopyable {
protected:
    Uncopyable() {}
    ~Uncopyable() {}
private:
    Uncopyable(const Uncopyable&);
    Uncopyable& operator=(const Uncopyable&);
};

// C++11 version
class Uncopyable2 {
protected:
    Uncopyable2() {}
    ~Uncopyable2() {}

    Uncopyable2(const Uncopyable2&) = delete;
    Uncopyable2& operator=(const Uncopyable2&) = delete;
};


class HomeForSale: private Uncopyable {
    
};

void testItem6() {
    HomeForSale home1;
    HomeForSale home2;
    //home2 = home1; // cause compile error
}
