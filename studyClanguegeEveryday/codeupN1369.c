#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			if (i == 1 || i == a || j == 1 || j == a) {
				printf("*");
				continue;
			}
			if ((j + i - 1) % b == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}