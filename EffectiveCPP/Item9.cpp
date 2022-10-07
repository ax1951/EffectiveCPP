//
//  Item9.cpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/7.
//

#include "Item9.hpp"
#include <iostream>

using namespace std;

class Transaction {
public:
    Transaction();
    virtual void logTransaction() const = 0;
};

Transaction::Transaction() {
    //logTransaction();
    // signal SIGABRT: Pure virtual function called!
    // Call to pure virtual member function 'logTransaction' has undefined behavior; overrides of 'logTransaction' in subclasses are not available in the constructor of 'Transaction'
}

void Transaction::logTransaction() const {
    cout << "in Transaction class, save it to log..." << endl;
}

class BuyTransaction: public Transaction {
public:
    virtual void logTransaction() const;
};

void BuyTransaction::logTransaction() const {
    cout << "in BuyTransaction class, save it to log..." << endl;
}

class SellTransaction: public Transaction {
public:
    virtual void logTransaction() const;
};

void SellTransaction::logTransaction() const {
    cout << "in SellTransaction class, save it to log..." << endl;
}

void testItem9() {
    BuyTransaction b;
}
