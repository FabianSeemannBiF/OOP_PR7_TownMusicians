#ifndef CONCERT_H
#define CONCERT_H

#include <vector>
#include "IAnimalSong.h"

class Concert {
public:
    Concert(std::string);
    ~Concert();

    int play();
    Concert(Concert&& other) noexcept;
    Concert& operator=(Concert&& other) noexcept;

protected:

private:
    std::vector<IAnimalSong*> songs;
};

#endif // CONCERT_H
