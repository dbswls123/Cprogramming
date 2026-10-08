#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculate(int (*A)(int, int), int a, int b);
int sub(int a, int b);
int add(int a, int b);
int main(void) {
    printf("덧셈 결과: %d\n", calculate(add, 10, 5));
    printf("뺄셈 결과: %d\n", calculate(sub, 10, 5));

    return 0;
}

int calculate(int (*A)(int, int), int a, int b) {
    return A(a, b);
}

int sub(int a, int b) {
    return a - b;
}

int add(int a, int b) {
    return a + b;
}
