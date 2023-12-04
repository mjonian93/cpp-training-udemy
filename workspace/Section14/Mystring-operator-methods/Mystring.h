#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
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
    
    Mystring operator-() const;            //make lowercase
    Mystring operator+(const Mystring &rhs) const;            //concatenate
    bool operator==(const Mystring &rhs) const;            //Equality operator overload
    
    void display() const;
    int get_length() const;              //getters
    const char *get_str() const;

};

#endif // MYSTRING_H
