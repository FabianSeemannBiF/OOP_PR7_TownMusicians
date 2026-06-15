cmake_minimum_required(VERSION 4.2)
project(OOP_PR7_TownMusicians)

set(CMAKE_CXX_STANDARD 14)

include_directories(includes)

add_executable(OOP_PR7_TownMusicians
        includes/Concert.h
        src/Concert.cpp
        main.cpp
        includes/IAnimalSong.h
        includes/CatSong.h
        includes/DogSong.h
        includes/RoosterSong.h)
