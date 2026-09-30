// **********************************************
// 제 목 : 최소값 구하기 예제를 참고하여 아래 결과가 나오도록 코드수
// 날 짜 : 2026년 09월 30일
// 작성자 : 2600200 최윤진
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int find_max(int data[]);
int main(void) {
    int data[5];
    printf("정수 5개를 입력하시오: ");
    for (int i = 0;i < 5;i++) {  
        scanf("%d", &data[i]);
    }
    printf("최대값은 %d입니다.", find_max(data));
    return 0;
}
int find_max(int data[]) {
    int max = data[0];
    for (int i = 0;i < 5;i++) {
        if (max < data[i])
            max = data[i];
    }
    return max;
}
