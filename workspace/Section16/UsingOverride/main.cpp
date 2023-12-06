//Section 16
//The problem
#include <iostream>
#include <memory>

class Base {
public:
    virtual void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};

class Derived: public Base {
public:
    virtual void say_hello() const override {      //Notice I forgot the const
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
};

int main()  {
    Base *p1 = new Base();      //Base::say_hello()
    p1->say_hello();
    
    Derived *p2 = new Derived();    //Derived::say_hello()
    p2->say_hello();
    
    Base *p3 = new Derived();       //Base::say_hello() ????? I wanted Derived::say_hello()
    p3->say_hello();
    return 0;
}