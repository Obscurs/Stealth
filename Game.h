//
// Created by jfonslocal on 29/09/16.
//
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#ifndef STEALTH_GAME_H
#define STEALTH_GAME_H


class Game {
public:
    static void Start();
    //static sf::RenderWindow& GetWindow();
    //const static sf::Input& GetInput();
    const static int SCREEN_WIDTH = 1024;
    const static int SCREEN_HEIGHT = 768;

private:
    static bool IsExiting();
    static void GameLoop(double delta);
    static void ExitGame();

    enum GameState { Uninitialized, Starting, Paused,
        ShowingMenu, Playing, Exiting };

    static GameState _gameState;
    static sf::RenderWindow window;

};


#endif //STEALTH_GAME_H
