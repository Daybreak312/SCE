/* Codeup n.4051
1. 시간외 근무는 최초 1시간은 제외하며, 최대 4시간까지 인정한다.
2. 시간외 근무에 따른 금액은 30분에 5,000원으로 한다.
3. 5일간의 시간외 근무 합계가 15시간 이상이면 받는 금액의 5%를 감하여 지급한다.
4. 5일간의 시간외 근무 합계가 5시간 이하이면 받는 금액의 5%를 더하여 지급한다. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, money;
	float time[5][4];

	for (i = 0; i < 5; i++)
	{
		scanf("%f %f", &time[i][0], &time[i][1]);
		time[i][2] = (time[i][1] - time[i][0]) - 1;
		time[i][3] += time[i][2];
	}

	money = time[i][3] * 10000;

	if (time[i][3] >= 15)
	{
		money -= (money / 20);
	}
	else if (time[i][3] <= 5)
	{
		money += (money / 20);
	}
	printf("%d", money);
	return 0;
}