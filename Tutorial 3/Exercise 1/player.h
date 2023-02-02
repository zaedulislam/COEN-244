//
// Created by Zaedul Islam on 2023-02-02.
//

#ifndef CPP_PLAYER_H
#define CPP_PLAYER_H

#include <iostream>
using namespace std;

class Player{
    string name;
    int health;
    int score;
public:
    Player();
    Player(string n);

    int getHealth();
    int getScore();

    void decreaseHealth(int value);
    void increaseScore(int value);


    // Method to print player information
    void printPlayerInfo();
};

#endif //CPP_PLAYER_H
