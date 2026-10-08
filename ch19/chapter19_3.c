#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calculate(int (*A)(int, int));
int add(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
int divide(int a, int b);

int main(void)
{
    int choice;

    printf("연산을 선택하시오(1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈) : ");
    scanf("%d", &choice);

    if (choice == 1)
        calculate(add);

    else if (choice == 2)
        calculate(sub);

    else if (choice == 3)
        calculate(multi);

    else if (choice == 4)
        calculate(divide);

    else
        printf("잘못된 선택입니다.\n");

    return 0;
}

void calculate(int (*A)(int, int)) {
    int a, b;

    printf("두개의 정수를 입력하시오 : ");
    scanf("%d %d", &a, &b);

    printf("결과값: %d\n", A(a, b));
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int multi(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}
