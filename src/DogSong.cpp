//
// Created by Fabian on 6/15/26.
//
#include "../includes/DogSong.h"

#include <stdexcept>

char DogSong::getTypeChar() {
    return 'D';
}

int DogSong::play(std::vector<IAnimalSong> songs, int index) {
    if (index < 0 || index > songs.size()) {
        throw std::invalid_argument("Invalid index");
    }

    if (index > 0 && songs[index - 1].getTypeChar() == 'C') {
        return 0;
    }

    if (index < static_cast<int>(songs.size() - 1) && songs[index + 1].getTypeChar() == 'C') {
        return 0;
    }

    return 1;
}
