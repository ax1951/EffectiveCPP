//
//  Item3.cpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/1.
//

#include "Item3.hpp"
#include <string>
#include <iostream>

using namespace std;

class Rational {
    
};

const Rational operator*(const Rational& lhs, const Rational& rhs) {
    // why return const Rational?
    //Rational a, b, c;
    //if (a * b = c) {
        
    //}
    return Rational();
}

class TextBlock {
public:
    TextBlock(const string& t): text(t) {}
    const char& operator[](std::size_t position) const {
        return text[position];
    }
    char& operator[](std::size_t position) {
        return const_cast<char&>(static_cast<const TextBlock&>(*this)[position]);
    }
private:
    std::string text;
};

class CTextBlock {
public:
    CTextBlock(const char* s) {
        size_t len = strlen(s);
        pText = new char[len + 1];
        strncpy(pText, s, len);
        pText[len] = 0;
    }
    size_t length() const;
private:
    char *pText;
    mutable size_t textLength;
    mutable bool lengthIsValid;
};

size_t CTextBlock::length() const {
    if (!lengthIsValid) {
        textLength = strlen(pText);
        lengthIsValid = true;
    }
    return textLength;
}

class Test1 {
public:
  int x;
  mutable int y;
  Test1() { x = 4; y = 10; }
};

int testMutable1()
{
    const Test1 t1;
    t1.y = 20;
    cout << t1.y << endl;
    return 0;
}

class Test2 {
public:
  int x;
  mutable int y;
  Test2() { x = 4; y = 10; }
};

int testMutable2()
{
    const Test2 t1;
    //t1.x = 8;
    cout << t1.x << endl;
    return 0;
}


void testItem3() {
    char greeting[] =  "Hello";
    char* p1 = greeting;
    const char* p2 = greeting;
    char* const p3 = greeting;
    const char* const p4 = greeting;
    
    TextBlock cb("Hello");
    cout << cb[0] << endl; // call non-const operator[]
    
    const TextBlock ctb("World");
    cout << ctb[0] << endl;
    
    CTextBlock textBlock("write something");
    cout << textBlock.length() << endl;
    
    testMutable1();
    testMutable2();
}
