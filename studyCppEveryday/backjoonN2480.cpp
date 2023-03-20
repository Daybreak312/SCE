/* backjoon n.2480
세 개의 주사위를 굴리고, 눈에 따라 상금을 받는 게임이다.
1. 같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
2. 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
3. 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.*/


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