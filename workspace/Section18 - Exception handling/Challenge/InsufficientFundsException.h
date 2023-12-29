#ifndef INSUFFICIENTFUNDSEXCEPTION_H
#define INSUFFICIENTFUNDSEXCEPTION_H

#include <exception>

class InsufficientFundsException : public std::exception
{
public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;
    virtual const char* what () const noexcept {
        return "Insufficient funds exception";
    }

};

#endif // INSUFFICIENTFUNDSEXCEPTION_H
