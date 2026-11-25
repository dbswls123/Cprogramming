#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    FILE* fp1;
    FILE* fp2;
    int num[10];
    int i;

    fp1 = fopen("a.txt", "rt");

    if (fp1 == NULL) {
        printf("a.txt 파일을 열 수 없습니다.\n");
        return 1;
    }

    fp2 = fopen("b.bin", "wb");

    if (fp2 == NULL) {
        printf("b.bin 파일을 열 수 없습니다.\n");
        fclose(fp1);
        return 1;
    }

    for (i = 0; i < 10; i++) {
        fscanf(fp1, "%d", &num[i]);
    }

    fwrite(num, sizeof(int), 10, fp2);

    printf("파일 저장이 완료되었습니다.\n");


    fclose(fp1);
    fclose(fp2);

    return 0;
}
