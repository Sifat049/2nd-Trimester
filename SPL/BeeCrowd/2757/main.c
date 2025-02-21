#include <stdio.h>
#include <stdlib.h>

// Function to draw the Tic Tac Toe board
void draw_board(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if (i != 2) printf("\n---|---|---\n");
    }
    printf("\n");
}

// Function to check if the game is over
int is_game_over(char board[3][3]) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1;
    }
    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' '))
        return 1;
    // Check if board is full (draw)
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return 0;
    return -1; // Game is a draw
}

// Function to switch player
void switch_player(char *current_player) {
    if (*current_player == 'X')
        *current_player = 'O';
    else
        *current_player = 'X';
}

int main() {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char current_player = 'X';
    int row, col, game_status;

    printf("Let's play Tic Tac Toe!\n");
    printf("Player 1 (X) - Me\n");
    printf("Player 2 (O) - You\n");

    // Game loop
    do {
        draw_board(board);

        // Player's move
        printf("Player %c, enter your move (row [1-3] column [1-3]): ", current_player);
        scanf("%d %d", &row, &col);
        row--; // Adjust to 0-based index
        col--; // Adjust to 0-based index

        // Check if the move is valid
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        // Make the move
        board[row][col] = current_player;

        // Check game status
        game_status = is_game_over(board);

        // Switch player for next turn
        switch_player(&current_player);
    } while (game_status == 0);

    // Game over
    draw_board(board);
    if (game_status == 1)
        printf("Player %c wins!\n", current_player);
    else
        printf("It's a draw!\n");

    return 0;
}
