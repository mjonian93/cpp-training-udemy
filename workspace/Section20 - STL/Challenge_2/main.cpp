// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    // This function should display 
    // Playing: followed by the song that is playing
   
    std::cout << "Playing " << song << std::endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    // This function should display the current playlist 
    // and then the current song playing.
    std::cout << "Current playlist : " << std::endl;
    for (auto song: playlist) {
        std::cout << "[ " << song << " ]" << std::endl;
    }
    std::cout << std::endl;
    play_current_song(current_song);
}

void insert_new_song(std::list<Song>::iterator &current_song, std::list<Song> &playlist) {
    std::string title, artist;
    int rating;
    std::cout << "Insert the new song's title: ";
    std::getline(std::cin, title);
    std::cout << "Insert the new song's artist: ";
    std::getline(std::cin, artist);
    std::cout << "Insert the new song's rating: ";
    std::cin >> rating;
    playlist.emplace(current_song, title, artist, rating);
}

int main() {
    char selection;

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    std::list<Song>::iterator current_song = playlist.begin();
    play_current_song(*current_song);
    
    do {
        display_menu();
        std::cin >> selection;
        switch(selection) {
            case 'f':
            case 'F':
                current_song = playlist.begin();
                play_current_song(*current_song);
                break;
            case 'n':
            case 'N':
                current_song++;
                if(current_song == playlist.end())
                    current_song = playlist.begin();
                play_current_song(*current_song);
                break;
            case 'p':
            case 'P':
                if(current_song == playlist.begin())
                    current_song = playlist.end();
                current_song--;
                play_current_song(*current_song);
                break;
            case 'a':
            case 'A':
                insert_new_song(current_song, playlist);
                break;
            case 'l':
            case 'L':
                display_playlist(playlist, *current_song);
                break;
            case 'q':
            case 'Q':
                std::cout << "Thanks for listening!" << std::endl;
                break;
            default:
                std::cout << "Invalid option" << std::endl << std::endl;
        }
        
    }while (selection != 'Q' || selection != 'q');
    
    return 0;
}