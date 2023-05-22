#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j, max = 0, trade, maxLocation, n, k, a[10000];
	scanf("%d %d", &n, &k);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < k; i++) {
		if (n == 1) {
			printf("-1");
			return 0;
		}
		max = 0;
		for (j = 0; j < n; j++)
			if (max < a[j]) {
				max = a[j];
				maxLocation = j;
			}
		if (maxLocation != n - 1) {
			trade = a[n - 1];
			a[n - 1] = max;
			a[maxLocation] = trade;
		}
		else i -= 1;
		n -= 1;
	}
	printf("%d %d", trade, max);
	return 0;
}