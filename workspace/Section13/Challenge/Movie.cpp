#include "Movie.h"

Movie::Movie(std::string name, std::string rating, int watched)
    :name{name}, rating{rating}, watched{watched} {
}

Movie::~Movie()
{
}

std::string Movie::get_name () {
    return name;
}

std::string Movie::get_rating(){
    return rating;
}

int Movie::get_watched(){
    return watched;
}

void Movie::increment_watch_count () {
    watched++;
}

