#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void A(int arr[], int len);

int main(void)
{
    int arr[7];
    for (int i = 0;i < 7;i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    A(arr, sizeof(arr)/sizeof(int));
    printf("내림차순 정렬: ");
    for (int j = 0;j < 7;j++)
    {
        printf("%d ", arr[j]);
    }

}

void A(int arr[], int len)
{
    for (int i = 0; i < len-1;i++)
    {
        for (int j = 0; j < (len - i) - 1;j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
