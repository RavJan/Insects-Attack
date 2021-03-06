#include "game.h"

Game::Game(std::string configurationFile)
{
    if (!Media::File::fileExists(configurationFile)) {
        Media::File::createEmptyFile(configurationFile);
    }

    this->Configuration = new Config(configurationFile);
    this->Configuration->readConfig();

    Logger::log("Configuration has been read");

    this->setupConfing();
}

Game::~Game()
{
    this->ScreenWidth = 800;
    this->ScreenHeight = 600;

    this->Configuration->save();
    delete this->Configuration;
}

std::string Game::getConfig(std::string key)
{
    return this->Configuration->get(key);
}

void Game::setConfig(std::string key, std::string value)
{
    this->Configuration->set(key, value);
}

int Game::showMainMenu()
{
    return GAME_START;
}

void Game::run()
{
    if(SDL_Init(SDL_INIT_VIDEO)<0) {
        throw "Cannot init SDL";
    }

    atexit(SDL_Quit);

    this->Screen = SDL_SetVideoMode(this->getScreenWidth(), this->getScreenHeight(), 32, SDL_ANYFORMAT);
    if(!(this->Screen)) {
        throw "Cannot init video";
    }

    unsigned int BgColor = SDL_MapRGB(this->Screen->format, 155, 155, 155);
    SDL_Event event;

    SDL_Rect rect;
    rect.x = 0;
    rect.y = 0;
    rect.w = this->Screen->w;
    rect.h = this->Screen->h;

    SDL_FillRect(this->Screen, &rect, BgColor);

    Objects::Water w(100, 100);

    w.print(this->Screen);

    SDL_Flip(this->Screen);

    for(;;) {
        if(SDL_PollEvent(&event)) {
            if(event.type==SDL_QUIT || event.type==SDL_KEYDOWN) return;
        }

        w.print(this->Screen);

        /* oddaj czas procesora dla innych aplikacji */
        SDL_Delay(100);
    }
}

void Game::setupConfing()
{
    //Set screen
    if(this->Configuration->ifKeyExists("ScreenWidth") ||  this->Configuration->ifKeyExists("ScreenHeight"))
    {
        this->setScreenWidth(atoi(this->Configuration->get("ScreenWidth").c_str()));
        this->setScreenHeight(atoi(this->Configuration->get("ScreenHeight").c_str()));
    }
    else
    {
        this->setScreenHeight(600);
        this->setScreenWidth(800);
    }
}

void Game::setFullScreen(bool fullScreen)
{
    this->FullScreen = fullScreen;
}

bool Game::getFullScreen()
{
    return this->FullScreen;
}

void Game::setScreenHeight(unsigned int height)
{
    if (height > 0) {
        this->ScreenHeight = height;
    }
}

unsigned int Game::getScreenHeight()
{
    return this->ScreenHeight;
}

void Game::setScreenWidth(unsigned int width)
{
    if (width > 0) {
        this->ScreenWidth = width;
    }
}

unsigned int Game::getScreenWidth()
{
    return this->ScreenWidth;
}
