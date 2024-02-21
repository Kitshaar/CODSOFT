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
    std::cout << "Welcome to Tic-Tac-Toe!" << '\n';
    std::cout << "Player 1: X, Player 2: O" << '\n';
    std::cout << "Game Begins!" << '\n';

    std::cout << "-------------\n";
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << "| " << board[i][j] << " ";
        }
        std::cout << "|\n";
        std::cout << "-------------\n";
    }
}

bool TicTacToe::makeMove(int position)
{
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;
    /*
      position = 1
      row = (1 - 1) / 3 = 0 / 3 = 0 (First row)
      col = (1 - 1) % 3 = 0 % 3 = 0 (First column)

      position = 5
      row = (5 - 1) / 3 = 4 / 3 = 1 (Second row)
      col = (5 - 1) % 3 = 4 % 3 = 1 (Second column)
   */
    if (board[row][col] == 'X' || board[row][col] == 'O')
    {
        return false; // Invalid move, position already taken
    }
    board[row][col] = currentPlayer;
    ++moves;     // Increment moves count
    return true; // Valid move
}

void TicTacToe::switchPlayer()
{
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main()
{
    TicTacToe game;
    int trigger_for_test{3};
    while (trigger_for_test > 0)
    {

        game.displayBoard();
        std::cout << '\n';
        int position{};
        std::cin >> position;
        game.makeMove(position);
        game.switchPlayer();
        --trigger_for_test;
    }
    return 0;
}