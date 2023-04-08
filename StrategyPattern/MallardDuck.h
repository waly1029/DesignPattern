//
//  MallardDuck.h
//  StrategyPattern
//
//  Created by liu zhi on 2023/04/08.
//

#ifndef MallardDuck_h
#define MallardDuck_h

#include "MiniDuckSimulator.h"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class MallardDuck: public Duck {
public:
    MallardDuck(): Duck(new FlyWithWings(), new Quack()) {
        
    }
    void display() const {
        std::cout << "I'm a real Mallard duck" << std::endl;
    }
    
};

}
}


#endif /* MallardDuck_h */
