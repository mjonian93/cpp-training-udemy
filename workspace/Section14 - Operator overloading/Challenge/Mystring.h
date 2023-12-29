#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &is, Mystring &rhs);
    friend Mystring operator-(Mystring &rhs);
    friend bool operator==(Mystring &lhs, Mystring &rhs);
    friend bool operator!=(Mystring &lhs, Mystring &rhs);
    friend bool operator<(Mystring &lhs, Mystring &rhs);
    friend bool operator>(Mystring &lhs, Mystring &rhs);
    friend Mystring operator+(Mystring &lhs, Mystring &rhs);
    friend Mystring &operator+=(Mystring &lhs, Mystring &rhs);
    friend Mystring operator*(Mystring &lhs, int times);
    friend Mystring &operator*=(Mystring &lhs, int times);

private:
    char *str;      //pointer to a char[] that hols a C-style string
public:
    Mystring();                         //No-args constructor
    Mystring(const char *s);            //overloaded constructor
    Mystring(const Mystring &s);        //Copy constructor
    Mystring (Mystring &&source);       //Move constructor
    ~Mystring();                        //Destructor
    
    Mystring &operator=(const Mystring &rhs);       //Copy assignment
    Mystring &operator=(Mystring &&rhs);            //Move assignment
    
    void display() const;
    int get_length() const;              //getters
    const char *get_str() const;

};

#endif // MYSTRING_H
