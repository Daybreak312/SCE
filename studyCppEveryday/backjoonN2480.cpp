#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dice[3], money;
	scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);

	if ((dice[0] == dice[1]) && (dice[1] == dice[2]))
		money = 10000 + (dice[0] * 1000);
	else if ((dice[0] == dice[1]) || (dice[1] == dice[2]))
		money = 1000 + (dice[1] * 100);
	else if (dice[0] == dice[2])
		money = 1000 + (dice[0] * 100);
	else
		money = ((dice[0] > dice[1] ? dice[0] : dice[1]) > dice[2] ? (dice[0] > dice[1] ? dice[0] : dice[1]) : dice[2]) * 100;
	printf("%d", money);
	return 0;
}