#include "stdio.h"

int main() {
    int n, c, k , result = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &c, &k);

        if (k)
            result += c * k;
    }

    printf("%d", result);
}