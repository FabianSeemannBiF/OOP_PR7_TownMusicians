#include <iostream>
#include "../includes/Concert.h"
#include "../includes/DogSong.h"
#include "../includes/CatSong.h"
#include "../includes/RoosterSong.h"

Concert::Concert(std::string songString) {
    for (char s: songString) {
        switch (s) {
            case 'C': songs.push_back(new CatSong());
                break;
            case 'D': songs.push_back(new DogSong());
                break;
            case 'R': songs.push_back(new RoosterSong());
                break;
        }
    }
}

Concert::~Concert() {
    for (auto song: this->songs) {
        delete song;
    }
    songs.clear();
}

int Concert::play() {
    int totalPoints = 0;
    for (int i = 0; i < this->songs.size(); i++) {
        try {
            totalPoints += this->songs[i]->play(songs, i);
        } catch (std::invalid_argument& e) {
            std::cerr << e.what() << std::endl;
        } catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        } catch (...) {
            std::cerr << "Unknown exception" << std::endl;
        }
    }
    return totalPoints;
}

Concert::Concert(Concert&& other) noexcept : songs(std::move(other.songs)) {}

Concert& Concert::operator=(Concert&& other) noexcept {
    if (this != &other) {
        for (auto song : songs) {
            delete song;
        }
        songs = std::move(other.songs);
    }
    return *this;
}



