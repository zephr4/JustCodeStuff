#include "Game.h"
#include "Game.cpp"
#include "Character.cpp"

int main(){

    srand(time(NULL));

    Game game;

    game.initGame();

    while(game.getPlaying()){

        game.mainMenu();
    }

    return 0;
}