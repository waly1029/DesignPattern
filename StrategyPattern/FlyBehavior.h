//
//  FlyBehavior.h
//  StrategyPattern
//
//  Created by liu zhi on 2023/04/08.
//

#ifndef FlyBehavior_h
#define FlyBehavior_h

#include "MiniDuckSimulator.h"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class FlyBehavior {

public:
    virtual void fly () const = 0;
    virtual ~FlyBehavior() = default;
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
