//20장 6번 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int user[3], computer[3];
    int count=1;
    
    srand((int)time(NULL));
    
    for(int i=0;i<3;i++)
        computer[i]=rand()%10;
    
    printf("Start Game!\n");
    while(1){
        int strike=0, ball=0;
        
        printf("3개의 숫자 선택: ");
        for(int i=0;i<3;i++){
            scanf("%d", &user[i]);
        }
        for (int j=0;j<3;j++){
            if (user[j]==computer[j])
                strike++;
            for(int k=0;k<3;k++){
                if(user[j]==computer[k])
                    ball++;
            }
        }
        if (ball>=strike)
            ball=ball-strike;
        
        printf("%d번째 도전 결과: ", count);
        if(strike==3){
            printf("3strike, 0ball!!\n");
            break;
        }
        else{
            printf("%dstrike, %dball!!\n", strike, ball);
        }
        count++;
    }
}
