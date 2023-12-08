//Section 18
//Constructor exception
#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "Checking_account.h"
#include "Trust_account.h"
#include "Savings_account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"

using namespace std;

int main() {
    
    try {
        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account> ("Moe", -10.0);
        std::cout << *moes_account << std::endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << "Couldn't create account - negative balance" << std::endl;
    }
    
    std::cout << "Program completed succesfully" << std::endl;
    return 0;
}