//
//  QuackBehavior.h
//  StrategyPattern
//
//  Created by liu zhi on 2023/04/08.
//
#ifndef QuackBehavior_h
#define QuackBehavior_h
#include "MiniDuckSimulator.h"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class QuackBehavior {

public:
    virtual void quack() const = 0;
    virtual ~QuackBehavior() = default;
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
