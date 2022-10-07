//
//  Item12.hpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/7.
//

#ifndef Item12_hpp
#define Item12_hpp

#include <stdio.h>
#include <string>

void logCall(const std::string& funcName);

class Date {
    
};

class Customer {
public:
    Customer(const std::string& name = "", Date transaction = Date());
    Customer(const Customer& rhs);
    Customer& operator=(const Customer& rhs);
    
private:
    std::string name;
    Date lastTransaction;
};

class PriorityCustomer: public Customer {
public:
    PriorityCustomer(const std::string& name = "", Date transaction = Date(), int p = 0);
    PriorityCustomer(const PriorityCustomer& rhs);
    PriorityCustomer& operator=(const PriorityCustomer& rhs);
    
private:
    int priority;
};

void testItem12();

#endif /* Item12_hpp */
