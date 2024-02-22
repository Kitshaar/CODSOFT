### Tic-Tac-Toe Game

This is a simple console-based Tic-Tac-Toe game implemented in C++20. The game allows two players to take turns placing their marks ('X' and 'O') on a 3x3 grid until one player wins or the game ends in a draw.

### Features:

- **Two-Player Gameplay**: Two players can take turns playing the game.
- **Interactive Interface**: Players input their moves by selecting positions on the grid.
- **Win Detection**: The game detects when a player achieves three marks in a row (horizontally, vertically, or diagonally).
- **Draw Detection**: If all positions on the grid are filled and no player has won, the game ends in a draw.
- **Restart Option**: After the game ends, players can choose to restart and play another round.

### How to Play:

1. **Starting the Game**: Run the executable file to start the game.
2. **Game Interface**: The game displays a 3x3 grid representing the game board. Players take turns inputting their moves.
3. **Making a Move**: Players input their moves by entering a number from 1 to 9, corresponding to the position they want to mark.
4. **Winning the Game**: The game ends when one player achieves three marks in a row (horizontally, vertically, or diagonally).
5. **Draw**: If all positions on the grid are filled and no player has won, the game ends in a draw.
6. **Restarting the Game**: After the game ends, players can choose to restart and play another round by entering 'y' or 'n' when prompted.

### Code Structure:

The code is organized into the following files:

- **tic_tac_toe.h**: Header file containing the declaration of the TicTacToe class.
- **tic_tac_toe.cpp**: Source file containing the implementation of the TicTacToe class methods.
- **main.cpp**: Source file containing the main function and game loop.

### Compilation and Execution:

To compile the code, you can use any C++20-compliant compiler. Here's how you can compile and run the game:

```bash
g++ -std=c++20 -o tic_tac_toe main.cpp tic_tac_toe.cpp tic_tac_toe.h
./tic_tac_toe
```

### Dependencies:

The game does not have any external dependencies and should compile and run on any system with a C++20-compliant compiler.

### Contribution:

Contributions to the codebase are welcome. If you find any issues or have suggestions for improvements, feel free to open an issue or create a pull request.

### License
This project is licensed under the MIT License. See the [LICENSE](../LICENSE.md)  file for details.

### Contact
For questions, feedback, or support, please contact [Kartik Sharma](mailto:sharmakartik2322002@gmail.com).

### Future Enhancements
- Support for more advanced operations.
- Improved error handling and validation.
- GUI
