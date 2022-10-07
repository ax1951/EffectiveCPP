//
//  Item12.cpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/7.
//

#include "Item12.hpp"
#include <iostream>

using namespace std;

Customer::Customer(const std::string& n, Date transaction): name(n), lastTransaction(transaction) {
    
}

Customer::Customer(const Customer& rhs): name(rhs.name), lastTransaction(rhs.lastTransaction) {
    logCall("Customer copy constructor");
}

Customer& Customer::operator=(const Customer &rhs) {
    logCall("Customer copy assignment operator");
    name = rhs.name;
    lastTransaction = rhs.lastTransaction;
    return *this;
}

void logCall(const string& name) {
    cout << name << endl;
}

PriorityCustomer::PriorityCustomer(const std::string& n, Date transaction, int p): Customer(n, transaction), priority(p) {
    
}


PriorityCustomer::PriorityCustomer(const PriorityCustomer& rhs): Customer(rhs), priority(rhs.priority) {
    logCall("PriorityCustomer copy constructor");
}

PriorityCustomer& PriorityCustomer::operator=(const PriorityCustomer &rhs) {
    logCall("PriorityCustomer copy assignment operator");
    Customer::operator=(rhs);
    priority = rhs.priority;
    return *this;
}


void testItem12() {
    PriorityCustomer pc1("Pete", Date(), 1);
    PriorityCustomer pc2("John", Date(), 2);
    pc1 = pc2;
}




