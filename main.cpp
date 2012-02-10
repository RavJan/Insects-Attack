#include <iostream>
#include "classes/game.h"

using namespace std;

int main()
{
    Game *game;

    try {
        game = new Game("configuration.txt");
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
        return 1;
    }

    int user_desition = game->showMainMenu();

    if (user_desition == GAME_START) {
        game->run();
    }

    delete game;

    return 0;
}

