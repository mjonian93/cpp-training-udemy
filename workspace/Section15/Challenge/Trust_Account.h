#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"


class Trust_Account : public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
    static constexpr const char* def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double def_bonus_unlocker = 5000.0;
    static constexpr double def_bonus_amount = 50.0;
    static constexpr int max_withdrawals = 3;
    static constexpr double max_withdrawal_percentage = 0.2;
protected:
    int num_withdrawals;

public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    bool withdrawal(double amount);
};

#endif // TRUST_ACCOUNT_H
