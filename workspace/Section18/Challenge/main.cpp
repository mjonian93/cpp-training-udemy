//Section 18
//Challenge
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
//        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account> ("Moe", -10.0);
//        std::cout << *moes_account << std::endl;
        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account> ("Moe", 10.0);
        moes_account->withdraw(20);
        std::cout << *moes_account << std::endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    catch (const InsufficientFundsException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    
    std::cout << "Program completed succesfully" << std::endl;
    return 0;
}