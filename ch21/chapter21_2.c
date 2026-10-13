#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char arr[1];
	while (1) {
		printf("문자 입력: ");
		scanf(" %c", &arr);
		if (arr[0] == 'q' || arr[0]=='Q') break;
		else
			printf("입력된 문자는 %c \n", arr[0]);
	}
}
