#include <iostream>
#include "classes/game.h"

using namespace std;

// comment
int main()
{
    Game game;

    int user_desition = game.showMainMenu();

    if (user_desition == GAME_START) {
        game.run();
    }

    return 0;
}

