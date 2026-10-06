#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MaxAndMin(int** maxPtr, int** minPtr, int count, int*arr);
int main(void) {
	int arr[5] = { 3, 2, 5, 1, 6 };
	int* maxPtr=arr;
	int* minPtr=arr;
	int len = sizeof(arr) / sizeof(arr[0]);
	MaxAndMin(&maxPtr, &minPtr, len, arr);
	printf("최댓값:%d\n", *maxPtr);
	printf("최솟값:%d", *minPtr);
}

void MaxAndMin(int** maxPtr, int** minPtr, int count, int*arr) {
	for (int i = 1;i < count;i++) {
		if (**maxPtr < arr[i])
			*maxPtr = &arr[i];
		else if (**minPtr > arr[i])
			*minPtr = &arr[i];
	}
}
