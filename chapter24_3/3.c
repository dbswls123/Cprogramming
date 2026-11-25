#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    FILE* fp1;
    FILE* fp2;
    long size1, size2;

    fp1 = fopen("a.txt", "rb");

    if (fp1 == NULL) {
        printf("a.txt 파일을 열 수 없습니다.\n");
        return 1;
    }

    fp2 = fopen("b.bin", "rb");

    if (fp2 == NULL) {
        printf("b.bin 파일을 열 수 없습니다.\n");
        fclose(fp1);
        return 1;
    }

    fseek(fp1, 0, SEEK_END);
    size1 = ftell(fp1);

    fseek(fp2, 0, SEEK_END);
    size2 = ftell(fp2);

    printf("a.txt의 파일크기: %ld바이트\n", size1);
    printf("b.bin의 파일크기: %ld바이트\n", size2);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
