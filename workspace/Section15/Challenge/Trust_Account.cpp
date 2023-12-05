#include "Trust_Account.h"


Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate}, num_withdrawals{} {
    
}

bool Trust_Account::deposit(double amount){
    if (amount >= def_bonus_unlocker)
        amount += def_bonus_amount;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdrawal(double amount) {
    if (num_withdrawals < max_withdrawals)
        if ( amount <= (balance*max_withdrawal_percentage)) {
            ++num_withdrawals;
            return Savings_Account::withdraw(amount);
        } else
            std::cout << "Withdrawal amount is not allowed" << std::endl;
    else
        std::cout << "No more withdrawal allowed" << std::endl;
    return false;
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account){
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate 
    << "%, withdrawals: " << account.num_withdrawals << "]";
    return os;
}
