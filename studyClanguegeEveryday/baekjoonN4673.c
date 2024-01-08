#include "stdio.h"

int generated[10001] = {0}, current;

int isSelf(int num) {
    for (int a = 0; a * 1001 <= num && a < 10; a++)
        for (int b = 0; a * 1001 + b * 101 <= num && b < 10; b++)
            for (int c = 0; a * 1001 + b * 101 + c * 11 <= num && c < 10; c++)
                for (int d = 0; a * 1001 + b * 101 + c * 11 + d * 2 <= num && d < 10; d++) {
                    current = a * 1001 + b * 101 + c * 11 + d * 2;
                    if (generated[current]) {
                        continue;
                    }
                    if (current == num) {
                        generated[current] = 1;
                        return 0;
                    }
                }
    printf("%d\n", num);
    return 1;
}

int main() {
    for (int i = 1; i <= 10000; i++) {
        isSelf(i);
    }
}