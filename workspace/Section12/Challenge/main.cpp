//Section 12
//Challenge

#include <iostream>

using namespace std;

int * apply_all (int * array1, const size_t size1, int * array2, const size_t size2) {
    
    size_t new_size {size1 * size2};
    int * new_array = new int [new_size];
    
    for (size_t i {0}; i < size2; i++)
        for (size_t j {0}; j < size1; j++)
        *(new_array + ((i*size1)+j)) = (*(array2 + i)) * (*(array1 + j));
    
    return new_array;
}

void print(int * array, const size_t size) {
    for (size_t i {0}; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main() {
    
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: ";
    print(array1, array1_size);
    
    cout << "Array 2: ";
    print(array2, array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};
    
    cout << "Results: ";
    print(results, results_size);
    
    cout << endl;
    return 0;
}