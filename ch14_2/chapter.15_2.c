#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;
    int arr[100];
    int count = 0;
    printf("10진수 정수 입력: ");
    scanf("%d", &num);

    while (num > 0) {
        if (num % 2 == 0)
            arr[count] = 0;
        else
            arr[count] = 1;
        num = num / 2;
        count++;
    }
    for (int i = count - 1;i >= 0;i--)
    {
        printf("%d", arr[i]);
    }
}
