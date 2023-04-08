//
//  Squeak.h
//  StrategyPattern
//
//  Created by liu zhi on 2023/04/08.
//
#ifndef Squeak_h
#define Squeak_h
#include "MiniDuckSimulator.h"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class Squeak : public QuackBehavior {

    public:    void quack () const {
        std::cout << "Squeak" << std::endl;
    }
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
