//
//  Item8.cpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/2.
//

#include "Item8.hpp"
#include <exception>

using namespace std;

class DBConnection {
public:
    void close() {
        
    }
};

class DBConn {
public:
    void close() {
        db.close();
        closed = true;
    }
    
    ~DBConn() {
        if (!closed) {
            try {
                db.close();
            } catch(exception& e) {
                //do something
            }
        }
    }
private:
    DBConnection db;
    bool closed;
};


void testItem8() {
    DBConn dbc;
    dbc.close();
}
