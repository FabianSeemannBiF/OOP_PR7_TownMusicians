//
// Created by Fabian on 6/15/26.
//

#ifndef OOP_PR7_TOWNMUSICIANS_IANIMALSONG_H
#define OOP_PR7_TOWNMUSICIANS_IANIMALSONG_H
#include <vector>

class IAnimalSong {
public:
    virtual ~IAnimalSong() = default;
    virtual char getTypeChar() = 0;
    virtual int play(std::vector<IAnimalSong*>& songs, int index) = 0;
};

#endif //OOP_PR7_TOWNMUSICIANS_IANIMALSONG_H
