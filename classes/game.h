#ifndef GAME_H
#define GAME_H

#include <SDL/SDL.h>
#include <SDL/SDL_gfxPrimitives.h>
#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include "Config.h"
#include "Obiects/Water.h"

#include <iostream>

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

    /**
      * Sets new width of the screen
      * @param width new width
      */
    void setScreenWidth(unsigned int width);

    /**
      * Returns current width of the screen
      */
    unsigned int getScreenWidth();

    /**
      * Sets new height of the screen
      * @param height new height
      */
    void setScreenHeight(unsigned int height);

    /**
      * Returns current height of the screen
      */
    unsigned int getScreenHeight();

    /**
      * If set true, game will be displayed in fullscreen mode
      * @param fullScreen
      */
    void setFullScreen(bool fullScreen = true);

    /**
      * If return true, game is displayed in fullscreen mode
      */
    bool getFullScreen();

protected:
    /// Configuration of the game
    Config * Configuration;

    /**
      * Width of the screen
      */
    unsigned int ScreenWidth;

    /**
      * Height of the screen
      */
    unsigned int ScreenHeight;

    /**
      * If false game will be displayed in a window mode
      */
    bool FullScreen;

    SDL_Surface* Screen;
};

#endif // GAME_H
