//Challenge 3
#include <iostream>
#include <fstream>

bool find_substring(const std::string &word_to_find, const std::string &target) {
    std::size_t found = target.find(word_to_find);
    if (found == std::string::npos)
        return false;
    else
        return true;
}

int main() {
    
    std::ifstream in_file;

    in_file.open("Challenge_3/romeoandjuliet.txt");
    
    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return -1;
    }
    
    std::string searchword;
    std::cout << "Enter the substring to search for: ";
    std::cin >> searchword;
    
    int total_words {};
    int matches {};
    std::string word;
    
    while(in_file >> word) {
        total_words++;
        if (find_substring(searchword, word))
            matches++;
    }
    
    std::cout << total_words << " words were searched..." << std::endl;
    std::cout << "The substring " << searchword << " was found " << matches << " times" << std::endl;
    
    in_file.close();
    
    return 0;
}