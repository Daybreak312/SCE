#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int input, output = 0; // 문제의 입력 값이 10^18이기 때문에 long long 사용
	scanf("%lld", &input);
	while(1) {
		if (input > 0 && input < 3) { // 배달할 수 없는 수인 경우 출력값을 -1로 지정, 탈출
			output = -1;
			break;
		}
		else if (!input) // 모두 나누어졌을 경우(input = 0, !input = 1) 반복문 탈풀
			break;
		else if (input % 5) { // a가 5로 나누어 떨어지지 않을 경우 -3, 출력값 1 증가, 되돌아감
			input -= 3;
			output++;
			continue;
		}
		else { // a가 5로 나누어 떨어질 경우 5로 나눈 몫을 출력값에 추가, 탈출
			output += input / 5;
			break;
		}
	}
	printf("%lld", output);
	return 0;
}