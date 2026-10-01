#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr[3][3] = { -5, 2, 35, -20, 5, 100, -75, 5, -25 };
	int max = arr[0][0];
	int x = 0;
	int y = 0;
	for (int i = 1;i < 3;i++) {
		for (int j = 1;j < 3;j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				x = j;
				y = i;
			}
		}
	}
	printf("최댓값은 %d\n", max);
	printf("위치는 %d행 %d열", y+1, x+1);
}
