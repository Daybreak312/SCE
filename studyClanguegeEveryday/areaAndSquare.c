// 두 점을 입력받고 두 점이 이루는 직사각형의 넓이를 출력.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2;
    printf("x1, y1 좌표 : ");
    scanf("%d %d", &x1, &y1);
    printf("x2 y2 좌표 : ");
    scanf("%d %d", &x2, &y2);
    printf("두 점으로 만들어지는 직사각형 크기 : %d", abs((x1 - x2) * (y1 - y2)));
    /* 두 점의 좌표의 차이(직사각형의 변의 길이)를 구하고, 이 둘을 곱함(직사각형의 넓이). 이 때, 직사각형의 변의 길이 혹은 직사각형의 넓이가 음수가 되는 경우
    길이 혹은 넓이는 음수가 될 수 없으므로 절댓값으로 바꿈. */
    return 0;
}