//
// Created by Zaedul Islam on 2023-02-02.
//

#ifndef CPP_GAME_H
#define CPP_GAME_H

#include "player.h"

class Game {
private:
    Player player;
    int targetScore;
    int totalRound = 10;

public:
    Game();
    Game(Player p);

    // Method to check if a number is prime
    bool isPrime(int n);

    // Method to check if the player wins
    bool checkWin();

    // Method to play the game
    void play();
};


#endif //CPP_GAME_H
