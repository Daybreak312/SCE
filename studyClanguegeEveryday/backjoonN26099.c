#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int input, output = 0; // ������ �Է� ���� 10^18�̱� ������ long long ���
	scanf("%lld", &input);
	while(1) {
		if (input > 0 && input < 3) { // ����� �� ���� ���� ��� ��°��� -1�� ����, Ż��
			output = -1;
			break;
		}
		else if (!input) // ��� ���������� ���(input = 0, !input = 1) �ݺ��� ŻǮ
			break;
		else if (input % 5) { // a�� 5�� ������ �������� ���� ��� -3, ��°� 1 ����, �ǵ��ư�
			input -= 3;
			output++;
			continue;
		}
		else { // a�� 5�� ������ ������ ��� 5�� ���� ���� ��°��� �߰�, Ż��
			output += input / 5;
			break;
		}
	}
	printf("%lld", output);
	return 0;
}