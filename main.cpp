#include <iostream>
#include <cassert>
#include "Game.h"



sf::Clock deltaClock;
sf::Time dt;
int main(int argc, char** argv)
{
#pragma omp parallel
#pragma omp single
    Game::Start();

    return 0;
}