#ifndef GAME_H
#define GAME_H

#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include "Config.h"

enum USER_DESITION {
    GAME_EXIT,
    GAME_START
};

/**
  * Manages game
  * @author Bartłomiej Kiełbasa <kontakt@bkielbasa.pl>
  */
class Game
{
public:

    /**
      * Constructor for the game
      */
    Game(std::string configurationFile);

    /**
      * Destructor
      */
    ~Game();

    /**
      * Runs the game
      */
    void run();

    /**
      * Returns value of key configuration
      * @param key key of configuration
      */
    std::string getConfig(std::string key);

    /**
      * Sets new/edit existing entry in configuration
      * @param key
      * @param value
      */
    void setConfig(std::string key, std::string value);

    /**
      * Connects to host set in parameter
      * @param host
      * @return true if connection has been estalibshed, otherwise return false
      */
    bool connect(char *host);

    /**
      * Sends ping to IP address and returns response's time
      * @return int time spent waiting for response from IP
      */
    int ping(char *ip);

    /**
      * Shows main menu and returns user desition as integer
      * @return user's desition (USER_DESITION)
      */
    int showMainMenu();

protected:
    /// Configuration of the game
    Config * Configuration;
};

#endif // GAME_H
