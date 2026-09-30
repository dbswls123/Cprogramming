#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void divide(double num, int* A, double* B); //A는 정수부, B는 소수부
int main(void) {
	double num;
    int a;
    double b;

	printf("실수를 입력하시오:");
	scanf("%lf", &num);
    divide(num, &a, &b);

    printf("정수부:%d\n", a);
    printf("소수부:%f", b);

}

void divide(double num, int* A, double* B) {
    *A = (int)num;
    *B = num - *A;
}
