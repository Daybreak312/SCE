#include "stdio.h"

int main() {
    int cases, N, eat, temp, result;
    scanf("%d", &cases);

    for (int a = 0; a < cases; a++) {
        eat = 0;

        scanf("%d", &N);
        for (int i = 0; i < 6; i++) {
            scanf("%d", &temp);
            eat += temp;
        }
        for (result = 1;; result++) {
            if (eat > N) break;
            eat *= 4;
        }
        printf("%d\n", result);
    }
}