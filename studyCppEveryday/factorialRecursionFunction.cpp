/* 팩토리얼을 재귀함수를 이용하여 구현.
값을 입력받으면 n * (n - 1) * {(n - 1) - 1} ... * 1을 계산.
즉, n이 3이라고 하면
1 * 2 * 3 == {(n - 1) - 1} * (n - 1) * n
의 형태로 계산함.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n, int result) // n!을 계산할 재귀함수
{
	if (n <= 1) 
	{
		return result;
	}/* 만약 n!에서 n이 0 혹은 1이라면 result 변수를 반환하게 됨. */
	else
	{
		result *= n; n -= 1;
		return factorial(n, result);
		/* result값에 n을 곱하고 n에 1을 빼줌. 이것을 반복하여
		n * (n - 1) * {(n - 1) - 1} ... 를 만듬. */
	}
}

int main()
{
	int n, result = 1; // n!에 사용될 변수와 반환값이 될 변수. 이 때, result는 1로 초기화를 해줘야 함.
	scanf("%d", &n);
	result = factorial(n, result); /* 함수에 사용한 result 변수로 다시 사용.
	이 때, 함수가 먼저 사용된 후 return값을 받아 대입하기에 문제가 일어나지 않음. */
	printf("%d", result);
	return 0;
}