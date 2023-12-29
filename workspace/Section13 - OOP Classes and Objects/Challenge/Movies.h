#ifndef MOVIES_H
#define MOVIES_H
#include <vector>
#include "movie.h"

class Movies
{
private:
    static std::vector<Movie> movies;
public:
    static bool addMovie (std::string name, std::string rating, int watched);
    static bool incrementWatchCount(std::string name);
    static void displayMovies();
};

#endif // MOVIES_H
