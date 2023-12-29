//Section 17
//Custom deleters
#include <iostream>
#include <memory>

class Test {
private:
    int data;
public:
    Test(): data {0} {std::cout << "\nTest constructor (" << data << ")" << std::endl;}
    Test(int data): data {data} {std::cout << "\nTest constructor (" << data << ")" << std::endl;}
    int get_data () const {return data; }
    ~Test() {std::cout << "\tTest destructor (" << data << ")" << std::endl;}
};

void my_deleter(Test *ptr) {
    std::cout << "\tUsing my custom function deleter" << std::endl;
    delete ptr;
}

int main() {
    
    {
        //Using a function
        std::shared_ptr<Test> ptr1 {new Test {100}, my_deleter};
    }
    
    std::cout << "=====================================" << std::endl;
    {
        //Using a Lamba expression
        std::shared_ptr<Test> ptr1 {new Test {100}, 
            [] (Test *ptr) {
                std::cout << "\tUsing my custom lambda deleter" << std::endl;
                delete ptr;
            }
        };
    }
}