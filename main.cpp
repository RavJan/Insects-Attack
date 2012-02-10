#include <iostream>
#include "classes/game.h"

#include "classes/Obiects/Object.h"

ResourceManager Objects::Object::ResManager;

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

    try {
        int user_desition = game->showMainMenu();

        if (user_desition == GAME_START) {
            game->run();
        }
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
        return 1;
    }

    delete game;

    return 0;
}

