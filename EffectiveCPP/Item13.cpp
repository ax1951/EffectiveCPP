//
//  Item13.cpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/7.
//

#include "Item13.hpp"
#include <memory>
#include <iostream>

using namespace std;

Investment::Investment() {
    cout << "Investment constructor called" << endl;
}

Investment::~Investment() {
    cout << "Investment destructor called" << endl;
}

Investment* createInvestment() {
    return new Investment();
}

void f() {
    std::unique_ptr<Investment> pInv(createInvestment());
    // do something
}

void testItem13() {
    f();
}

