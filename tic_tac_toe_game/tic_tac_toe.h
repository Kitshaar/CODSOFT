#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
private:
    char board[3][3];     // 3x3 game board
    char currentPlayer{}; // 'X' or 'O'
    int moves{};          // Total moves made

public:
    TicTacToe(); // Constructor
    void displayBoard();
    bool makeMove(int position);
    void switchPlayer();
    bool isGameOver();
    bool checkWin();
    void playGame();
    int intInputHandler(); // Function to handle input player input
};

#endif
