// Backjoon n.2566
// 9���� ��� ���� �̷���� 2���� �迭�� ���� ���ʴ�� �ԷµǸ�, �� �� ���� ū ���� �� ���� ��� ���� ����ϴ� ����.
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
			} // 2���� �迭�� ���� �������� �ʰ�, for���� ���� ������ ��� ���� �Ͽ� �Է°� ���ÿ� �ִ��� ã��.
		}
	}
	printf("%d\n%d %d", max, x, y);
	return 0;
}