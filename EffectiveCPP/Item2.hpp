//
//  Item2.hpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/1.
//

#ifndef Item2_hpp
#define Item2_hpp

#include <stdio.h>

class GamePlayer
{
private:
    static const int NumTurns = 5;
    // enum hack, avoid others getting a pointer or reference to your const variables
    //enum { NumTurns = 5 };
    int scores[NumTurns];
};

#endif /* Item2_hpp */
