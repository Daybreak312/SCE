#include "stdio.h"

struct stack {
    char stack[51];
    int size;
} stack = {{0}, 0};

void insert(char data) {
    stack.stack[stack.size++] = data;
}

int delete() {
    return stack.stack[--stack.size];
}

int main() {
    int cases, con = 0;
    char input[51];

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++) {
        scanf("%s", input);
        for (int j = 0; input[j] != '\0'; j++) {
            if (input[j] == '(')
                insert(input[j]);
            else if (delete() != '(') {
                printf("NO\n");
                con = 1;
                break;
            }
        }
        if (con) {
            con = 0;
            stack.size = 0;
            continue;
        }
        if (stack.size)
            printf("NO\n");
        else
            printf("YES\n");
        stack.size = 0;
    }
}