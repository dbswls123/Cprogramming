#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
	char ch;
	for (int i = 0;i < 5;i++) {
		printf("문자 입력: ");
		scanf("%c", &ch);
		printf("문자: %c\n", ch);
	}
	return 0;
}
