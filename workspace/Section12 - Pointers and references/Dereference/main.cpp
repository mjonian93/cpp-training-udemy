//Section 12
//Dereferencing

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool calculate_sum(int &sum, int a, int b);

int main() {
    
    int score {100};
    int *score_ptr {&score};
    
    cout << *score_ptr << endl;     //100
    
    *score_ptr = 200;
    
    cout << *score_ptr << endl;     //200
    cout << score << endl;          //200
    
    cout << "\n-------------------------" << endl;
    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr {&high_temp};
    
    cout << *temp_ptr << endl;      //100.7
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;      //37.4

    int sum;
    int a = 5;
    int b = 3;
    calculate_sum(sum, a, b);
    
    cout << "\n-------------------------" << endl;
    string name {"Frank"};
    string *string_ptr {&name};
    
    cout << *string_ptr << endl;    //Frank
    name = "James";
    cout << *string_ptr << endl;    //James
    
    cout << "\n-------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr{nullptr};
    
    vector_ptr = &stooges;
    
    cout << "First stooge: " << (*vector_ptr).at(0) << endl;    //Larry
    
    cout << "Stooges: ";
    for (auto stooge: *vector_ptr)
        cout << stooge << " ";
    cout << endl;
    
    cout << endl;
    return 0;
}
