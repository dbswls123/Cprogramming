#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr1[2][2] = { 2, 4, 5, -5 };
	int arr2[2][2] = {-2, 3, 0, -5};
	int add[2][2];
	printf("연산결과:\n");
	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 2;j++) {
			add[i][j] = arr1[i][j] + arr2[i][j];
			printf("%d ", add[i][j]);
		}
		printf("\n");
	}
}
