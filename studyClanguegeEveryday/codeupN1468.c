/* Codeup n.1468
2���� �迭�� �̿��ϴ� ����.
�Է��� 3�� ��� ������ ���� ������� ���·� ����Ѵ�.
1 2 3
6 5 4
7 8 9 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, i, j;
	scanf("%d", &a);
	int b[101][101];
	for (i = 0; i < a; i++)
	{
		for (j = 1; j <= a; j++)
		{
			if (i % 2 == 0)
				printf("%d", (i * a) + j);
			else
				printf("%d", ((i + 1) * a) - j + 1);
		}
		printf("\n");
	}
}