#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int ch;
    int space = 0;
    FILE* fp = fopen("test.txt", "rt");
    if (fp == NULL) {
        printf("파일오픈 실패!");
        return -1;
    }
    while (1) {
        ch = fgetc(fp);

        if (ch == EOF)break;

        if (space == 1 && ch == ' ') {
            continue;
        }
        printf("%c", ch);
        if (ch == '.') {
            printf("\n");
            space = 1;
        }
        else {
            space = 0;
        }
    }
    fclose(fp);

    return 0;
}
