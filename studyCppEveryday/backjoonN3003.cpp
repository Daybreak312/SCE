/* backjoon n.3003
6개의 숫자가 주어진다, 이는 각각 현재 찾은 킹, 퀸, 록, 비숍, 폰의 개수이며
이 개수와 원래 있어야하는 피스와 비교하여 값을 출력한다.
0 1 2 2 2 7 -> 1 0 0 0 0 1*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int befor[6] = { 1, 1, 2, 2, 2, 8 }, after[6], i;
	
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &after[i]);
		printf("%d ", befor[i] - after[i]);
	}
	return 0;
}