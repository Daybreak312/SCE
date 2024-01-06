#include "stdio.h"

int main() {
    int cases, firstI = 3, firstJ = 3, secondI = 3, secondJ = 3;
    char board[3][3], me;

    scanf("%d", &cases);

    for (int now = 1; now <= cases; now++) {

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
                scanf(" %c", &board[i][j]);
            }
        scanf(" %c", &me);

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == me && firstI == 3) {
                    firstI = i;
                    firstJ = j;
                } else if (board[i][j] == me) {
                    secondI = i;
                    secondJ = j;
                }
            }

        if (firstI + 1 == secondI) {
            if (firstJ == secondJ)
                board[(firstI + 2) % 3][firstJ] = me;
            else if (firstI == 0)
                board[(firstI + 2) % 3][firstJ < secondJ ? 2 : 0] = me;
            else
                board[(firstI + 2) % 3][firstJ > secondJ ? 2 : 0] = me;
        } else if (firstI - 1 == secondI) {
            if (firstJ == secondJ)
                board[(secondI + 2) % 3][firstJ] = me;
            else if (secondI == 0)
                board[(secondI + 2) % 3][secondJ < firstJ ? 2 : 0] = me;
            else
                board[(secondI + 2) % 3][secondJ > firstJ ? 2 : 0] = me;
        } else if (firstJ + 1 == secondJ) {
            if (firstI == secondI)
                board[firstI][(firstJ + 2) % 3] = me;
            else if (firstJ == 0)
                board[firstI < secondI ? 2 : 0][(firstJ + 2) % 3] = me;
            else
                board[firstI > secondI ? 2 : 0][(firstJ + 2) % 3] = me;
        } else if (firstJ - 1 == secondJ) {
            if (firstI == secondI)
                board[firstI][(secondJ + 2) % 3] = me;
            else if (secondJ == 0)
                board[secondI < firstI ? 2 : 0][(secondJ + 2) % 3] = me;
            else
                board[secondI > firstI ? 2 : 0][(secondJ + 2) % 3] = me;
        } else {
            if (firstI == secondI)
                board[firstI][1] = me;
            else if (firstJ == secondJ)
                board[1][firstJ] = me;
            else
                board[1][1] = me;
        }
        scanf(" ");
        printf("Case %d:\n", now);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                printf("%c", board[i][j]);
            printf("\n");
        }

        firstI = firstJ = secondI = secondJ = 3;
    }
}