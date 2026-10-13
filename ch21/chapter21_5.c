#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[20];

	printf("문자열을 입력하시오 : ");
	fgets(str, sizeof(str), stdin);
//scanf("%19[^\n]", str);도 가능
	printf("문자열: %s", str);

	return 0;
}
