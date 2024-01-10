#include "stdio.h"
#include "string.h"

int main() {
    int count = 0;
    char input[101];
    char updatable2[7][3] = {"c=", "c-", "d-", "lj", "nj", "s=", "z="};
    char updatable3[4] = "dz=";

    scanf("%s", input);

    for (int i = 0; i < strlen(input); i++) {
        if (!strncmp(&input[i], updatable3, 3)) {
            count++;
            i += 2;
        } else {
            for (int j = 0; j <= 7; j++)
                if (j == 7)
                    count++;
                else if (!strncmp(&input[i], updatable2[j], 2)) {
                    count++;
                    i++;
                    break;
                }

        }
    }

    printf("%d", count);
}