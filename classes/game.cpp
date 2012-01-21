#include "game.h"

Game::Game(std::string configurationFile)
{
    this->Configuration = new Config(configurationFile);
    this->Configuration->readConfig();
}

Game::~Game()
{
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
}
