//
//  Item5.cpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/1.
//

#include "Item5.hpp"
#include <string>

using namespace std;

class Empty {
public:
    Empty() {}
    Empty(const Empty& rhs) {}
    ~Empty() {}
    
    Empty& operator=(const Empty& rhs) {
        return *this;
    }
};

template<class T>
class NamedObject {
public:
    NamedObject(string& name, const T& value);
    
private:
    string& nameValue; // reference
    const T objectValue; // const var
};

template<class T>
NamedObject<T>::NamedObject(string& name, const T& value): nameValue(name),  objectValue(value) {
    
}



void testItem5() {
    string newDog("Persephone");
    string oldDog("Satch");
    
    NamedObject<int> p(newDog, 2);
    NamedObject<int> s(oldDog, 36);
    
    //p = s; // cause build error, must write your own copy assignment operator=
}
