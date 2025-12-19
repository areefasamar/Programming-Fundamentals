#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char board[8][9];

        // Read 8 lines, skipping empty lines if any
        for (int i = 0; i < 8; ) {
            if (scanf("%s", board[i]) == 1) {
                i++;
            }
        }

        // Check only non-edge cells (2 to 7 in 1-based indexing)
        for (int r = 1; r <= 6; r++) {
            for (int c = 1; c <= 6; c++) {
                if (board[r][c] == '#' &&
                    board[r-1][c-1] == '#' &&
                    board[r-1][c+1] == '#' &&
                    board[r+1][c-1] == '#' &&
                    board[r+1][c+1] == '#') {

                    // Convert to 1-based indexing
                    printf("%d %d\n", r + 1, c + 1);
                }
            }
        }
    }

    return 0;
}
