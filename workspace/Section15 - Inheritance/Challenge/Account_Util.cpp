#include <iostream>
#include "Account_Util.h"

void display(const std::vector<Account> &accounts){
    std::cout << "\n=== Acounts ================================================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Account> &accounts, double amount){
    std::cout << "\n=== Depositing to Acounts ==================================" << std::endl;
    for (auto &acc: accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Account> &accounts, double amount){
    std::cout << "\n=== Withdrawing from Acounts =?=============================" << std::endl;
    for (auto &acc: accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << "from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl;
    }
}

void display(const std::vector<Checking_Account> &accounts){
    std::cout << "\n=== Acounts ================================================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Checking_Account> &accounts, double amount){
    std::cout << "\n=== Depositing to Acounts ==================================" << std::endl;
    for (auto &acc: accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Checking_Account> &accounts, double amount){
    std::cout << "\n=== Withdrawing from Acounts =?=============================" << std::endl;
    for (auto &acc: accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << "from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl;
    }
}



void display(const std::vector<Savings_Account> &accounts){
    std::cout << "\n=== Acounts ================================================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Savings_Account> &accounts, double amount){
    std::cout << "\n=== Depositing to Acounts ==================================" << std::endl;
    for (auto &acc: accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Savings_Account> &accounts, double amount){
    std::cout << "\n=== Withdrawing from Acounts =?=============================" << std::endl;
    for (auto &acc: accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << "from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl;
    }
}

void display(const std::vector<Trust_Account> &accounts){
    std::cout << "\n=== Acounts ================================================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Trust_Account> &accounts, double amount){
    std::cout << "\n=== Depositing to Acounts ==================================" << std::endl;
    for (auto &acc: accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Trust_Account> &accounts, double amount){
    std::cout << "\n=== Withdrawing from Acounts =?=============================" << std::endl;
    for (auto &acc: accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << "from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl;
    }
}