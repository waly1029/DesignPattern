//
//  Duck.h
//  StrategyPattern
//
//  Created by liu zhi on 2023/04/08.
//

#ifndef Duck_h
#define Duck_h

#include "MiniDuckSimulator.h"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class Duck {

//    private: std::auto_ptr< FlyBehavior > _flyBehavior;
//    private: std::auto_ptr< QuackBehavior > _quackBehavior;
//
//    private: Duck( const Duck& ); // Disable copy constructor
//    private: void operator=( const Duck& ); // Disable assignment operator
//
//    protected: Duck( FlyBehavior* flyBehavior, QuackBehavior* quackBehavior ) :
//        _flyBehavior( flyBehavior ), _quackBehavior( quackBehavior ) { assert( flyBehavior ); assert( quackBehavior );
//    }
//    public: virtual ~Duck() = 0 {
//    }
//    public:    void setFlyBehavior( FlyBehavior* fb ) { assert( fb );
//        _flyBehavior = std::auto_ptr< FlyBehavior >( fb );
//    }
//    public: void setQuackBehavior( QuackBehavior* qb ) { assert( qb );
//        _quackBehavior = std::auto_ptr< QuackBehavior >( qb );
//    }
//    public: void performFly() const {
//        _flyBehavior->fly();
//    }
//    public: void performQuack() const {
//        _quackBehavior->quack();
//    }
//    public: void swim() const {
//        std::cout << "All ducks float, even decoys!" << std::endl;
//    }
//    public: virtual void display() const = 0;
public:
    
//    virtual void display() = 0;
    
    void performFly() const {
        _flyBehavior->fly();
    }
    void performQuack() const {
        _quackBehavior->quack();
    }
    void swim() const {
        std::cout << "All ducks float, even decoys!" << std::endl;
    }
    virtual ~Duck() {
        delete _flyBehavior;
        delete _quackBehavior;
    }
private:
    FlyBehavior* _flyBehavior;
    QuackBehavior* _quackBehavior;
protected:
    Duck( FlyBehavior* flyBehavior, QuackBehavior* quackBehavior ) :
    _flyBehavior( flyBehavior ), _quackBehavior( quackBehavior ) { assert( flyBehavior ); assert( quackBehavior );
}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
