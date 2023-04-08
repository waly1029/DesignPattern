//
//  Quack.h
//  StrategyPattern
//
//  Created by liu zhi on 2023/04/08.
//
#ifndef Quack_h
#define Quack_h
#include "MiniDuckSimulator.h"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class Quack : public QuackBehavior {

    public: void quack () const {
        std::cout << "Quack" << std::endl;
    }
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
