#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie
{
private:
std::string name;
std::string rating;
int watched;
public:
    std::string get_name();
    std::string get_rating();
    int get_watched();
    void increment_watch_count();
    Movie(std::string name, std::string rating, int watched = 0);
    ~Movie();

};

#endif // MOVIE_H
