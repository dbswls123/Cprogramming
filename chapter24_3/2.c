#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    FILE* fp;
    int num[10];
    int i;

    fp = fopen("b.bin", "rb");

    if (fp == NULL) {
        printf("b.bin 파일을 열 수 없습니다.");
        return 1;
    }
    fread(num, sizeof(int), 10, fp);

    for (i = 0;i < 10;i++) {
        printf("%d\n", num[i]);
    }
    fclose(fp);
    return 0;
}
