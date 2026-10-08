#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void A(void* ptr);

int main(void){
    int num = 10;

    A(&num);

    return 0;
}

void A(void* ptr) {
    printf("%d\n", *(int*)ptr);
}
