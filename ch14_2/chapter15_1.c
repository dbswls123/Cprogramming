#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void A(int arr[], int count);

int main(void)
{
    int arr[100];
    int count = 0;
    printf("q입력시 종료\n");
    while (1)
    {
        printf("입력: ");
        if (scanf("%d", &arr[count]) != 1)
            break;
        count++;
    }
    A(arr, count);
    return 0;
}

void A(int arr[], int count)
{
    printf("홀수 출력: ");
    for (int i = 0; i < count;i++)
    {
        if (arr[i] % 2 == 1)
            printf("%d, ", arr[i]);
    }
    printf("\n");
    printf("짝수 출력: ");
    for (int i = 0; i < count;i++)
    {
        if (arr[i] % 2 == 0)
            printf("%d, ", arr[i]);
    }
} 
