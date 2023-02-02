//
// Created by Zaedul Islam on 2023-02-02.
//
#include "player.h"

Player::Player(){}

// constructor
Player::Player(string n) {
    name = n;
    health = 100;
    score = 0;
}


int Player::getHealth(){
    return health;
}


int Player::getScore(){
    return score;
}


void Player::decreaseHealth(int value){
    health -= value;
}


void Player::increaseScore(int value) {
    score += value;
}


// Method to print player information
void Player::printPlayerInfo() {
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "Score: " << score << endl;
}