#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char str[4][10];
	char last[1];
	int num = 0;
	for (int i = 0;i < 4;i++) {
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
	}
	last[0] = str[0][0];
	for (int j = 1;j < 4;j++) {
		if (str[j][0] > last[0]) {
			last[0] = str[j][0];
			num = j;
		}
	}
	printf("사전에서 제일 뒤에 나오는 문자열 : %s", str[num]);
}
