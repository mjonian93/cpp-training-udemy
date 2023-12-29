#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance) 
    : Account{name, balance}, withdrawal_fee{def_fee}{
    
}
bool Checking_Account::withdraw (double amount) {
    amount += withdrawal_fee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "[Checking Account: " << account.name << ": " << account.balance << ", " << account.withdrawal_fee <<  "$]";
    return os;
}

