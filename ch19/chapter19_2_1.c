#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int a, int b);
int Sub(int a, int b);
void calculate(int a, int b, int(*A)(int, int));

int main(void){
    calculate(10, 5, Add);
    calculate(10, 5, Sub);

    return 0;
}

void calculate(int a, int b, int (*A)(int, int)) {
    printf("결과: %d\n", A(a, b));
}

int Add(int a, int b){
    return a + b;
}

int Sub(int a, int b){
    return a - b;
}
