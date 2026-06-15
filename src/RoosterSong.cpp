//
// Created by Fabian on 6/15/26.
//
#include "../includes/RoosterSong.h"

#include <stdexcept>

char RoosterSong::getTypeChar() {
    return 'R';
}

int RoosterSong::play(std::vector<IAnimalSong*>& songs, int index) {
    if (index < 0 || index >= songs.size()) {
        throw std::invalid_argument("Invalid index");
    }

    int rooster_count = 0;
    for (int i = 0; i < songs.size(); i++) {
        if (songs[i]->getTypeChar() == 'R') {
            rooster_count++;
        }
    }

    if (rooster_count == 1) {
        return 3;
    }

    return 0;
}
