#include <stdio.h>

int main() {
    char board[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
    int row = 0, col = 0, player = 1, moves = 0;
    printf("Tic-Tac-Toe (X/O). Enter position 1-9:\n");
    while (moves < 9) {
        printf("Board:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) printf("%c ", board[i][j]);
            printf("\n");
        }
        printf("Player %d move: ", player);
        scanf("%d", &row); row--; col = (row % 3); row /= 3;
        board[row][col] = (player == 1) ? 'X' : 'O';
        player = 3 - player; moves++;
    }
    printf("Game over!\n");
    return 0;
}
