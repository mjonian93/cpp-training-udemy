// Section 13
// Challenge
#include <iostream>
#include "Movies.h"

int main() {
    Movies::addMovie("Iron man", "GR", 3);
    Movies::addMovie("Into the Wild", "PG", 1);
    Movies::addMovie("Iron man", "PR", 3);
    Movies::addMovie("Guardians of the Galaxy", "RR", 0);
    Movies::addMovie("Titanic", "PG-13", 6);
    
    Movies::incrementWatchCount("Guardians of the Galaxy");
    Movies::incrementWatchCount("Nowhere");
    
    Movies::displayMovies();
    
    return 0;
}