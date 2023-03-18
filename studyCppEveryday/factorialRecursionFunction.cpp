/* ���丮���� ����Լ��� �̿��Ͽ� ����.
���� �Է¹����� n * (n - 1) * {(n - 1) - 1} ... * 1�� ���.
��, n�� 3�̶�� �ϸ�
1 * 2 * 3 == {(n - 1) - 1} * (n - 1) * n
�� ���·� �����.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n, int result) // n!�� ����� ����Լ�
{
	if (n <= 1) 
	{
		return result;
	}/* ���� n!���� n�� 0 Ȥ�� 1�̶�� result ������ ��ȯ�ϰ� ��. */
	else
	{
		result *= n; n -= 1;
		return factorial(n, result);
		/* result���� n�� ���ϰ� n�� 1�� ����. �̰��� �ݺ��Ͽ�
		n * (n - 1) * {(n - 1) - 1} ... �� ����. */
	}
}

int main()
{
	int n, result = 1; // n!�� ���� ������ ��ȯ���� �� ����. �� ��, result�� 1�� �ʱ�ȭ�� ����� ��.
	scanf("%d", &n);
	result = factorial(n, result); /* �Լ��� ����� result ������ �ٽ� ���.
	�� ��, �Լ��� ���� ���� �� return���� �޾� �����ϱ⿡ ������ �Ͼ�� ����. */
	printf("%d", result);
	return 0;
}