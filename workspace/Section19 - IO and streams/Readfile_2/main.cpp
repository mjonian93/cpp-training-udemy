//Section 19
//Read File 1
//Test for file open and simple read of 3 data items
#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    
    std::ifstream in_file;
    std::string line;
    int num;
    double total;
    
//    system("dir");


    in_file.open("Readfile_2/test.txt");
    
    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return -1;
    }
    
    //while(!in_file.eof()) {
    while(in_file >> line >> num >> total) {
//        in_file >> line >> num >> total;
        std::cout << std::setw(10) << std::left << line
              << std::setw(10) << num
              << std::setw(10) << total
              << std::endl;
    }
    
    in_file.close();
    
    return 0;
}