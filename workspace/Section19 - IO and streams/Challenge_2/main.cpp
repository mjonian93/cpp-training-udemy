//Challenge 2
#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    
    std::ifstream in_file;

    in_file.open("Challenge_2/responses.txt");
    
    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return -1;
    }
    
    std::string key;
    std::string student;
    std::string response;
    
    std::getline(in_file, key);
    
    std::cout << std::setw(25) << std::left << "Student" 
              << "Score" 
              << std::endl
              << std::setfill('-') << std::setw(30) << std::right << ""
              << std::endl;
    
    std::cout << std::setfill(' ');

    int num_students {};
    int total {};
    
    while(in_file >> student >> response) {
        int score {};
        for (size_t i {0}; i < response.size(); i++)
            if (response.at(i) == key.at(i))
                score++;
        total +=score;
        std::cout << std::setw(25) << std::left << student 
                  << std::setw(3) << std::right << score << std::endl;
        num_students++;
    }
    
    std::cout << std::setfill('-') << std::setw(30) << std::right << ""
              << std::endl;
    
    std::cout << std::setfill(' ');
    std::cout << std::setw(25) << std::left << "Average score" 
              << std::setw(3) << std::right << (static_cast<double>(total) /num_students) << std::endl;
    
    std::cout << std::endl;
    in_file.close();
    
    return 0;
}