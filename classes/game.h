#ifndef GAME_H
#define GAME_H

enum USER_DESITION {
    GAME_EXIT,
    GAME_START
};

class Game
{
public:
    Game();

    /**
      * Runs the game
      */
    void run();

    /**
      * Connects to host set in parameter
      * @param host
      * @return bool true if connection has been estalibshed, otherwise return false
      */
    bool connect(char *host);

    /**
      * Sends ping to IP addres and returns response time
      * @return int time spent waiting for response from IP
      */
    int ping(char *ip);

    /**
      * Shows main menu and returns user desition as integer
      * @return USER_DESITION user's desition
      */
    int showMainMenu();
};

#endif // GAME_H
