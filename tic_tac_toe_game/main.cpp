#include "tic_tac_toe.h"
#include <iostream>

int main()
{
    TicTacToe game;
    char choice{};
    do
    {
        game.playGame();
        std::cout << "Do you want to play again? (y/n): ";
        choice = game.charInputHandler();
        game.restart();
    } while (choice == 'y');
    return 0;
}