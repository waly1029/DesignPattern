//
//  FlyNoWay.h
//  StrategyPattern
//
//  Created by liu zhi on 2023/04/08.
//
#ifndef FlyNoWay_h
#define FlyNoWay_h
#include "MiniDuckSimulator.h"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class FlyNoWay : public FlyBehavior {

    public: void fly () const {
        std::cout << "I can't fly" << std::endl;
    }
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
