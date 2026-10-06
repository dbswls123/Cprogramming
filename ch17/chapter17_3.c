#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prn_str(char** ptrarr, int count);
int main(void) {
	char* ptrarr[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;
	count = sizeof(ptrarr) / sizeof(ptrarr[0]);
	prn_str(ptrarr, count);
	return 0;
}

void prn_str(char** ptrarr, int count) {
	for (int i = 0; i < count; i++) {
		printf("%s\n", ptrarr[i]);
	}
}
