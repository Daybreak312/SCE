/* backjoon n.3003
6���� ���ڰ� �־�����, �̴� ���� ���� ã�� ŷ, ��, ��, ���, ���� �����̸�
�� ������ ���� �־���ϴ� �ǽ��� ���Ͽ� ���� ����Ѵ�.
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