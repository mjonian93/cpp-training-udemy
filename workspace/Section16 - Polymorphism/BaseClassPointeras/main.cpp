//Section 16
//Base class pointers
#include <iostream>
#include <vector>

class Account {
    
};

class Checking: public Account {
    
};

class Savings: public Account {
    
};

class Trust: public Account {
    
};


int main() {
    std::cout << "\n === Pointers ==== " << std::endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    
    p1->withdraw(100);
    p2->withdraw(100);
    p3->withdraw(100);
    p4->withdraw(100);
    
    std::cout << "\n === Array ==== " << std::endl;
    Account *array [] = {p1, p2, p3, p4};
    for (auto i=0; i < 4; i++)
        array[i].withdraw(1000);
    
    std::cout << "\n === Vector ==== " << std::endl;
    std::vector<Account *> accounts {p1, p2, p3, p4};
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw(1000);
        
    std::cout << "\n === Vector ==== " << std::endl;
    accounts.push_back(p4);
    accounts.push_back(p4);
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw(1000);
    
    std::cout << "\n === Clean up ==== " << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
}