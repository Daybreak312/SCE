// Backjoon n.2566
// 9개의 행과 열로 이루어진 2차원 배열의 값이 차례대로 입력되며, 이 때 가장 큰 값과 그 값의 행과 열을 출력하는 문제.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, max = 0, a, x, y;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			scanf("%d", &a);
			if (max <= a)
			{
				max = a;
				x = i;
				y = j;
			} // 2차원 배열을 따로 저장하지 않고, for문에 쓰인 변수를 행과 열로 하여 입력과 동시에 최댓값을 찾음.
		}
	}
	printf("%d\n%d %d", max, x, y);
	return 0;
}