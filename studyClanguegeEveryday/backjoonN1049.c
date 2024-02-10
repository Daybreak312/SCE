#include "stdio.h"

int main() {

    int n, m, maxSix = 0, maxOne = 0, input;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {

        scanf("%d", &input);
        maxSix = maxSix < input ? maxSix : input;

        scanf("%d", &input);
        maxOne = maxOne < input ? maxOne : input;
    }

    if (maxOne * 6 < maxSix)
        return 0;
}