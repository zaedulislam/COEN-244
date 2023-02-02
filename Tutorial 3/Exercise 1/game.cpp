//
// Created by Zaedul Islam on 2023-02-02.
//

#include "game.h"
#include "player.h"
#include <math.h>

Game::Game(){
    targetScore = 50;
}


Game::Game(Player p) {
    player = p;
}


// Method to check if a number is prime
bool Game::isPrime(int n) {
    if (n <= 1) return false;

    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


// Method to check if the player wins
bool Game::checkWin() {
    if (player.getHealth() <= 0) {
        cout << "You lose! Better luck next time." << endl;
        return true;
    } else if (player.getScore() >= targetScore) {
        cout << "Congratulations! You win!" << endl;
        return true;
    }

    return false;
}


// Method to play the game
void Game::play() {
    int roundCounter = 0;
    while(player.getHealth() > 0){
        roundCounter++;

        // Generate a random number
        int num = rand() % 100 + 1;
        cout << "Is " << num << " a prime number? (y/n)" << endl;

        char answer;
        cin >> answer;

        if(isPrime(num) && answer == 'y' || !isPrime(num) && answer == 'n'){
            cout << "Correct! +25 points" << endl;
            player.increaseScore(25);
        } else{
            cout << "Incorrect! -20 health" << endl;
            player.decreaseHealth(20);
        }


        if(checkWin()){
            break;
        }

        if(roundCounter == totalRound){
            cout << "Game Over! You did not reach the target score." << endl;
            break;
        }
    }
}


