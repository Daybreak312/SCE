/* codeup n.3170
N개의 단어와 해당 단어의 쌍인 숫자를 입력 받음 (단어 중복 가능)
그 뒤, M개의 단어을 입력 받고, 해당 단어의 모든 쌍을 더하여 출력.
쿼리 및 구조체와 관련된 문제. */

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
		scanf("%s %d", inputWord, &inputNum); // 문자열 및 값 입력
		for (int j = 0; j < n; j++) {
			if (strcmp(inputWord, inp[j].word) == 0) { // 문자열이 이전에 입력받은 적 있다면 해당 값을 이전에 입력받은 값에 추가함
				inp[j].num += inputNum;
				break;
			}
			else if (inp[j].num == 0) { // 만약 입력받은 적 없는 문자열이라면 구조체의 num을 비교(기본값이 0)하여 해당 문자열이 입력된 적 없는지 확인
				strcpy(inp[j].word, inputWord); // 입력된 적 없다면 값을 입력
				inp[j].num = inputNum;
				o++; // 입력된 모든 값에서 중복된 단어를 제외한 n
				break;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		scanf("%s", inputWord); // 비교할 문자열을 m(== 질문 개수)회 입력받음
		for (int j = 0; j < o; j++) {
			if (strcmp(inp[j].word, inputWord) == 0) { // 입력받은 후 해당 단어가 존재하는지 확인하고,
				print[i] = inp[j].num; //  존재한다면 값을 추가, 만약 없다면 print 배열의 기본값이 0이므로 자동으로 0으로 설정됨
				break;
			}
		}
		printf("%d\n", print[i]); // 질문 횟수만큼 출력
	}

	return 0;
}