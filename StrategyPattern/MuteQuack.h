//
//  MuteQuack.h
//  StrategyPattern
//
//  Created by liu zhi on 2023/04/08.
//
#ifdef MuteQuack_h
#define MuteQuack_h

#include "MiniDuckSimulator.h"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class MuteQuack : public QuackBehavior {

public:
    void quack () const {
        std::cout << "<< Silence >>" << std::endl;
    }
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
