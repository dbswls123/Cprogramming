#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char str[4][10];
	int count1[4];
	int k;
	int count;
	for (int i = 0;i < 4;i++) {
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
	}
	for (int j = 0;j < 4;j++) {
		k = 0;
		count = 0;
		while (str[j][k] != '\0') {
			count += 1;
			k++;
		}
		count1[j] = count;
	}
	for (int q = 0;q < 4;q++) {
		printf("%d번째 문자열 길이: %d\n", q + 1, count1[q]);
	}
}
