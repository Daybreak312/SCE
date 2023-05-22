/* Codeup n.4051
1. �ð��� �ٹ��� ���� 1�ð��� �����ϸ�, �ִ� 4�ð����� �����Ѵ�.
2. �ð��� �ٹ��� ���� �ݾ��� 30�п� 5,000������ �Ѵ�.
3. 5�ϰ��� �ð��� �ٹ� �հ谡 15�ð� �̻��̸� �޴� �ݾ��� 5%�� ���Ͽ� �����Ѵ�.
4. 5�ϰ��� �ð��� �ٹ� �հ谡 5�ð� �����̸� �޴� �ݾ��� 5%�� ���Ͽ� �����Ѵ�. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, money;
	float time[5][3], allTime = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%f %f", &time[i][0], &time[i][1]);
		time[i][2] = (time[i][1] - time[i][0]) > 1 ? (time[i][1] - time[i][0] - 1) : 0;
		time[i][2] = time[i][2] <= 4 ? time[i][2] : 4;
		allTime += time[i][2];
	}

	money = allTime * 10000;

	if (allTime >= 15)
	{
		money -= (money / 20);
	}
	else if (allTime <= 5)
	{
		money += (money / 20);
	}
	printf("%d", money);
	return 0;
}