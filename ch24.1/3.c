#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    char A[100];
    int ch;

    printf("문자열을 입력하시오: ");
    fgets(A, sizeof(A), stdin);
    
    FILE* fp = fopen("result.txt", "wt");
    
    if (fp == NULL) {
        printf("파일오픈 실패!"); 
        return -1;
    }

    for (int i = 0;A[i] != '\0';i++) {
        if (A[i] == ' ') {
            fputc('\n', fp);
        }
        else {
            fputc(A[i], fp);
        }
    }
    fclose(fp);
    return 0;

}
