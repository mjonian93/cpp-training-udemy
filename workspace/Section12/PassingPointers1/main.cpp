//Section 12
//Passing pointers 1

#include <iostream>

using namespace std;

void double_data(int *int_ptr);

int main() {
    int value {10};
    int *int_ptr {nullptr};
    
    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;
    
    cout << "---------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;
    
    cout << endl;
    return 0;
}

void double_data(int *int_ptr) {
    *int_ptr *= 2;
}