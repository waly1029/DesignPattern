//
//  FlyWithWings.h
//  StrategyPattern
//
//  Created by liu zhi on 2023/04/08.
//

#ifndef FlyWithWings_h
#define FlyWithWings_h

#include "MiniDuckSimulator.h"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class FlyWithWings: public FlyBehavior {
public:
    virtual void fly () const {
        std::cout << "I'm flying!!" << std::endl;
    }
};

}
}

#endif /* FlyWithWings_h */
