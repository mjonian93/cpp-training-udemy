#include <iostream>
#include <vector>
#include "Movies.h"

std::vector<Movie> Movies::movies;

bool Movies::addMovie (std::string name, std::string rating, int watched){
    for (Movie m : movies)
        if (m.get_name() == name) {
            std::cout << "Movie already exists." << std::endl;
            return false;
        }
    movies.push_back(Movie{name, rating, watched});
    return true;
}
bool Movies::incrementWatchCount(std::string name){
    for (Movie &m : movies)
        if (m.get_name() == name) {
            m.increment_watch_count();
            return true;
        }
    std::cout << "There is not any movie with such a name in the movie collection." << std::endl;
    return false;
}
void Movies::displayMovies(){
    std::cout << "Displaying movies: " << std::endl;
    for (Movie m: movies) {
        std::cout << "Name: " << m.get_name() << " - Rating: " << m.get_rating() << " - Watched: " << m.get_watched() << std::endl; 
    }
}
