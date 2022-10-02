//
//  Item7.cpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/2.
//

#include "Item7.hpp"

using namespace std;

class TimeKeeper {
public:
    TimeKeeper();
    virtual ~TimeKeeper();
};

TimeKeeper::TimeKeeper() {
    
}

TimeKeeper::~TimeKeeper() {
    
}

class AtmoicClock: public TimeKeeper {
    
};

class WaterClock: public TimeKeeper {
    
};

class WristWatch: public TimeKeeper {
    
};

TimeKeeper* getTimeKeeper(int type) {
    if (type == 0) {
        return new AtmoicClock();
    } else if (type == 1) {
        return new WaterClock();
    } else if (type == 2) {
        return new WristWatch();
    }
    return nullptr;
}

void testItem7() {
    TimeKeeper* ptk = getTimeKeeper(0);
    delete ptk;
}
