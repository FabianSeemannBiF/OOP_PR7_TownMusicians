//
// Created by Fabian on 6/15/26.
//

#ifndef OOP_PR7_TOWNMUSICIANS_ROOSTERSONG_H
#define OOP_PR7_TOWNMUSICIANS_ROOSTERSONG_H
#include "IAnimalSong.h"

class RoosterSong : public IAnimalSong {
public:
    //Constructor and Deconstructor
    //RoosterSong();
    ~RoosterSong() override = default;

    //Functions
    char getTypeChar() override;
    int play(std::vector<IAnimalSong*>& songs, int index) override;
};

#endif //OOP_PR7_TOWNMUSICIANS_ROOSTERSONG_H
