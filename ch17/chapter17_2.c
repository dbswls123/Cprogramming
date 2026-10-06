#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_max(int** ptrarr, int count);
int main(void) {
	int num1 = 30, num2 = 20, num3 = 50;
	int* ptrarr[3] = { &num1, &num2, &num3 };
	int max;
	max = get_max(ptrarr, 3);
	printf("최댓값:%d\n", max);
	return 0;
}
int get_max(int** ptrarr, int count) {
	int max = *ptrarr[0];
	for (int i = 1;i < count;i++) {
		if (max < *ptrarr[i])
			max = *ptrarr[i];
	}
	return max;
}
