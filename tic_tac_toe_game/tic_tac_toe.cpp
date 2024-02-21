#include "tic_tac_toe.h"
#include <iostream>

TicTacToe::TicTacToe()
{
    // Initialize the game board
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            board[i][j] = '1' + i * 3 + j; // Use placeholders '1' to '9'
        }
    }

    currentPlayer = 'X'; // Player 'X' starts the game
    moves = 0;           // No moves made yet
}
void TicTacToe::displayBoard()
{
    std::system("cls"); // Clear the screen
    std::cout << "Welcome to Tic-Tac-Toe!" << std::endl;
    std::cout << "Player 1: X, Player 2: O" << std::endl;
    std::cout << "Game Begins!" << std::endl;

    std::cout << "-------------" << std::endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << "| " << board[i][j] << " ";
        }
        std::cout << "|" << std::endl;
        std::cout << "-------------" << std::endl;
    }
}

int main()
{
    TicTacToe game;
    game.displayBoard();
    return 0;
}