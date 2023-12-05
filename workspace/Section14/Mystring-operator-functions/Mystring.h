#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
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
