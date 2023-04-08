#include <iostream>
#include "MiniDuckSimulator.h"

using namespace std;
using namespace HeadFirstDesignPatterns::Strategy;

int main() {
    
    Duck* mallard = new MallardDuck();
    mallard->performQuack();
    mallard->performFly();
    
    return 0;
}
