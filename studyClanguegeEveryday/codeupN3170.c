/* codeup n.3170
N���� �ܾ�� �ش� �ܾ��� ���� ���ڸ� �Է� ���� (�ܾ� �ߺ� ����)
�� ��, M���� �ܾ��� �Է� �ް�, �ش� �ܾ��� ��� ���� ���Ͽ� ���.
���� �� ����ü�� ���õ� ����. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct input {
	char word[101];
	int num = 0;
};

int main() {
	int n, m, o, print[100000] = { 0, }, inputNum;
	char inputWord[101];
	struct input inp[100000];
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%s %d", inputWord, &inputNum); // ���ڿ� �� �� �Է�
		for (int j = 0; j < n; j++) {
			if (strcmp(inputWord, inp[j].word) == 0) { // ���ڿ��� ������ �Է¹��� �� �ִٸ� �ش� ���� ������ �Է¹��� ���� �߰���
				inp[j].num += inputNum;
				break;
			}
			else if (inp[j].num == 0) { // ���� �Է¹��� �� ���� ���ڿ��̶�� ����ü�� num�� ��(�⺻���� 0)�Ͽ� �ش� ���ڿ��� �Էµ� �� ������ Ȯ��
				strcpy(inp[j].word, inputWord); // �Էµ� �� ���ٸ� ���� �Է�
				inp[j].num = inputNum;
				o++; // �Էµ� ��� ������ �ߺ��� �ܾ ������ n
				break;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		scanf("%s", inputWord); // ���� ���ڿ��� m(== ���� ����)ȸ �Է¹���
		for (int j = 0; j < o; j++) {
			if (strcmp(inp[j].word, inputWord) == 0) { // �Է¹��� �� �ش� �ܾ �����ϴ��� Ȯ���ϰ�,
				print[i] = inp[j].num; //  �����Ѵٸ� ���� �߰�, ���� ���ٸ� print �迭�� �⺻���� 0�̹Ƿ� �ڵ����� 0���� ������
				break;
			}
		}
		printf("%d\n", print[i]); // ���� Ƚ����ŭ ���
	}

	return 0;
}