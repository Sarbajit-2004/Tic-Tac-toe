Tic Tac Toe Game in C

Welcome to the Tic Tac Toe Game repository! 🎮
This project is a simple implementation of the classic Tic Tac Toe game, written in the C programming language. 
It was developed as part of my first-semester college project to practice programming fundamentals and explore game development.

Features
Two Game Modes:
Multiplayer Mode (User vs User)
Single Player Mode (User vs Computer)

Computer AI:
The computer makes random valid moves.

Dynamic Board:
A 3x3 grid that updates after every move.

Input Validation:
Ensures only valid moves are accepted.

Result Announcements:
Declares the winner or a draw at the end of the game.

How to Play
Clone the repository:
git clone https://github.com/yourusername/tictactoe-c.git
cd tictactoe-c

Compile the code using a C compiler:
gcc tictactoe.c -o tictactoe

Run the executable:
./tictactoe

Follow the on-screen instructions to play!

Game Rules
The game is played on a 3x3 grid.

Players take turns marking a square with their symbol (Player 1: X, Player 2/Computer: O).
The first player to align three symbols in a row, column, or diagonal wins.
If all squares are filled and no player has won, the game ends in a draw.

Code Highlights
Game Board: Represented as a 1D array of 9 elements.

Input Handling: Validates user input to ensure only numbers between 1–9 are accepted.

Winner Detection: Checks all rows, columns, and diagonals for a winning combination.

Replay Option: Allows users to play multiple rounds without restarting the program.

Example Gameplay
Welcome to Tic Tac Toe!
Choose game mode:
1. Multiplayer (User vs User)
2. Computer vs User
Enter your choice: 2

![image](https://github.com/user-attachments/assets/885c1e4e-f319-4414-8328-24a223eaf89a)


Your turn:
Enter your move (1-9): 5

 ![image](https://github.com/user-attachments/assets/534e9bff-a70d-49ae-99dc-2b76e030b32a)
 

Computer's turn:

Project Details

Language: C

Tools: GCC Compiler

Scope: Console-based Tic Tac Toe game

Learning Outcomes:

Basic understanding of arrays, loops, and conditional statements.

Input validation and error handling in C.

Implementation of simple game logic.

Future Improvements

Add a smarter AI for the computer opponent.

Implement a graphical user interface (GUI).

Extend to an NxN grid for advanced gameplay.

Contributing

Contributions are welcome! If you'd like to improve the game or add new features, feel free to fork this repository and submit a pull request
