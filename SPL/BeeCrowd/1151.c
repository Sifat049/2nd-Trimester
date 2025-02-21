
#include <stdio.h>
#include <stdlib.h>

char board[3][3]; // 3x3 Tic Tac Toe board

// Function to initialize the board
void initialize_board() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            board[i][j] = '-';
        }
    }
}

// Function to display the board
void display_board() {
    int i, j;
    printf("Board:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Function to check if the board is full
int is_board_full() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] == '-') {
                return 0; // Board is not full
            }
        }
    }
    return 1; // Board is full
}

// Function to check if the given player has won
int check_winner(char player) {
    int i;
    // Check rows and columns
    for (i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1; // Row win
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return 1; // Column win
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1; // Diagonal win
    }
    return 0; // No win
}

// Function to make a move for the given player
void make_move(char player) {
    int row, col;
    printf("Player %c's turn. Enter row and column (0-2): ", player);
    scanf("%d %d", &row, &col);
    if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != '-') {
        printf("Invalid move. Try again.\n");
        make_move(player);
    } else {
        board[row][col] = player;
    }
}

int main() {
    char player = 'X'; // Player 'X' starts the game
    initialize_board();
    display_board();
    
    while (!is_board_full()) {
        make_move(player);
        display_board();
        if (check_winner(player)) {
            printf("Player %c wins!\n", player);
            return 0;
        }
        player = (player == 'X') ? 'O' : 'X'; // Switch player
    }
    
    printf("It's a draw!\n");
    return 0;
}
