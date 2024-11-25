#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void displayBoard();
int checkWinner();
int isMovesLeft();
int minimax(int depth, int isMax);
int evaluate();
void userMove();
void computerMove();

// Global variables
char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main() {
    int winner = 0, moveCount = 0;
    char playAgain;

    do {
        // Initialize the board
        for (int i = 0; i < 9; i++) {
            board[i] = '1' + i;
        }

        printf("Welcome to Tic Tac Toe with Advanced AI!\n");
        displayBoard();

        // Game loop
        while (winner == 0 && moveCount < 9) {
            if (moveCount % 2 == 0) {
                printf("Your turn:\n");
                userMove();
            } else {
                printf("Computer's turn:\n");
                computerMove();
            }

            displayBoard();
            winner = checkWinner();
            moveCount++;
        }

        // Check the result
        if (winner == 1) {
            printf("Player X wins!\n");
        } else if (winner == -1) {
            printf("Computer (O) wins!\n");
        } else {
            printf("It's a draw!\n");
        }

        // Ask for replay
        printf("Do you want to play again? (Y/N): ");
        getchar(); // Consume leftover newline
        scanf("%c", &playAgain);

        winner = 0;  // Reset the winner
        moveCount = 0; // Reset the move count
    } while (playAgain == 'Y' || playAgain == 'y');

    return 0;
}

// Function to display the board
void displayBoard() {
    printf("\n");
    for (int i = 0; i < 9; i += 3) {
        printf(" %c | %c | %c\n", board[i], board[i + 1], board[i + 2]);
        if (i < 6) {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}

// Function to check for a winner
int checkWinner() {
    // Winning combinations
    int winCombos[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Columns
        {0, 4, 8}, {2, 4, 6}             // Diagonals
    };

    for (int i = 0; i < 8; i++) {
        if (board[winCombos[i][0]] == board[winCombos[i][1]] &&
            board[winCombos[i][1]] == board[winCombos[i][2]]) {
            return (board[winCombos[i][0]] == 'X') ? 1 : -1;
        }
    }
    return isMovesLeft() ? 0 : 2; // 0: Game continues, 2: Draw
}

// Function to check if moves are left
int isMovesLeft() {
    for (int i = 0; i < 9; i++) {
        if (board[i] != 'X' && board[i] != 'O') {
            return 1;
        }
    }
    return 0;
}

// Minimax algorithm for AI
int minimax(int depth, int isMax) {
    int score = evaluate();

    // If computer wins
    if (score == 10) return score - depth;

    // If player wins
    if (score == -10) return score + depth;

    // If no moves are left, it's a draw
    if (!isMovesLeft()) return 0;

    if (isMax) {
        int best = -1000;
        for (int i = 0; i < 9; i++) {
            if (board[i] != 'X' && board[i] != 'O') {
                char temp = board[i];
                board[i] = 'O'; // Computer's move
                best = best > minimax(depth + 1, 0) ? best : minimax(depth + 1, 0);
                board[i] = temp; // Undo move
            }
        }
        return best;
    } else {
        int best = 1000;
        for (int i = 0; i < 9; i++) {
            if (board[i] != 'X' && board[i] != 'O') {
                char temp = board[i];
                board[i] = 'X'; // User's move
                best = best < minimax(depth + 1, 1) ? best : minimax(depth + 1, 1);
                board[i] = temp; // Undo move
            }
        }
        return best;
    }
}

// Function to evaluate the board
int evaluate() {
    // Winning combinations
    int winCombos[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Columns
        {0, 4, 8}, {2, 4, 6}             // Diagonals
    };

    for (int i = 0; i < 8; i++) {
        if (board[winCombos[i][0]] == board[winCombos[i][1]] &&
            board[winCombos[i][1]] == board[winCombos[i][2]]) {
            if (board[winCombos[i][0]] == 'O') return 10; // Computer wins
            if (board[winCombos[i][0]] == 'X') return -10; // Player wins
        }
    }
    return 0; // No winner yet
}

// Function for user move
void userMove() {
    int move;
    do {
        printf("Enter your move (1-9): ");
        scanf("%d", &move);
        move--; // Adjust for 0-based indexing
    } while (move < 0 || move >= 9 || board[move] == 'X' || board[move] == 'O');

    board[move] = 'X';
}

// Function for computer move
void computerMove() {
    int bestVal = -1000, bestMove = -1;

    for (int i = 0; i < 9; i++) {
        if (board[i] != 'X' && board[i] != 'O') {
            char temp = board[i];
            board[i] = 'O'; // Computer's move
            int moveVal = minimax(0, 0);
            board[i] = temp; // Undo move

            if (moveVal > bestVal) {
                bestMove = i;
                bestVal = moveVal;
            }
        }
    }
    board[bestMove] = 'O';
}
