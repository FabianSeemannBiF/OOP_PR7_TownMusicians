//
// Created by Fabian on 6/15/26.
//
#include "../includes/CatSong.h"

#include <stdexcept>

char CatSong::getTypeChar() {
    return 'C';
}

int CatSong::play(std::vector<IAnimalSong> songs, int index) {
    if (index < 0 || index > songs.size()) {
        throw std::invalid_argument("Invalid index");
    }

    int dog_count = 0;
    for (int i = 0; i < index; i++) {
        if (songs[i].getTypeChar() == 'D') {
            dog_count++;
        }
    }

    return 5 - dog_count;
}
