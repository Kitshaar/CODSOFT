#include "tic_tac_toe.h"
#include <iostream>
#include <limits>

TicTacToe::TicTacToe()
{
    // Initialize the game board
    initializeBoard();
    currentPlayer = 'X'; // Player 'X' starts the game
    moves = 0;           // No moves made yet
}

// Initialize the game board with placeholders
void TicTacToe::initializeBoard()
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            board[i][j] = '1' + i * 3 + j; // Use placeholders '1' to '9'
        }
    }
}

void TicTacToe::displayBoard()
{
    std::system("cls"); // Clear the screen
    std::cout << "Welcome to Tic-Tac-Toe!" << '\n';
    std::cout << "Player 1: X, Player 2: O" << '\n';
    std::cout << "Game Begins!" << '\n';
    std::cout << "Moves made so far: " << moves << '\n';

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

bool TicTacToe::isGameOver()
{
    return checkWin() || moves == 9;
}

bool TicTacToe::checkWin()
{
    // Check rows for a win
    for (int i = 0; i < 3; ++i)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return true; // Row win
        }
    }

    // Check columns for a win
    for (int j = 0; j < 3; ++j)
    {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j])
        {
            return true; // Column win
        }
    }

    // Check diagonals for a win
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
    {
        return true; // Diagonal win
    }

    return false; // No win
}

// Function to get a character input from the user with the provided prompt
char TicTacToe::charInputHandler()
{
    while (true)
    {
        char runAgainTrigger{};
        std::cin >> runAgainTrigger;

        // Check if the read operation failed
        if (!std::cin)
        {
            // Check if the end of the file is reached
            if (std::cin.eof())
            {
                exit(0); // Exit the program gracefully if end of file is reached
            }

            // Clear the fail state of std::cin
            std::cin.clear();

            // Ignore any remaining characters in the input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Display an error message to the user
            std::cout << "Invalid input. Please enter a valid character.\n";

            continue;
        }
        else if (std::cin.peek() != '\n')
        {
            // If there are additional characters in the input buffer, clear them
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Display an error message to the user
            std::cout << "Invalid input. Please enter a single character.\n";

            continue;
        }
        else if (runAgainTrigger != 'y')
        {
            if (runAgainTrigger == 'n')
            {
                exit(0);
            }

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            // Display an error message to the user
            std::cout << "Invalid input. Please enter the correct character.\n";
            std::cout << "Note: Capslock might be ON.\n";
            continue;
        }
        else
        {
            // If input is valid, ignore any remaining characters in the input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            // Return the valid input value
            return runAgainTrigger;
        }
    }
}

int TicTacToe::intInputHandler()
{
    while (true)
    {
        int position{};
        std::cout << "Player " << currentPlayer << "'s turn. Enter position (1-9): ";
        std::cin >> position;

        // Check if the read operation failed
        if (!std::cin)
        {
            // Check if the end of the file is reached
            if (std::cin.eof())
            {
                exit(0); // Exit the program gracefully if end of file is reached
            }

            // Clear the fail state of std::cin
            std::cin.clear();

            // Ignore any remaining characters in the input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Display an error message to the user
            std::cout << "Invalid input. Please enter a single number.\n";
            continue;
        }
        else if (std::cin.peek() != '\n')
        {
            // If there are additional characters in the input buffer, clear them
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Display an error message to the user
            std::cout << "Invalid input. Please enter a single number between 1-9.\n";

            continue;
        }
        else if (position < 1 || position > 9 || !makeMove(position))
        {
            // Clear the fail state of std::cin
            std::cin.clear();

            // Ignore any remaining characters in the input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Display an error message to the user
            std::cout << "Invalid input. Please enter a valid number.\n";

            continue;
        }
        else
        {
            // If input is valid, ignore any remaining characters in the input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            // Return the valid input value
            return position;
        }
    }
}

void TicTacToe::playGame()
{
    while (!isGameOver())
    {
        displayBoard(); // Display the current board
        int position{intInputHandler()};
        // Check the result of the game
        if (checkWin())
        {
            displayBoard();
            std::cout << "Player " << currentPlayer << " wins! Congratulations!\n";
            return;
        }

        switchPlayer(); // Switch to the next player
    }

    displayBoard(); // Display the final board after the game ends
    std::cout << "It's a draw! Game Over!\n";
}

// Function to restart the game
void TicTacToe::restart()
{
    initializeBoard();   // Reset the game board
    currentPlayer = 'X'; // Player 'X' starts the game
    moves = 0;
}