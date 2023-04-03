My first c++ project of tic tac toe game.
# **Tic Tac Toe**
This program is a simple Tic Tac Toe game created using C++.

# How to Play
The game is played on a 3x3 board. Players take turns placing either "X" or "O" in an empty space on the board. The objective is to get three of your symbols in a row (horizontally, vertically, or diagonally). The first player to get three in a row wins the game. If all the spaces on the board are filled and no one has won, then the game is considered a draw.

# Code Structure
The program starts with a 3x3 array, arr, which represents the game board. The board is initially filled with numbers 1-9, which represent the spaces where players can place their symbols.

The program then defines several functions:

### display() - displays the current state of the game board 
players1() - prompts Player 1 or the computer to enter their choice of move
players2() - prompts Player 2 or the computer to enter their choice of move
gameover() - checks if the game is over, either because someone has won or because the board is full and there is a draw.

The main program then runs a loop where it repeatedly calls `display()`, `players1()`, `players2()`, and `gameover()`. The loop continues until `gameover()` returns true, indicating that the game is over.


Running the program
To run the program, simply compile the code and execute it. The program will display the game board and prompt Player 1 (or the computer) to enter their move. Follow the prompts to continue playing until the game is over.
