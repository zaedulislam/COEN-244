#include "game.h"
#include "player.h"
#include <iostream>
using namespace std;


int main ()
{
    Player playerOb("Player1");
    Game gameOb(playerOb);

    gameOb.play();

    return 0;
}
