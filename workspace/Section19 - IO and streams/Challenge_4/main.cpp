//Section 19
//Copy File 2
//File copy using get/put
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main() {
    std::ifstream in_file {"Challenge_4/romeoandjuliet.txt"};
    std::ofstream out_file {"Challenge_4/romeoandjuliet_out.txt"};
    
    if (!in_file) {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }
    
    if (!out_file) {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }
    
    std::string line;
    int line_counter {};
    while(std::getline(in_file, line)) {
        line_counter++;
        out_file << std::setw(4) << std::right << line_counter << "  " << line << std::endl;
    }
    
    std::cout << "File copied" << std::endl;
    in_file.close();
    out_file.close();
    
    return 0;
}