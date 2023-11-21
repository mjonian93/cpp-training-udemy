#include <iostream>

int main()
{
    int favorite_number = 0;
    
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    
    if ((favorite_number > 0) && (favorite_number < 101))
    {
        std::cout << "Amazing! That's my favorite number too!" << std::endl;
        std::cout << "No really!!, " << std::to_string(favorite_number) << " is my favorite number too!" << std::endl;
    }
    else
    {
        std::cout << "Invalid number" << std::endl;
    } 
    
    return 0;
}    
